/*
* Copyright (c) 2020 - 2021 NVIDIA CORPORATION.  All rights reserved.
*
* NVIDIA Corporation and its licensors retain all intellectual property and proprietary
* rights in and to this software, related documentation and any modifications thereto.
* Any use, reproduction, disclosure or distribution of this software and related
* documentation without an express license agreement from NVIDIA Corporation is strictly
* prohibited.
*
* TO THE MAXIMUM EXTENT PERMITTED BY APPLICABLE LAW, THIS SOFTWARE IS PROVIDED *AS IS*
* AND NVIDIA AND ITS SUPPLIERS DISCLAIM ALL WARRANTIES, EITHER EXPRESS OR IMPLIED,
* INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
* PARTICULAR PURPOSE.  IN NO EVENT SHALL NVIDIA OR ITS SUPPLIERS BE LIABLE FOR ANY
* SPECIAL, INCIDENTAL, INDIRECT, OR CONSEQUENTIAL DAMAGES WHATSOEVER (INCLUDING, WITHOUT
* LIMITATION, DAMAGES FOR LOSS OF BUSINESS PROFITS, BUSINESS INTERRUPTION, LOSS OF
* BUSINESS INFORMATION, OR ANY OTHER PECUNIARY LOSS) ARISING OUT OF THE USE OF OR
* INABILITY TO USE THIS SOFTWARE, EVEN IF NVIDIA HAS BEEN ADVISED OF THE POSSIBILITY OF
* SUCH DAMAGES.
*/

#include "NGXD3D11RHI.h"

#include "nvsdk_ngx.h"
#include "nvsdk_ngx_helpers.h"

#include "D3D11RHIPrivate.h"
#include "D3D11Util.h"
#include "D3D11State.h"
#include "D3D11Resources.h"
#include "D3D11Viewport.h"
#include "D3D11ConstantBuffer.h"
#include "D3D11StateCache.h"
#include "RHIValidationCommon.h"

#include "GenericPlatform/GenericPlatformFile.h"
DEFINE_LOG_CATEGORY_STATIC(LogDLSSNGXD3D11RHI, Log, All);

#define LOCTEXT_NAMESPACE "FNGXD3D11RHIModule"

class FD3D11NGXFeatureHandle final : public NGXDLSSFeature
{
	
public:

	using NGXDLSSFeature::NGXDLSSFeature;

	virtual ~FD3D11NGXFeatureHandle()
	{
		check(!IsRunningRHIInSeparateThread() || IsInRHIThread());
		check(NGXRHI::NGXInitialized());
		NVSDK_NGX_Result ResultReleaseFeature = NVSDK_NGX_D3D11_ReleaseFeature(Feature);
		checkf(NVSDK_NGX_SUCCEED(ResultReleaseFeature), TEXT("NVSDK_NGX_D3D11_ReleaseFeature failed! (%u %s), %s"), ResultReleaseFeature, GetNGXResultAsString(ResultReleaseFeature), *Desc.GetDebugDescription());

		if (Parameter != nullptr)
		{
			NVSDK_NGX_Result ResultDestroyParameter = NVSDK_NGX_D3D11_DestroyParameters(Parameter);
			checkf(NVSDK_NGX_SUCCEED(ResultDestroyParameter), TEXT("NVSDK_NGX_D3D11_DestroyParameters failed! (%u %s), %s"), ResultDestroyParameter, GetNGXResultAsString(ResultDestroyParameter), *Desc.GetDebugDescription());
		}
	}
};

class FNGXD3D11RHI final : public NGXRHI
{
public:
	FNGXD3D11RHI(const FNGXRHICreateArguments& Arguments);
	
	virtual void ExecuteDLSS(FRHICommandList& CmdList, const FRHIDLSSArguments& InArguments, FDLSSStateRef InDLSSState) final;
	virtual ~FNGXD3D11RHI();
private:

	FD3D11DynamicRHI* D3D11RHI = nullptr;
	ID3D11Device* Direct3DDevice = nullptr;
	ID3D11DeviceContext* Direct3DDeviceIMContext = nullptr;

	NVSDK_NGX_Result Init_NGX_D3D11(const FNGXRHICreateArguments& InArguments, const wchar_t* InApplicationDataPath, ID3D11Device* InHandle, const NVSDK_NGX_FeatureCommonInfo* InFeatureInfo);
	static bool IsIncompatibleAPICaptureToolActive(ID3D11Device* InDirect3DDevice);

};

