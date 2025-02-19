// Copyright Csaba Molnar, Daniel Butum. All Rights Reserved.
#pragma once
#include "CoreMinimal.h"
#include "Misc/Build.h"
#include "Runtime/Launch/Resources/Version.h"
#include "Templates/SubclassOf.h"

#include "Engine/DeveloperSettings.h"
#include "Layout/Margin.h"
#include "NYEngineVersionHelpers.h"

#include "Logging/INYLogger.h"

#if WITH_EDITOR
#include "ClassViewerModule.h"
#endif

#include "DlgNodeData.h"

#include "DlgSystemSettings.generated.h"


// Defines the format of the Dialogue text
UENUM()
enum class EDlgDialogueTextFormat : uint8
{
	// No Text Format used.
	None	UMETA(DisplayName = "No Text Format"),

	// Output all text formats, mostly used for debugging
	All	 UMETA(Hidden),

	// DEPRECATED. The own Dialogue Text format. DEPRECATED.
	// NOTE: this format is deprecated AND in the next version it will be removed
	DialogueDEPRECATED	UMETA(Hidden),

	// Hidden represents the start of the text formats index
	StartTextFormats = DialogueDEPRECATED 	UMETA(Hidden),

	// The JSON format.
	JSON				UMETA(DisplayName = "JSON"),

	// Hidden, represents the number of text formats */
	NumTextFormats 		UMETA(Hidden),
};

// Defines the displayed properties of the voice fields.
UENUM()
enum class EDlgVoiceDisplayedFields : uint8
{
	// No Voice fields are displayed.
	None						UMETA(DisplayName = "No Voice"),

	// Only display the SoundWave voice fields.
	SoundWave					UMETA(DisplayName = "Sound Wave"),

	// Only display the DialogueWave voice fields.
	DialogueWave				UMETA(DisplayName = "Dialogue Wave"),

	// Display both SoundWave and DialogueWave fields.
	SoundWaveAndDialogueWave	UMETA(DisplayName = "Sound Wave & Dialogue Wave")
};

// Defines the visibility of the SpeakerState values
UENUM()
enum class EDlgSpeakerStateVisibility : uint8
{
	// No visibility fields are displayed.
	HideAll					UMETA(DisplayName = "Hide All"),

	// Only display the SoundWave voice fields.
	ShowOnEdge				UMETA(DisplayName = "Show On Edge"),

	// Only display the DialogueWave voice fields.
	ShowOnNode				UMETA(DisplayName = "Show On Node"),

	// Display both SoundWave and DialogueWave fields.
	ShowOnNodeAndEdge		UMETA(DisplayName = "Show On Both (Edge + Node)")
};

// Defines what key combination to press to add a new line to an FText
UENUM()
enum class EDlgTextInputKeyForNewLine : uint8
{
	// Press 'Enter' to add a new line.
	Enter				UMETA(DisplayName = "Enter"),

	// Preset 'Shift + Enter' to add a new line. (like in blueprints)
	ShiftPlusEnter		UMETA(DisplayName = "Shift + Enter"),
};

// Defines how the overriden namespace will be set
UENUM()
enum class EDlgTextNamespaceLocalization : uint8
{
	// The system does not modify the Namespace and Key values of the Text fields.
	Ignore			UMETA(DisplayName = "Ignore"),

	// The system sets the Namespace for Text fields for each dialogue separately. Unique keys are also generated.
	PerDialogue		UMETA(DisplayName = "Namespace Per Dialogue (DialogueName)"),

	// Same as PerDialogue only we will have a prefix set
	WithPrefixPerDialogue UMETA(DisplayName = "Prefix + Namespace Per Dialogue (Prefix.DialogueName)"),

	// The system sets the Namespace for Text fields for each dialogue into the same value. Unique keys are also generated.
	Global				UMETA(DisplayName = "Global Namespace")
};


