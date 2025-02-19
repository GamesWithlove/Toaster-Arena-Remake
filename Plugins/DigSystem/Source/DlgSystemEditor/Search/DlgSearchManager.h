// Copyright Csaba Molnar, Daniel Butum. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "Widgets/Docking/SDockTab.h"

#include "DlgSearchResult.h"

// The maximum amount of global Dialogue Search windows opened.
static constexpr int32 MAX_GLOBAL_DIALOGUE_SEARCH_RESULTS = 4;

class SDlgFindInDialogues;
class FAssetRegistryModule;

class FWorkspaceItem;
class UDialogueGraphNode;
class UDialogueGraphNode_Edge;
class UEdGraphNode_Comment;
class IAssetRegistry;
struct FAssetData;
struct FDlgCondition;
struct FDlgEvent;
struct FDlgEdge;
struct FDlgTextArgument;

struct DLGSYSTEMEDITOR_API FDialogueSearchData
{
	/** The Dialogue this search data points to, if available */
	TWeakObjectPtr<UDlgDialogue> Dialogue;
};

/** Singleton manager for handling all Dialogue searches */
class DLGSYSTEMEDITOR_API FDlgSearchManager
{
private:
	typedef FDlgSearchManager Self;

public:
	static Self* Get();

	FDlgSearchManager();
	~FDlgSearchManager();

	/**
	 * Searches for InSearchString in the InDlgTextArgument. Adds the result as a child in OutParentNode.
	 * @return True if found anything matching the InSearchString
	 */
	bool QueryDlgTextArgument(
		const FDlgSearchFilter& SearchFilter,
		const FDlgTextArgument& InDlgTextArgument,
		const TSharedPtr<FDlgSearchResult>& OutParentNode,
		int32 ArgumentIndex = INDEX_NONE
	);

	/**
	 * Searches for InSearchString in the InDlgCondition. Adds the result as a child in OutParentNode.
	 * @return True if found anything matching the InSearchString
	 */
	bool QueryDlgCondition(
		const FDlgSearchFilter& SearchFilter,
		const FDlgCondition& InDlgCondition,
		const TSharedPtr<FDlgSearchResult>& OutParentNode,
		int32 ConditionIndex = INDEX_NONE,
		FName ConditionMemberName = TEXT("Condition")
	);

	/**
	 * Searches for InSearchString in the InDlgEvent. Adds the result as a child in OutParentNode.
	 * @return True if found anything matching the InSearchString
	 */
	bool QueryDlgEvent(
		const FDlgSearchFilter& SearchFilter,
		const FDlgEvent& InDlgEvent,
		const TSharedPtr<FDlgSearchResult>& OutParentNode,
		int32 EventIndex = INDEX_NONE,
		FName EventMemberName = TEXT("Event")
	);

	/**
	 * Searches for InSearchString in the InDlgEdge. Adds the result as a child in OutParentNode.
	 * @return True if found anything matching the InSearchString
	 */
	bool QueryDlgEdge(
		const FDlgSearchFilter& SearchFilter,
		const FDlgEdge& InDlgEdge,
		const TSharedPtr<FDlgSearchResult>& OutParentNode
	);

	/**
	 * Searches for InSearchString in the InGraphNode. Adds the result as a child in OutParentNode.
	 * @return True if found anything matching the InSearchString
	 */
	bool QueryGraphNode(
		const FDlgSearchFilter& SearchFilter,
		const UDialogueGraphNode* InGraphNode,
		const TSharedPtr<FDlgSearchResult>& OutParentNode
	);

	/**
	 * Searches for InSearchString in the InEdgeNode. Adds the result as a child in OutParentNode.
	 * @return True if found anything matching the InSearchString
	 */
	bool QueryEdgeNode(
		const FDlgSearchFilter& SearchFilter,
		const UDialogueGraphNode_Edge* InEdgeNode,
		const TSharedPtr<FDlgSearchResult>& OutParentNode
	);

	/**
	 * Searches for InSearchString in the Comment Node. Adds the result as a child in OutParentNode.
	 * @return True if found anything matching the InSearchString
	 */
	bool QueryCommentNode(
		const FDlgSearchFilter& SearchFilter,
		const UEdGraphNode_Comment* InCommentNode,
		const TSharedPtr<FDlgSearchResult>& OutParentNode
	);

	/**
	 * Searches for InSearchString in the InDialogue. Adds the result as a child of OutParentNode.
	 * @return True if found anything matching the InSearchString
	 */
	bool QuerySingleDialogue(
		const FDlgSearchFilter& SearchFilter,
		const UDlgDialogue* InDialogue,
		TSharedPtr<FDlgSearchResult>& OutParentNode
	);

	// Searches for InSearchString in all Dialogues. Adds the result as children of OutParentNode.
	void QueryAllDialogues(const FDlgSearchFilter& SearchFilter, TSharedPtr<FDlgSearchResult>& OutParentNode);

