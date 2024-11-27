// Copyright Epic Games, Inc. All Rights Reserved.

#include "Compute/PCGComputeGraph.h"

#include "PCGGraph.h"
#include "PCGModule.h"
#include "PCGNode.h"
#include "Compute/PCGCompilerDiagnostic.h"
#include "Metadata/PCGMetadata.h"

#include "ComputeFramework/ComputeKernelCompileResult.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGComputeGraph)

static FPCGCompilerDiagnostic ProcessCompilationMessage(const FComputeKernelCompileMessage& InMessage)
{
	FPCGCompilerDiagnostic Diagnostic;

	if (InMessage.Type == FComputeKernelCompileMessage::EMessageType::Error)
	{
		Diagnostic.Level = EPCGDiagnosticLevel::Error;
	}
	else if (InMessage.Type == FComputeKernelCompileMessage::EMessageType::Warning)
	{
		Diagnostic.Level = EPCGDiagnosticLevel::Warning;
	}
	else if (InMessage.Type == FComputeKernelCompileMessage::EMessageType::Info)
	{
		Diagnostic.Level = EPCGDiagnosticLevel::Info;
	}

	Diagnostic.Line = InMessage.Line;
	Diagnostic.ColumnStart = InMessage.ColumnStart;
	Diagnostic.ColumnEnd = InMessage.ColumnEnd;

	FString Message;
	if (!InMessage.VirtualFilePath.IsEmpty())
	{
		Message = InMessage.VirtualFilePath;
		if (InMessage.Line != -1)
		{
			if (InMessage.ColumnStart == InMessage.ColumnEnd)
			{
				Message += FString::Printf(TEXT(" (%d,%d)"), InMessage.Line, InMessage.ColumnStart);
			}
			else
			{
				Message += FString::Printf(TEXT(" (%d,%d-%d)"), InMessage.Line, InMessage.ColumnStart, InMessage.ColumnEnd);
			}
		}
		Message += TEXT(": ");
	}
	Message += InMessage.Text;
	Diagnostic.Message = FText::FromString(Message);

	return Diagnostic;
}

void UPCGComputeGraph::OnKernelCompilationComplete(int32 InKernelIndex, FComputeKernelCompileResults const& InCompileResults)
{
	const UPCGNode* Node = (KernelToNode.IsValidIndex(InKernelIndex) && KernelToNode[InKernelIndex].IsValid()) ? KernelToNode[InKernelIndex].Get() : nullptr;

	if (Node)
	{
		KernelToCompileMessages.FindOrAdd(KernelToNode[InKernelIndex].Get()) = InCompileResults.Messages;

		UPCGGraph* Graph = Cast<UPCGGraph>(Node->GetOuter());
		if (Graph)
		{
			FPCGCompilerDiagnostics Diagnostics;
			Diagnostics.Diagnostics.Reserve(InCompileResults.Messages.Num());

			Algo::Transform(InCompileResults.Messages, Diagnostics.Diagnostics, [](const FComputeKernelCompileMessage& InMessage)
			{
				return ProcessCompilationMessage(InMessage);
			});

#if WITH_EDITOR
			Graph->OnNodeSourceCompiledDelegate.Broadcast(Node, Diagnostics);
#endif
		}
	}
	else
	{
		// We may in general have kernels with no corresponding node.
		UE_LOG(LogPCG, Verbose, TEXT("Compilation message ignored for kernel index %d which has no associated node."), InKernelIndex);
	}
}
