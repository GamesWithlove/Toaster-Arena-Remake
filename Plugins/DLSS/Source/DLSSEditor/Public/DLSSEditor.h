/*
* Copyright (c) 2020 NVIDIA CORPORATION.  All rights reserved.
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

#pragma once

#include "Modules/ModuleManager.h"


class FDLSSUpscalerEditor;

class IDLSSEditorModuleInterface : public IModuleInterface
{
public:
	virtual FDLSSUpscalerEditor* GetDLSSUpscalerEditor() const = 0;
};

class FDLSSEditorModule final : public IDLSSEditorModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() final;
	virtual void ShutdownModule() final;


	// Inherited via IDLSSEditorModuleInterface
	virtual FDLSSUpscalerEditor* GetDLSSUpscalerEditor() const ;
private:
	TSharedPtr<FDLSSUpscalerEditor> DLSSUpscalerEditor;
	bool bIsDLSSAvailable = false;
};