UENUM()
enum class EDlgClassPickerDisplayMode : uint8
{
	// Default will choose what view mode based on if in Viewer or Picker mode.
	DefaultView,

	// Displays all classes as a tree.
	TreeView,

	// Displays all classes as a list.
	ListView
};

// Defines the runtime behavior when a non-end node has no valid child
UENUM()
enum class EDlgNoSatisfiedChildBehavior : uint8
{
	// Error messaage is fired, dialogue context marks that the dialogue ended and returns with false
	PrintErrorAndEndDialogue,

	// No error messaage is fired, dialogue context marks that the dialogue ended and returns with false
	EndDialogue,

	// System assumes this is normal and the context returns with True. The game is expected to handle that there are no valid options.
	ContinueDialogue
};

// UDeveloperSettings classes are auto discovered https://wiki.unrealengine.com/CustomSettings
UCLASS(Config = Engine, DefaultConfig, meta = (DisplayName = "Dialogue System Settings"))
class DLGSYSTEM_API UDlgSystemSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UDlgSystemSettings();

	// UDeveloperSettings interface
	// Gets the settings container name for the settings, either Project or Editor
	FName GetContainerName() const override { return TEXT("Project"); }
	// Gets the category for the settings, some high level grouping like, Editor, Engine, Game...etc.
	FName GetCategoryName() const override { return TEXT("Editor"); };
	// The unique name for your section of settings, uses the class's FName.
	FName GetSectionName() const override { return Super::GetSectionName(); };

#if WITH_EDITOR
	// Gets the section text, uses the classes DisplayName by default.
	FText GetSectionText() const override;
	// Gets the description for the section, uses the classes ToolTip by default.
	FText GetSectionDescription() const override;

	// Whether or not this class supports auto registration or if the settings have a custom setup
	bool SupportsAutoRegistration() const override { return true; }

	// UObject interface
	bool CanEditChange(const FProperty* InProperty) const override;

	void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif // WITH_EDITOR

	// Own functions
#define CREATE_SETTER(_NameMethod, _VariableType, _VariableName)  \
	void _NameMethod(_VariableType InVariableValue)               \
	{                                                             \
		if (_VariableName != InVariableValue)                     \
		{                                                         \
			_VariableName = InVariableValue;                      \
			SaveSettings();                                       \
		}                                                         \
	}

	CREATE_SETTER(SetShowEdgeText, bool, bShowEdgeText)
	CREATE_SETTER(SetShowEventsAndConditions, bool, bShowEventsAndConditions)
	CREATE_SETTER(SetShowPrimarySecondaryEdges, bool, bShowPrimarySecondaryEdges)
	CREATE_SETTER(SetDrawPrimaryEdges, bool, bDrawPrimaryEdges)
	CREATE_SETTER(SetDrawSecondaryEdges, bool, bDrawSecondaryEdges)
	CREATE_SETTER(SetHideEmptyDialogueBrowserCategories, bool, bHideEmptyDialogueBrowserCategories)