	// Determines the global find results tab label
	FText GetGlobalFindResultsTabLabel(int32 TabIdx);

	// Close One of the global find results.
	void CloseGlobalFindResults(const TSharedRef<SDlgFindInDialogues>& FindResults);

	// Find or create the global find results widget
	TSharedPtr<SDlgFindInDialogues> GetGlobalFindResults();

	// Enables the global find results tab feature in the Windows Menu.
	void EnableGlobalFindResults(TSharedPtr<FWorkspaceItem> ParentTabCategory = nullptr);

	// Disables the global find results tab feature in the Windows Menu.
	void DisableGlobalFindResults();

	// Initializes the manager. Should only be called once in the FDlgSystemEditorModule::StartupModule()
	void Initialize(TSharedPtr<FWorkspaceItem> ParentTabCategory = nullptr);

	// Uninitializes the manager. Should only be called once in the FDlgSystemEditorModule::ShutdownModule()
	void UnInitialize();

private:
	// Helper method to make a Text Node and add it as a child to ParentNode
	TSharedPtr<FDlgSearchResult> MakeChildTextNode(
		const TSharedPtr<FDlgSearchResult>& ParentNode,
		const FText& DisplayName, const FText& Category,
		const FString& CommentString
	)
	{
		TSharedPtr<FDlgSearchResult> TextNode = MakeShared<FDlgSearchResult>(DisplayName, ParentNode);
		TextNode->SetCategory(Category);
		if (!CommentString.IsEmpty())
		{
			TextNode->SetCommentString(CommentString);
		}
		ParentNode->AddChild(TextNode);
		return TextNode;
	}

	bool SearchForTextLocalizationData(
		const TSharedPtr<FDlgSearchResult>& ParentNode,
		const FString& SearchString,
		const FText& Text,
		const FText& NamespaceCategory,
		const FString& NamespaceCommentString,
		const FText& KeyCategory,
		const FString& KeyCommentString
	)
	{
		static const FString DefaultValue = TEXT("");
		bool bContainsSearchString = false;

		const FString CurrentFullNamespace = FTextInspector::GetNamespace(Text).Get(DefaultValue);
		const FString CurrentKey = FTextInspector::GetKey(Text).Get(DefaultValue);
		if (CurrentFullNamespace.Contains(SearchString))
		{
			bContainsSearchString = true;
			MakeChildTextNode(
				ParentNode,
				FText::AsCultureInvariant(CurrentFullNamespace),
				NamespaceCategory,
				NamespaceCommentString
			);
		}
		if (CurrentKey.Contains(SearchString))
		{
			bContainsSearchString = true;
			MakeChildTextNode(
				ParentNode,
				FText::AsCultureInvariant(CurrentKey),
				KeyCategory,
				KeyCommentString
			);
		}

		return bContainsSearchString;
	}

	// Handler for a request to spawn a new global find results tab
	TSharedRef<SDockTab> SpawnGlobalFindResultsTab(const FSpawnTabArgs& SpawnTabArgs, int32 TabIdx);

	// Creates and opens a new global find results tab. The next one in the available list.
	TSharedPtr<SDlgFindInDialogues> OpenGlobalFindResultsTab();

	// Builds the cache from all available Dialogues assets that the asset registry has discovered at the time of this function. Occurs on startup.
	void BuildCache();

	// Callback hook from the Asset Registry when an asset is added
	void HandleOnAssetAdded(const FAssetData& InAssetData);

	// Callback hook from the Asset Registry, marks the asset for deletion from the cache
	void HandleOnAssetRemoved(const FAssetData& InAssetData);

	// Callback hook from the Asset Registry, marks the asset for deletion from the cache
	void HandleOnAssetRenamed(const FAssetData& InAssetData, const FString& InOldName);

	// Callback hook from the Asset Registry when an asset is loaded
	void HandleOnAssetLoaded(UObject* InAsset);

	// Callback when the Asset Registry loads all its assets
	void HandleOnAssetRegistryFilesLoaded();

private:
	static Self* Instance;

	// Maps the Dialogue path => SearchData.
	TMap<FSoftObjectPath, FDialogueSearchData> SearchMap;

	// Because we are unable to query for the module on another thread, cache it for use later
	IAssetRegistry* AssetRegistry = nullptr;

	// The tab identifier/instance name for global find results
	FName GlobalFindResultsTabIDs[MAX_GLOBAL_DIALOGUE_SEARCH_RESULTS];

	// Array of open global find results widgets
	TArray<TWeakPtr<SDlgFindInDialogues>> GlobalFindResultsWidgets;

	// Global Find Results workspace menu item
	TSharedPtr<FWorkspaceItem> GlobalFindResultsMenuItem;

	// Handlers
	FDelegateHandle OnAssetAddedHandle;
	FDelegateHandle OnAssetRemovedHandle;
	FDelegateHandle OnAssetRenamedHandle;
	FDelegateHandle OnFilesLoadedHandle;
	FDelegateHandle OnAssetLoadedHandle;
};
