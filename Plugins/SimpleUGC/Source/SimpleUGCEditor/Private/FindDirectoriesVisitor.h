// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

// straight copy from Engine/Source/Runtime/Core/Private/GenericPlatform/GenericPlatformFile.cpp::FFindFilesVisitor
// modified to find directories instead of files (FFindFilesVisitor find files only and explicitly ignores directories)
class FFindDirectoriesVisitor : public IPlatformFile::FDirectoryVisitor
{
public:
	IPlatformFile&   PlatformFile;
	FRWLock          FoundFilesLock;
	TArray<FString>& FoundFiles;
	FFindDirectoriesVisitor(IPlatformFile& InPlatformFile, TArray<FString>& InFoundFiles)
		: IPlatformFile::FDirectoryVisitor(EDirectoryVisitorFlags::ThreadSafe)
		, PlatformFile(InPlatformFile)
		, FoundFiles(InFoundFiles)
	{
	}
	virtual bool Visit(const TCHAR* FilenameOrDirectory, bool bIsDirectory) override
	{
		if (bIsDirectory)
		{
			FString FileName(FilenameOrDirectory);
			FRWScopeLock ScopeLock(FoundFilesLock, SLT_Write);
			FoundFiles.Emplace(MoveTemp(FileName));
		}
		return true;
	}
};
