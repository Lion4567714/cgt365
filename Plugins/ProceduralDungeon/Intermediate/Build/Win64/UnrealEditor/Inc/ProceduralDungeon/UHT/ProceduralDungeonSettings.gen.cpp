// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/ProceduralDungeonSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralDungeonSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UProceduralDungeonSettings();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UProceduralDungeonSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// End Cross Module References
	void UProceduralDungeonSettings::StaticRegisterNativesUProceduralDungeonSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProceduralDungeonSettings);
	UClass* Z_Construct_UClass_UProceduralDungeonSettings_NoRegister()
	{
		return UProceduralDungeonSettings::StaticClass();
	}
	struct Z_Construct_UClass_UProceduralDungeonSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomUnit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RoomUnit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DoorSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DoorOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionCulling_MetaData[];
#endif
		static void NewProp_OcclusionCulling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OcclusionCulling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionDistance_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_OcclusionDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OccludeDynamicActors_MetaData[];
#endif
		static void NewProp_OccludeDynamicActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OccludeDynamicActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanLoop_MetaData[];
#endif
		static void NewProp_CanLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CanLoop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawDebug_MetaData[];
#endif
		static void NewProp_DrawDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowRoomOrigin_MetaData[];
#endif
		static void NewProp_ShowRoomOrigin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowRoomOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnScreenPrintDebug_MetaData[];