bool FNGXD3D11RHI::IsIncompatibleAPICaptureToolActive(ID3D11Device* InDirect3DDevice)
{
	// RenderDoc
	{
		IID RenderDocID;
		if (SUCCEEDED(IIDFromString(L"{A7AA6116-9C8D-4BBA-9083-B4D816B71B78}", &RenderDocID)))
		{
			TRefCountPtr<IUnknown> RenderDoc;
			if (SUCCEEDED(InDirect3DDevice->QueryInterface(RenderDocID, (void**)RenderDoc.GetInitReference())))
			{
				return true;
			}
		}
	}
	return false;
}

NVSDK_NGX_Result FNGXD3D11RHI::Init_NGX_D3D11(const FNGXRHICreateArguments& InArguments, const wchar_t* InApplicationDataPath, ID3D11Device* InHandle, const NVSDK_NGX_FeatureCommonInfo* InFeatureInfo)
{
	NVSDK_NGX_Result Result = NVSDK_NGX_Result_Fail;
	int32 APIVersion = NVSDK_NGX_VERSION_API_MACRO;
	do 
	{
		if (InArguments.InitializeNGXWithNGXApplicationID())
		{
			Result = NVSDK_NGX_D3D11_Init(InArguments.NGXAppId, InApplicationDataPath, InHandle, InFeatureInfo, static_cast<NVSDK_NGX_Version>(APIVersion));
			UE_LOG(LogDLSSNGXD3D11RHI, Log, TEXT("NVSDK_NGX_D3D11_Init(AppID= %u, APIVersion = 0x%x) -> (%u %s)"), InArguments.NGXAppId, APIVersion, Result, GetNGXResultAsString(Result));
		}
		else
		{
			Result = NVSDK_NGX_D3D11_Init_with_ProjectID(TCHAR_TO_UTF8(*InArguments.UnrealProjectID), NVSDK_NGX_ENGINE_TYPE_UNREAL, TCHAR_TO_UTF8(*InArguments.UnrealEngineVersion), InApplicationDataPath, InHandle, InFeatureInfo, static_cast<NVSDK_NGX_Version>(APIVersion));
			UE_LOG(LogDLSSNGXD3D11RHI, Log, TEXT("NVSDK_NGX_D3D11_Init_with_ProjectID(ProjectID = %s, EngineVersion=%s, APIVersion = 0x%x) -> (%u %s)"), *InArguments.UnrealProjectID, *InArguments.UnrealEngineVersion, APIVersion, Result, GetNGXResultAsString(Result));
		}

		if (NVSDK_NGX_FAILED(Result) && IsSafeToShutdownNGX())
		{
			NVSDK_NGX_D3D11_Shutdown1(InHandle);
		}
		
		--APIVersion;
	} while (NVSDK_NGX_FAILED(Result) && APIVersion >= NVSDK_NGX_VERSION_API_MACRO_BASE_LINE);

	if (!NVSDK_NGX_FAILED(Result) && (APIVersion + 1 < NVSDK_NGX_VERSION_API_MACRO_WITH_LOGGING))
	{
		UE_LOG(LogDLSSNGXD3D11RHI, Log, TEXT("Warning: NVSDK_NGX_D3D11_Init succeeded, but the driver installed on this system is too old the support the NGX logging API. The console variables r.NGX.LogLevel and r.NGX.EnableOtherLoggingSinks will have no effect and NGX logs will only show up in their own log files, and not in UE's log files."));
	}

	return Result;
}

FNGXD3D11RHI::FNGXD3D11RHI(const FNGXRHICreateArguments& Arguments)
	: NGXRHI(Arguments)
	, D3D11RHI(static_cast<FD3D11DynamicRHI*>(Arguments.DynamicRHI))
	, Direct3DDevice(D3D11RHI->GetDevice())
	, Direct3DDeviceIMContext(D3D11RHI->GetDeviceContext())
{
	ensure(D3D11RHI);
	ensure(Direct3DDevice);

	bIsIncompatibleAPICaptureToolActive = IsIncompatibleAPICaptureToolActive(Direct3DDevice);
	
	const FString NGXLogDir = GetNGXLogDirectory();
	IPlatformFile::GetPlatformPhysical().CreateDirectoryTree(*NGXLogDir);

	NVSDK_NGX_Result ResultInit = Init_NGX_D3D11(Arguments, *NGXLogDir, Direct3DDevice, CommonFeatureInfo());
	UE_LOG(LogDLSSNGXD3D11RHI, Log, TEXT("NVSDK_NGX_D3D11_Init (Log %s) -> (%u %s)"), *NGXLogDir, ResultInit, GetNGXResultAsString(ResultInit));
	
	// store for the higher level code interpret
	DLSSQueryFeature.DLSSInitResult = ResultInit;

	if (NVSDK_NGX_Result_FAIL_OutOfDate == ResultInit)
	{
		DLSSQueryFeature.DriverRequirements.DriverUpdateRequired = true;
	}
	else if (NVSDK_NGX_SUCCEED(ResultInit))
	{
		bNGXInitialized = true;

		NVSDK_NGX_Result ResultGetParameters = NVSDK_NGX_D3D11_GetCapabilityParameters(&DLSSQueryFeature.CapabilityParameters);

		UE_LOG(LogDLSSNGXD3D11RHI, Log, TEXT("NVSDK_NGX_D3D11_GetCapabilityParameters -> (%u %s)"), ResultGetParameters, GetNGXResultAsString(ResultGetParameters));

		if (NVSDK_NGX_Result_FAIL_OutOfDate == ResultGetParameters)
		{
			DLSSQueryFeature.DriverRequirements.DriverUpdateRequired = true;
		}

		if (NVSDK_NGX_SUCCEED(ResultGetParameters))
		{
			DLSSQueryFeature.QueryDLSSSupport();
		}
	}
}