#undef CREATE_SETTER

	// Depends on:
	// - LocalizationIgnoredTexts
	// - LocalizationIgnoredStrings
	bool IsIgnoredTextForLocalization(const FText& Text) const;

	// Is this text remapped
	FORCEINLINE bool IsTextRemapped(const FText& Text) const { return IsSourceStringRemapped(*FTextInspector::GetSourceString(Text));  }
	FORCEINLINE bool IsSourceStringRemapped(const FString& SourceString) const { return LocalizationRemapSourceStringsToTexts.Contains(SourceString); }
	FORCEINLINE const FText& GetTextRemappedText(const FText& Text) const { return GetSourceStringRemappedText(*FTextInspector::GetSourceString(Text)); }
	FORCEINLINE const FText& GetSourceStringRemappedText(const FString& SourceString) const { return LocalizationRemapSourceStringsToTexts.FindChecked(SourceString); }

	// Saves the settings to the config file depending on the settings of this class.
	void SaveSettings()
	{
		const UClass* ThisClass = GetClass();
		if (ThisClass->HasAnyClassFlags(CLASS_DefaultConfig))
		{
#if NY_ENGINE_VERSION >= 500
			TryUpdateDefaultConfigFile();
#else
			UpdateDefaultConfigFile();
#endif
		}
		else if (ThisClass->HasAnyClassFlags(CLASS_GlobalUserConfig))
		{
			UpdateGlobalUserConfigFile();
		}
		else
		{
			SaveConfig();
		}
	}

	// @return the extension of the text file depending on the InTextFormat.
	static FString GetTextFileExtension(EDlgDialogueTextFormat TextFormat);
	static bool HasTextFileExtension(EDlgDialogueTextFormat TextFormat) { return !GetTextFileExtension(TextFormat).IsEmpty(); }

	// Only the current ones from the enum
	static const TSet<FString>& GetAllCurrentTextFileExtensions();

	// GetAllCurrentTextFileExtensions() + AdditionalTextFormatFileExtensionsToLookFor
	TSet<FString> GetAllTextFileExtensions() const;

#if WITH_EDITOR
	EClassViewerDisplayMode::Type GetUnrealClassPickerDisplayMode() const
	{
		if (ClassPickerDisplayMode == EDlgClassPickerDisplayMode::ListView)
		{
			return EClassViewerDisplayMode::ListView;
		}
		if (ClassPickerDisplayMode == EDlgClassPickerDisplayMode::TreeView)
		{
			return EClassViewerDisplayMode::TreeView;
		}

		return EClassViewerDisplayMode::DefaultView;
	}
#endif // WITH_EDITOR