#endif
		static void NewProp_OnScreenPrintDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OnScreenPrintDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrintDebugDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PrintDebugDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProceduralDungeonSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralDungeonSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProceduralDungeonSettings.h" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_RoomUnit_MetaData[] = {
		{ "Category", "General" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Size of a room unit. Room's size in data assets will express the multiple of this unit size.\n// For example a room size of (5, 10, 1) with a unit size of (100, 100, 400) will result of a real room size of (500, 1000, 400).\n" },
#endif
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of a room unit. Room's size in data assets will express the multiple of this unit size.\nFor example a room size of (5, 10, 1) with a unit size of (100, 100, 400) will result of a real room size of (500, 1000, 400)." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_RoomUnit = { "RoomUnit", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProceduralDungeonSettings, RoomUnit), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_RoomUnit_MetaData), Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_RoomUnit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DoorSize_MetaData[] = {
		{ "Category", "General" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The bounding size of the doors. It is used only to display the door's blue box when \"Draw Debug\" is set to true.\n" },
#endif
		{ "DisplayName", "Default Door Size" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The bounding size of the doors. It is used only to display the door's blue box when \"Draw Debug\" is set to true." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DoorSize = { "DoorSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProceduralDungeonSettings, DoorSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DoorSize_MetaData), Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DoorSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DoorOffset_MetaData[] = {
		{ "Category", "General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The height of the door's base from the room's base (in percentage of the room unit Z)\n" },
#endif
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The height of the door's base from the room's base (in percentage of the room unit Z)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DoorOffset = { "DoorOffset", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProceduralDungeonSettings, DoorOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DoorOffset_MetaData), Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DoorOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OcclusionCulling_MetaData[] = {
		{ "Category", "Occlusion Culling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The rooms visibility will be toggled off when the player is not inside it or in a room next to it.\n" },
#endif
		{ "DisplayName", "Enable Occlusion Culling" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The rooms visibility will be toggled off when the player is not inside it or in a room next to it." },
#endif
	};
#endif
	void Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OcclusionCulling_SetBit(void* Obj)
	{
		((UProceduralDungeonSettings*)Obj)->OcclusionCulling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OcclusionCulling = { "OcclusionCulling", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UProceduralDungeonSettings), &Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OcclusionCulling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OcclusionCulling_MetaData), Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OcclusionCulling_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OcclusionDistance_MetaData[] = {
		{ "Category", "Occlusion Culling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Defines the number of connected rooms are visible from the player's room (1 means only the room where the player is).\n" },
#endif
		{ "EditCondition", "OcclusionCulling" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines the number of connected rooms are visible from the player's room (1 means only the room where the player is)." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OcclusionDistance = { "OcclusionDistance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProceduralDungeonSettings, OcclusionDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OcclusionDistance_MetaData), Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OcclusionDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OccludeDynamicActors_MetaData[] = {
		{ "Category", "Occlusion Culling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Keep track of dynamic actors entering and leaving the room to be able to show/hide them with the room.\n" },
#endif
		{ "EditCondition", "OcclusionCulling" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Keep track of dynamic actors entering and leaving the room to be able to show/hide them with the room." },
#endif
	};
#endif
	void Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OccludeDynamicActors_SetBit(void* Obj)
	{
		((UProceduralDungeonSettings*)Obj)->OccludeDynamicActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OccludeDynamicActors = { "OccludeDynamicActors", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UProceduralDungeonSettings), &Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OccludeDynamicActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OccludeDynamicActors_MetaData), Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OccludeDynamicActors_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_CanLoop_MetaData[] = {
		{ "Category", "General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When true, doors will be connected as long they are at the same place.\n// When false, only the doors between the previous and the new generated room will be connected.\n" },
#endif
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When true, doors will be connected as long they are at the same place.\nWhen false, only the doors between the previous and the new generated room will be connected." },
#endif
	};
#endif
	void Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_CanLoop_SetBit(void* Obj)
	{
		((UProceduralDungeonSettings*)Obj)->CanLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_CanLoop = { "CanLoop", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UProceduralDungeonSettings), &Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_CanLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_CanLoop_MetaData), Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_CanLoop_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DrawDebug_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Show room and door outlines in editor and development builds\n" },
#endif
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Show room and door outlines in editor and development builds" },
#endif
	};
#endif
	void Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DrawDebug_SetBit(void* Obj)
	{
		((UProceduralDungeonSettings*)Obj)->DrawDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DrawDebug = { "DrawDebug", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UProceduralDungeonSettings), &Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DrawDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DrawDebug_MetaData), Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DrawDebug_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_ShowRoomOrigin_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Show the room origin in magenta (useless imho but here if anyone find it useful)\n" },
#endif
		{ "EditCondition", "DrawDebug" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Show the room origin in magenta (useless imho but here if anyone find it useful)" },
#endif
	};
#endif
	void Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_ShowRoomOrigin_SetBit(void* Obj)
	{
		((UProceduralDungeonSettings*)Obj)->ShowRoomOrigin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_ShowRoomOrigin = { "ShowRoomOrigin", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UProceduralDungeonSettings), &Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_ShowRoomOrigin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_ShowRoomOrigin_MetaData), Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_ShowRoomOrigin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OnScreenPrintDebug_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Show some logs on the screen\n" },
#endif
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Show some logs on the screen" },
#endif
	};
#endif
	void Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OnScreenPrintDebug_SetBit(void* Obj)
	{
		((UProceduralDungeonSettings*)Obj)->OnScreenPrintDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OnScreenPrintDebug = { "OnScreenPrintDebug", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UProceduralDungeonSettings), &Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OnScreenPrintDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OnScreenPrintDebug_MetaData), Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OnScreenPrintDebug_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_PrintDebugDuration_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Duration of the screen logs\n" },
#endif
		{ "EditCondition", "OnScreenPrintDebug" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Duration of the screen logs" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_PrintDebugDuration = { "PrintDebugDuration", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProceduralDungeonSettings, PrintDebugDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_PrintDebugDuration_MetaData), Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_PrintDebugDuration_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProceduralDungeonSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_RoomUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DoorSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DoorOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OcclusionCulling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OcclusionDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OccludeDynamicActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_CanLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DrawDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_ShowRoomOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OnScreenPrintDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_PrintDebugDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProceduralDungeonSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProceduralDungeonSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::ClassParams = {
		&UProceduralDungeonSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UProceduralDungeonSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UProceduralDungeonSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UProceduralDungeonSettings()
	{
		if (!Z_Registration_Info_UClass_UProceduralDungeonSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProceduralDungeonSettings.OuterSingleton, Z_Construct_UClass_UProceduralDungeonSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProceduralDungeonSettings.OuterSingleton;
	}
	template<> PROCEDURALDUNGEON_API UClass* StaticClass<UProceduralDungeonSettings>()
	{
		return UProceduralDungeonSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProceduralDungeonSettings);
	UProceduralDungeonSettings::~UProceduralDungeonSettings() {}
	struct Z_CompiledInDeferFile_FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralDungeonSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralDungeonSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProceduralDungeonSettings, UProceduralDungeonSettings::StaticClass, TEXT("UProceduralDungeonSettings"), &Z_Registration_Info_UClass_UProceduralDungeonSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProceduralDungeonSettings), 733254961U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralDungeonSettings_h_3004731296(TEXT("/Script/ProceduralDungeon"),
		Z_CompiledInDeferFile_FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralDungeonSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralDungeonSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