FNGXD3D11RHI::~FNGXD3D11RHI()
{
	UE_LOG(LogDLSSNGXD3D11RHI, Log, TEXT("%s Enter"), ANSI_TO_TCHAR(__FUNCTION__));
	if(bNGXInitialized)
	{
		// Destroy the parameters and features before we call NVSDK_NGX_D3D11_Shutdown1
		ReleaseAllocatedFeatures();

		NVSDK_NGX_Result Result;
		if (DLSSQueryFeature.CapabilityParameters != nullptr)
		{
			Result = NVSDK_NGX_D3D11_DestroyParameters(DLSSQueryFeature.CapabilityParameters);
			UE_LOG(LogDLSSNGXD3D11RHI, Log, TEXT("NVSDK_NGX_D3D11_DestroyParameters -> (%u %s)"), Result, GetNGXResultAsString(Result));
		}
		if (IsSafeToShutdownNGX())
		{
			Result = NVSDK_NGX_D3D11_Shutdown1(Direct3DDevice);
			UE_LOG(LogDLSSNGXD3D11RHI, Log, TEXT("NVSDK_NGX_D3D11_Shutdown1 -> (%u %s)"), Result, GetNGXResultAsString(Result));
		}
		bNGXInitialized = false;
	}
	UE_LOG(LogDLSSNGXD3D11RHI, Log, TEXT("%s Leave"), ANSI_TO_TCHAR(__FUNCTION__));
}


