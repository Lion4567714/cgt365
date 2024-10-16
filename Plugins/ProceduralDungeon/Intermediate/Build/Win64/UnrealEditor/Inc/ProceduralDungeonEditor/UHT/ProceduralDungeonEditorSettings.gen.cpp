// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeonEditor/Public/ProceduralDungeonEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralDungeonEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomData_NoRegister();
	PROCEDURALDUNGEONEDITOR_API UClass* Z_Construct_UClass_UProceduralDungeonEditorSettings();
	PROCEDURALDUNGEONEDITOR_API UClass* Z_Construct_UClass_UProceduralDungeonEditorSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProceduralDungeonEditor();
// End Cross Module References
	void UProceduralDungeonEditorSettings::StaticRegisterNativesUProceduralDungeonEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProceduralDungeonEditorSettings);
	UClass* Z_Construct_UClass_UProceduralDungeonEditorSettings_NoRegister()
	{
		return UProceduralDungeonEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRoomDataClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultRoomDataClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultIfNoChild_MetaData[];
#endif
		static void NewProp_bUseDefaultIfNoChild_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultIfNoChild;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeonEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProceduralDungeonEditorSettings.h" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonEditorSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::NewProp_DefaultRoomDataClass_MetaData[] = {
		{ "AllowAbstract", "FALSE" },
		{ "Category", "General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The default RoomData class to use in the class picker when creating a new RoomData asset.\n" },
#endif
		{ "ModuleRelativePath", "Public/ProceduralDungeonEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The default RoomData class to use in the class picker when creating a new RoomData asset." },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::NewProp_DefaultRoomDataClass = { "DefaultRoomDataClass", nullptr, (EPropertyFlags)0x0014000002004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProceduralDungeonEditorSettings, DefaultRoomDataClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::NewProp_DefaultRoomDataClass_MetaData), Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::NewProp_DefaultRoomDataClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::NewProp_bUseDefaultIfNoChild_MetaData[] = {
		{ "Category", "General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The class picker will not show if the default RoomData class has no child classes\n" },
#endif
		{ "DisplayName", "Use Automatically Default Class If No Child" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The class picker will not show if the default RoomData class has no child classes" },
#endif
	};
#endif
	void Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::NewProp_bUseDefaultIfNoChild_SetBit(void* Obj)
	{
		((UProceduralDungeonEditorSettings*)Obj)->bUseDefaultIfNoChild = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::NewProp_bUseDefaultIfNoChild = { "bUseDefaultIfNoChild", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UProceduralDungeonEditorSettings), &Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::NewProp_bUseDefaultIfNoChild_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::NewProp_bUseDefaultIfNoChild_MetaData), Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::NewProp_bUseDefaultIfNoChild_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::NewProp_DefaultRoomDataClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::NewProp_bUseDefaultIfNoChild,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProceduralDungeonEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::ClassParams = {
		&UProceduralDungeonEditorSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UProceduralDungeonEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UProceduralDungeonEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProceduralDungeonEditorSettings.OuterSingleton, Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProceduralDungeonEditorSettings.OuterSingleton;
	}
	template<> PROCEDURALDUNGEONEDITOR_API UClass* StaticClass<UProceduralDungeonEditorSettings>()
	{
		return UProceduralDungeonEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProceduralDungeonEditorSettings);
	UProceduralDungeonEditorSettings::~UProceduralDungeonEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Public_ProceduralDungeonEditorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Public_ProceduralDungeonEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProceduralDungeonEditorSettings, UProceduralDungeonEditorSettings::StaticClass, TEXT("UProceduralDungeonEditorSettings"), &Z_Registration_Info_UClass_UProceduralDungeonEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProceduralDungeonEditorSettings), 2079209436U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Public_ProceduralDungeonEditorSettings_h_2796838338(TEXT("/Script/ProceduralDungeonEditor"),
		Z_CompiledInDeferFile_FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Public_ProceduralDungeonEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Public_ProceduralDungeonEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