public:
	// If enabled this clears the dialogue history automatically on Editor Start PIE and On Load New Map */
	// Calls ClearDialogueHistory
	UPROPERTY(Category = "Runtime", Config, EditAnywhere)
	bool bClearDialogueHistoryAutomatically = true;

	// If enabled this auto registers and unregisters the dialogue console commands on Begin Play
	// Calls RegisterDialogueConsoleCommands and UnregisterDialogueConsoleCommands
	UPROPERTY(Category = "Runtime", Config, EditAnywhere)
	bool bRegisterDialogueConsoleCommandsAutomatically = true;

	// By default the dialogue assumes that there should always be a valid child (with satisfied conditions) for each non-end node
	// Use this setting to override that behavior
	UPROPERTY(Category = "Runtime", Config, EditAnywhere)
	EDlgNoSatisfiedChildBehavior NoSatisfiedChildBehavior;


	// The dialogue text format used for saving and reloading from text files.
	UPROPERTY(Category = "Dialogue", Config, EditAnywhere, DisplayName = "Text Format")
	EDlgDialogueTextFormat DialogueTextFormat = EDlgDialogueTextFormat::None;

	// What key combination to press to add a new line for FText fields in the Dialogue Editor.
	UPROPERTY(Category = "Dialogue", Config, EditAnywhere, DisplayName = "Text Input Key for NewLine")
	EDlgTextInputKeyForNewLine DialogueTextInputKeyForNewLine = EDlgTextInputKeyForNewLine::Enter;

	// If true, ParticipantsClasses from each Dialogue will be set to the first Class that matches the ParticipantName
	// NOTE: This only sets the default for participant names that have only ONE participant class
	// NOTE: This does not work for the None Participant Name
	UPROPERTY(Category = "Dialogue", Config, EditAnywhere)
	bool bAutoSetDefaultParticipantClasses = true;

	// Shows the NodeData that you can customize yourself
	UPROPERTY(Category = "Dialogue Node Data", Config, EditAnywhere)
	bool bShowNodeData = true;

	// Shows the EdgeData that you can customize yourself
	UPROPERTY(Category = "Dialogue Edge Data", Config, EditAnywhere)
	bool bShowEdgeData = true;

	// Where to display the SpeakerState FName property
	UPROPERTY(Category = "Dialogue Node Data", Config, EditAnywhere, DisplayName = "SpeakerState Visibility")
	EDlgSpeakerStateVisibility DialogueSpeakerStateVisibility = EDlgSpeakerStateVisibility::ShowOnNodeAndEdge;

	// What Voice fields to show in the Dialogue Editor, if any.
	UPROPERTY(Category = "Dialogue Node Data", Config, EditAnywhere, DisplayName = "Displayed Voice Fields")
	EDlgVoiceDisplayedFields DialogueDisplayedVoiceFields = EDlgVoiceDisplayedFields::None;

	// Generic data is an UObject* which can be assigned to nodes and can be asked from the active one
	UPROPERTY(Category = "Dialogue Node Data", Config, EditAnywhere)
	bool bShowGenericData = false;

	UPROPERTY(Category = "Dialogue Node Data", Config, EditAnywhere, AdvancedDisplay)
	bool bShowAdvancedChildren = true;

	// Any properties that belong to these classes won't be shown in the suggestion list when you use the reflection system (class variables).
	UPROPERTY(Category = "Dialogue", Config, EditAnywhere)
	TArray<UClass*> BlacklistedReflectionClasses;

	// Default class to use for custom node data
	UPROPERTY(Category = "Dialogue", Config, EditAnywhere)
	TSoftClassPtr<UDlgNodeData> DefaultCustomNodeDataClass;

	// How the Blueprint class pricker looks like
	UPROPERTY(Category = "Blueprint", Config, EditAnywhere)
	EDlgClassPickerDisplayMode ClassPickerDisplayMode = EDlgClassPickerDisplayMode::DefaultView;

	// Should we only process batch dialogues that are only in the /Game folder.
	// This is used for saving all dialogues or deleting all text files.
	UPROPERTY(Category = "Batch", Config, EditAnywhere)
	bool bBatchOnlyInGameDialogues = true;

	// Additional file extension to look for when doing operations with dialogue text formats, like: deleting/renaming.
	// NOTE: file extensions must start with a full stop
	UPROPERTY(Category = "Batch", Config, EditAnywhere)
	TSet<FString> AdditionalTextFormatFileExtensionsToLookFor;


	// Should the dialogue system set the default texts on empty edges on save dialogue and when creating them?
	UPROPERTY(Category = "Default Texts", Config, EditAnywhere, DisplayName = "Set Default Edge Texts")
	bool bSetDefaultEdgeTexts = true;

	// If true the default text will be only applied to the first child instead of all children from a node
	UPROPERTY(Category = "Default Texts", Config, EditAnywhere, DisplayName = "Set Default Edge Texts on First Child Only")
	bool bSetDefaultEdgeTextOnFirstChildOnly = true;

	// Default text that appears on empty edges that lead to an end node
	UPROPERTY(Category = "Default Texts", Config, EditAnywhere, DisplayName = "Edge Text To End Node")
	FText DefaultTextEdgeToEndNode;

	// Default text that appears on empty edges texts that lead to a normal node (not an end node).
	UPROPERTY(Category = "Default Texts", Config, EditAnywhere, DisplayName = "Edge Text To Normal Node")
	FText DefaultTextEdgeToNormalNode;


	// Defines what the system should do with Text Namespaces for localization
	UPROPERTY(Category = "Localization", Config, EditAnywhere, DisplayName = "Text Namespace")
	EDlgTextNamespaceLocalization DialogueTextNamespaceLocalization = EDlgTextNamespaceLocalization::Ignore;

	// Depending on TextLocalizationMode it can be used as the namespace for all dialogue
	// Only used for GlobalNamespace
	UPROPERTY(Category = "Localization", Config, EditAnywhere, DisplayName = "Text Global Namespace Name")
	FString DialogueTextGlobalNamespaceName = "Dialogue";

	// Depending on TextLocalizationMode it can be used as the prefix for all dialogues namespace name
	// Only used for WithPrefixPerDialogue
	UPROPERTY(Category = "Localization", Config, EditAnywhere, DisplayName = "Text Namespace Name Prefix")
	FString DialogueTextPrefixNamespaceName = "Dialogue_";

	// Additional Array of texts that this system won't overwrite the namespace or key for
	//UPROPERTY(Category = "Localization", Config, EditAnywhere, DisplayName = "Ignored Texts")
	//TArray<FText> LocalizationIgnoredTexts;

	// Additional Array of source strings that this system won't overwrite the namespace or key for
	UPROPERTY(Category = "Localization", Config, EditAnywhere, AdvancedDisplay, DisplayName = "Ignored Strings")
	TSet<FString> LocalizationIgnoredStrings;

	// Map used to remap some SourceStrings texts found in the dialogues with a new Text value/namespace/key
	// Key: SourceString we are searching for
	// Value: Text replacement. NOTE: if the text value is usually not empty
	UPROPERTY(Category = "Localization", Config, EditAnywhere, AdvancedDisplay, DisplayName = "Remap Source Strings to Texts")
	TMap<FString, FText> LocalizationRemapSourceStringsToTexts;


	// Enables the message log to output info/errors/warnings to it
	UPROPERTY(Category = "Logger", Config, EditAnywhere)
	bool bEnableMessageLog = true;

	// Should the message log mirror the message with the output log, used even if the output log is disabled.
	UPROPERTY(Category = "Logger", Config, EditAnywhere)
	bool bMessageLogMirrorToOutputLog = true;

	// Opens the message log in front of the user if messages are displayed
	// See OpenMessageLogLevelsHigherThan for the filter
	UPROPERTY(Category = "Logger", Config, EditAnywhere)
	bool bMessageLogOpen = true;

	// NOTE: Not editable is intended so that not to allow the user to disable logging completely
	UPROPERTY(Config)
	bool bEnableOutputLog = false;

	// By default the message log does not support debug output, latest is info.
	// For the sake of sanity we redirect all levels higher than RedirectMessageLogLevelsHigherThan to the output log
	// even if the output log is disabled.
	// So that not to output for example debug output to the message log only to the output log.
	// NOTE: A value of ENYLoggerLogLevel::NoLogging means no log level will get redirected
	UPROPERTY(Category = "Logger", Config, EditAnywhere, AdvancedDisplay)
	ENYLoggerLogLevel RedirectMessageLogLevelsHigherThan = ENYLoggerLogLevel::Warning;

	// All the log levels messages that will open the message log window if bMessageLogOpen is true
	// NOTE: A value of  ENYLoggerLogLevel::NoLogging means all log levels will be opened if bMessageLogOpen is true
	UPROPERTY(Category = "Logger", Config, EditAnywhere, AdvancedDisplay)
	ENYLoggerLogLevel OpenMessageLogLevelsHigherThan = ENYLoggerLogLevel::NoLogging;


	// Should we hide the categories in the Dialogue browser that do not have any children?
	UPROPERTY(Category = "Browser", Config, EditAnywhere)
	bool bHideEmptyDialogueBrowserCategories = true;


	//
	// External URLs
	//

	// Should the external URLs toolbar be displayed
	UPROPERTY(Category = "External URLs", Config, EditAnywhere)
	bool bShowExternalURLsToolbar = true;

	FString URLNotYetPlugins = "https://bit.ly/NotYetPluginsEditor";
	FString URLMarketplace = "https://bit.ly/DlgMarketplaceEditor";
	FString URLWiki = "https://github.com/NotYetGames/DlgSystem/wiki";
	FString URLForum = "https://github.com/NotYetGames/DlgSystem/discussions";
	FString URLDiscord = "https://bit.ly/NYDiscordEditor";

	//
	// Graph NOde
	//

	// Whether the description text wraps onto a new line when it's length exceeds this width;
	// Tf this value is zero or negative, no wrapping occurs.
	UPROPERTY(Category = "Graph Node", Config, EditAnywhere)
	float DescriptionWrapTextAt = 256.f;

	// The amount of blank space left around the edges of the description text area.
	UPROPERTY(Category = "Graph Node", Config, EditAnywhere)
	FMargin DescriptionTextMargin = FMargin(5.f);

	// The horizontal alignment of the graph node title and icon
	UPROPERTY(Category = "Graph Node", Config, EditAnywhere)
	TEnumAsByte<EHorizontalAlignment> TitleHorizontalAlignment = HAlign_Fill;

	// To show or not the condition icon in the case the node has any enter conditions defined on it.
	UPROPERTY(Category = "Graph Node", Config, EditAnywhere)
	bool bShowHasEnterConditionsIcon = true;

	// To show or not the event icon in the case the node has any enter events defined on it.
	UPROPERTY(Category = "Graph Node", Config, EditAnywhere)
	bool bShowHasEnterEventsIcon = true;

	// To show or not the voice icon in the case the node has any voice members set
	UPROPERTY(Category = "Graph Node", Config, EditAnywhere)
	bool bShowHasVoiceIcon = true;

	// To show or not the voice icon in the case the node has any voice members set
	UPROPERTY(Category = "Graph Node", Config, EditAnywhere)
	bool bShowHasGenericDataIcon = true;

	//
	// Colors based on https://material.io/guidelines/style/color.html#color-color-palette
	//

	// The background color of the normal speech node. */
	UPROPERTY(Category = "Graph Node Color", Config, EditAnywhere)
	FLinearColor SpeechNodeColor = FLinearColor{0.04f, 0.22f, 0.48f, 1.f}; // blueish

	// The background color of the root node.
	UPROPERTY(Category = "Graph Node Color", Config, EditAnywhere)
	FLinearColor RootNodeColor = FLinearColor{0.105882f, 0.368627f, 0.125490f, 1.f}; // greenish

	// The background color of the end node.
	UPROPERTY(Category = "Graph Node Color", Config, EditAnywhere)
	FLinearColor EndNodeColor = FLinearColor{0.835294f, 0.f, 0.f, 1.f}; // redish

	// The background color of the virtual parent node.
	UPROPERTY(Category = "Graph Node Color", Config, EditAnywhere)
	FLinearColor VirtualParentNodeColor = FLinearColor{0.129412f, 0.129412f, 0.129412f, 1.0f}; // dark gray

	// The background color of the selector first node.
	UPROPERTY(Category = "Graph Node Color", Config, EditAnywhere)
	FLinearColor SelectorFirstNodeColor = FLinearColor{0.f, 0.13f, 0.15f, 1.f};  // dark cyan

	// The background color of the selector random node.
	UPROPERTY(Category = "Graph Node Color", Config, EditAnywhere)
	FLinearColor SelectorRandomNodeColor = FLinearColor{0.18f, 0.15f, 0.f, 1.f}; // dark yellow

	// The background color of the selector random node.
	UPROPERTY(Category = "Graph Node Color", Config, EditAnywhere)
	FLinearColor SpeechSequenceNodeColor = FLinearColor{0.050980f, 0.278431f, 0.631373f, 1.f}; // blueish

	// The background color of the proxy node.
	UPROPERTY(Category = "Graph Node Color", Config, EditAnywhere)
	FLinearColor ProxyNodeColor = FLinearColor{ 0.01f, 0.2f, 0.09f, 1.f }; // greenish


	// The background color of the node borders.
	UPROPERTY(Category = "Graph Node Color", Config, EditAnywhere)
	FLinearColor BorderBackgroundColor = FLinearColor::Black;

	// The background color of the node borders when hovered over
	UPROPERTY(Category = "Graph Node Color", Config, EditAnywhere)
	FLinearColor BorderHoveredBackgroundColor = FLinearColor(0.380392f, 0.380392f, 0.380392f, 1.0f); // gray

	// The background color of the node borders for nodes which can't have children.
	UPROPERTY(Category = "Graph Node Color", Config, EditAnywhere)
	FLinearColor BorderBackgroundColorNoChildren = FLinearColor(0.0f, 0.05f, 0.1f, 1.0f);

	// The background color of the node borders for nodes which can't have children when hovered over
	UPROPERTY(Category = "Graph Node Color", Config, EditAnywhere)
	FLinearColor BorderHoveredBackgroundColorNoChildren = FLinearColor(0.0f, 0.1f, 0.2f, 1.0f);

	// The background color of the node borders for nodes which are highlighted
	UPROPERTY(Category = "Graph Node Color", Config, EditAnywhere)
	FLinearColor BorderBackgroundColorHighlighted = FLinearColor{ 0.050980f, 0.631373f, 0.278431f, 1.f }; // greenish


	// The amount of blank space left around the edges of the speaker text area in case of speech sequence nodes.
	UPROPERTY(Category = "Graph Node Speech Sequence", Config, EditAnywhere)
	FMargin DescriptionSpeakerMargin = FMargin(1.f);

	// The horizontal alignment of the Speaker in case the node is a speech sequence.
	UPROPERTY(Category = "Graph Node Speech Sequence", Config, EditAnywhere)
	TEnumAsByte<EHorizontalAlignment> DescriptionSpeakerHorizontalAlignment = HAlign_Center;


	// The wire thickness of the connections between nodes.
	UPROPERTY(Category = "Graph Edge", Config, EditAnywhere)
	float WireThickness = 2.0f;

	// Flag indicating to draw the bubbles of the wire or not.
	UPROPERTY(Category = "Graph Edge", Config, EditAnywhere)
	bool bWireDrawBubbles = false;

	// To show or not the condition icon in the case the edge has any conditions defined on it.
	UPROPERTY(Category = "Graph Edge", Config, EditAnywhere)
	bool bShowEdgeHasConditionsIcon = true;

	// To show or not the edge text
	UPROPERTY(Category = "Graph Edge Text", Config, EditAnywhere)
	bool bShowEdgeText = true;

	// To show or not the edge text
	UPROPERTY(Category = "Graph Edge Text", Config, EditAnywhere)
	float GraphEdgeTextWrapAt = 120.0f;

	// Limits the displayed character count if > 0
	UPROPERTY(Category = "Graph Edge Text", Config, EditAnywhere)
	int32 GraphEdgeTextCharLimit = 0;

	// The amount of blank space left around the edges of the description text area.
	UPROPERTY(Category = "Graph Edge Text", Config, EditAnywhere)
	FMargin GraphEdgeTextMargin = FMargin(5.f);

	// The base color of the wire.
	UPROPERTY(Category = "Graph Edge Text", Config, EditAnywhere)
	FLinearColor GraphEdgeTextColor = FLinearColor{ 0.5f, 0.5f, 0.5f, 1.0f };

	UPROPERTY(Category = "Graph Edge Text", Config, EditAnywhere)
	FLinearColor GraphEdgeTextBackgroundColor = FLinearColor{ 0.02f, 0.02f, 0.02f, 1.0f };

	// The base color of the wire.
	UPROPERTY(Category = "Graph Edge Color", Config, EditAnywhere)
	FLinearColor WireBaseColor = FLinearColor{1.0f, 1.0f, 1.0f, 1.0f}; // white

	// Does the wire use the condition color (if it has conditions) in the normal mode?
	UPROPERTY(Category = "Graph Edge Color", Config, EditAnywhere)
	bool bShowDifferentColorForConditionWires = true;

	// The color of the wire if the edge has any conditions.
	UPROPERTY(Category = "Graph Edge Color", Config, EditAnywhere)
	FLinearColor WireWithConditionsColor = FLinearColor{1.f, 0.341176f, 0.133333f, 1.0f}; // orangeish

	// The color of the wire when hovered over
	UPROPERTY(Category = "Graph Edge Color", Config, EditAnywhere)
	FLinearColor WireHoveredColor = FLinearColor{1.0f, 0.596078f, 0.0f, 1.0f}; // orange

	// Is the the viewing of primary/secondary edges enabled?
	UPROPERTY(Category = "Graph Edge", Config, EditAnywhere)
	bool bShowPrimarySecondaryEdges = true;

	// Should we draw the primary edges?
	UPROPERTY(Category = "Graph Edge", Config, EditAnywhere)
	bool bDrawPrimaryEdges = true;

	// Should we draw the secondary edges?
	UPROPERTY(Category = "Graph Edge", Config, EditAnywhere)
	bool bDrawSecondaryEdges = true;

	// The Color of the wire when the edge is primary.
	UPROPERTY(Category = "Graph Edge Color", Config, EditAnywhere)
	FLinearColor WirePrimaryEdgeColor = FLinearColor{0.717647f, 0.109804f, 0.109804f, 1.0f}; // redish

	// The Color of the wire when the edge is secondary.
	UPROPERTY(Category = "Graph Edge Color", Config, EditAnywhere)
	FLinearColor WireSecondaryEdgeColor = FLinearColor{0.101961f, 0.137255f, 0.494118f, 1.f}; // blueish

	UPROPERTY(Category = "Graph Event And Condition", Config, EditAnywhere)
	bool bShowEventsAndConditions = true;

	UPROPERTY(Category = "Graph Event And Condition", Config, EditAnywhere)
	FLinearColor GraphConditionBackgroundColor = FLinearColor{ 0.02f, 0.02f, 0.02f, 1.0f };

	UPROPERTY(Category = "Graph Event And Condition", Config, EditAnywhere)
	FLinearColor GraphConditionBorderColor = FLinearColor{ 0.348958f, 0.029080f, 0.029080f, 1.0f };

	UPROPERTY(Category = "Graph Edge Text", Config, EditAnywhere)
	FLinearColor GraphConditionTextColor = FLinearColor{ 0.5f, 0.5f, 0.5f, 1.0f };

	UPROPERTY(Category = "Graph Event And Condition", Config, EditAnywhere)
	FMargin GraphConditionBorderSize = FMargin{ 4.0f };

	UPROPERTY(Category = "Graph Event And Condition", Config, EditAnywhere)
	FMargin GraphConditionTextMargin = FMargin{ 2.0f };

	UPROPERTY(Category = "Graph Event And Condition", Config, EditAnywhere)
	FLinearColor GraphEventBackgroundColor = FLinearColor{ 0.02f, 0.02f, 0.02f, 1.0f };

	UPROPERTY(Category = "Graph Event And Condition", Config, EditAnywhere)
	FLinearColor GraphEventBorderColor = FLinearColor{ 0.231553f, 0.042100f, 0.505208f, 1.0f };

	UPROPERTY(Category = "Graph Event And Condition", Config, EditAnywhere)
	FLinearColor GraphEventTextColor = FLinearColor{ 0.5f, 0.5f, 0.5f, 1.0f };

	UPROPERTY(Category = "Graph Event And Condition", Config, EditAnywhere)
	FMargin GraphEventBorderSize = FMargin{ 4.0f };

	UPROPERTY(Category = "Graph Event And Condition", Config, EditAnywhere)
	FMargin GraphEventTextMargin = FMargin{ 2.0f };

	//
	// Advanced Section
	//

	// The offset on the X axis (left/right) to use when automatically positioning nodes.
	UPROPERTY(Category = "Position", Config, EditAnywhere, AdvancedDisplay)
	int32 OffsetBetweenColumnsX = 500;

	// The offset on the Y axis (up/down) to use when automatically positioning nodes.
	UPROPERTY(Category = "Position", Config, EditAnywhere, AdvancedDisplay)
	int32 OffsetBetweenRowsY = 200;
};