void FNGXD3D11RHI::ExecuteDLSS(FRHICommandList& CmdList, const FRHIDLSSArguments& InArguments, FDLSSStateRef InDLSSState)
{
	check(!IsRunningRHIInSeparateThread() || IsInRHIThread());
	check(IsDLSSAvailable());
	if (!IsDLSSAvailable()) 
		return;
	InArguments.Validate();

	if (InDLSSState->RequiresFeatureRecreation(InArguments))
	{
		check(!InDLSSState->DLSSFeature || InDLSSState->HasValidFeature());
		InDLSSState->DLSSFeature = nullptr;
	}
	
	if (InArguments.bReset)
	{
		check(!InDLSSState->DLSSFeature);
		InDLSSState->DLSSFeature = FindFreeFeature(InArguments);
	}

	if (!InDLSSState->DLSSFeature)
	{
		NVSDK_NGX_Parameter* NewNGXParameterHandle = nullptr;

		NVSDK_NGX_Result Result = NVSDK_NGX_D3D11_AllocateParameters(&NewNGXParameterHandle);
		checkf(NVSDK_NGX_SUCCEED(Result), TEXT("NVSDK_NGX_D3D11_AllocateParameters failed! (%u %s)"), Result, GetNGXResultAsString(Result));
	
		ApplyCommonNGXParameterSettings(NewNGXParameterHandle, InArguments);

		NVSDK_NGX_DLSS_Create_Params DlssCreateParams = InArguments.GetNGXDLSSCreateParams();
		NVSDK_NGX_Handle* NewNGXHandle = nullptr;
		NVSDK_NGX_Result ResultCreate = NGX_D3D11_CREATE_DLSS_EXT(
			Direct3DDeviceIMContext,
			&NewNGXHandle,
			NewNGXParameterHandle,
			&DlssCreateParams);
		checkf(NVSDK_NGX_SUCCEED(ResultCreate), TEXT("NGX_D3D11_CREATE_DLSS failed! (%u %s), %s"), ResultCreate, GetNGXResultAsString(ResultCreate), *InArguments.GetFeatureDesc().GetDebugDescription());
			
		InDLSSState->DLSSFeature = MakeShared<FD3D11NGXFeatureHandle>(NewNGXHandle, NewNGXParameterHandle, InArguments.GetFeatureDesc(), FrameCounter);
		RegisterFeature(InDLSSState->DLSSFeature);
	}
	
	check(InDLSSState->HasValidFeature());

	// execute

	D3D11RHI->RegisterGPUWork(1);

	NVSDK_NGX_D3D11_DLSS_Eval_Params DlssEvalParams;
	FMemory::Memzero(DlssEvalParams);

	DlssEvalParams.Feature.pInOutput = GetD3D11TextureFromRHITexture(InArguments.OutputColor)->GetResource();
	DlssEvalParams.InOutputSubrectBase.X = InArguments.DestRect.Min.X;
	DlssEvalParams.InOutputSubrectBase.Y = InArguments.DestRect.Min.Y;

	DlssEvalParams.InRenderSubrectDimensions.Width = InArguments.SrcRect.Width();
	DlssEvalParams.InRenderSubrectDimensions.Height = InArguments.SrcRect.Height();

	DlssEvalParams.Feature.pInColor = GetD3D11TextureFromRHITexture(InArguments.InputColor)->GetResource();
	DlssEvalParams.InColorSubrectBase.X = InArguments.SrcRect.Min.X;
	DlssEvalParams.InColorSubrectBase.Y = InArguments.SrcRect.Min.Y;

	DlssEvalParams.pInDepth = GetD3D11TextureFromRHITexture(InArguments.InputDepth)->GetResource();
	DlssEvalParams.InDepthSubrectBase.X = InArguments.SrcRect.Min.X;
	DlssEvalParams.InDepthSubrectBase.Y = InArguments.SrcRect.Min.Y;

	// The VelocityCombine pass puts the motion vectors into the top left corner
	DlssEvalParams.pInMotionVectors = GetD3D11TextureFromRHITexture(InArguments.InputMotionVectors)->GetResource();
	DlssEvalParams.InMVSubrectBase.X = 0;
	DlssEvalParams.InMVSubrectBase.Y = 0;

	DlssEvalParams.pInExposureTexture = InArguments.bUseAutoExposure ? nullptr : GetD3D11TextureFromRHITexture(InArguments.InputExposure)->GetResource();
	DlssEvalParams.InPreExposure = InArguments.PreExposure;

	DlssEvalParams.Feature.InSharpness = InArguments.Sharpness;
	DlssEvalParams.InJitterOffsetX = InArguments.JitterOffset.X;
	DlssEvalParams.InJitterOffsetY = InArguments.JitterOffset.Y;

	DlssEvalParams.InMVScaleX = InArguments.MotionVectorScale.X;
	DlssEvalParams.InMVScaleY = InArguments.MotionVectorScale.Y;
	DlssEvalParams.InReset = InArguments.bReset;

	DlssEvalParams.InFrameTimeDeltaInMsec = InArguments.DeltaTime;


	NVSDK_NGX_Result ResultEvaluate = NGX_D3D11_EVALUATE_DLSS_EXT(
		Direct3DDeviceIMContext,
		InDLSSState->DLSSFeature->Feature,
		InDLSSState->DLSSFeature->Parameter,
		&DlssEvalParams
	);
	checkf(NVSDK_NGX_SUCCEED(ResultEvaluate), TEXT("NGX_D3D11_EVALUATE_DLSS_EXT failed! (%u %s), %s"), ResultEvaluate, GetNGXResultAsString(ResultEvaluate), *InDLSSState->DLSSFeature->Desc.GetDebugDescription());
	
	InDLSSState->DLSSFeature->Tick(FrameCounter);
}

/** IModuleInterface implementation */

void FNGXD3D11RHIModule::StartupModule()
{
	// NGXRHI module should be loaded to ensure logging state is initialized
	FModuleManager::LoadModuleChecked<INGXRHIModule>(TEXT("NGXRHI"));
}

void FNGXD3D11RHIModule::ShutdownModule()
{
}

TUniquePtr<NGXRHI> FNGXD3D11RHIModule::CreateNGXRHI(const FNGXRHICreateArguments& Arguments)
{
	TUniquePtr<NGXRHI> Result(new FNGXD3D11RHI(Arguments));
	return Result;
}

IMPLEMENT_MODULE(FNGXD3D11RHIModule, NGXD3D11RHI)

#undef LOCTEXT_NAMESPACE


