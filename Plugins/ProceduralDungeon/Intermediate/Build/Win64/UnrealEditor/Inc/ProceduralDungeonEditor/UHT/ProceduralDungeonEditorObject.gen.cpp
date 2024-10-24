// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeonEditor/Private/EditorMode/ProceduralDungeonEditorObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralDungeonEditorObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDoorType_NoRegister();
	PROCEDURALDUNGEONEDITOR_API UClass* Z_Construct_UClass_UProceduralDungeonEditorObject();
	PROCEDURALDUNGEONEDITOR_API UClass* Z_Construct_UClass_UProceduralDungeonEditorObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProceduralDungeonEditor();
// End Cross Module References
	void UProceduralDungeonEditorObject::StaticRegisterNativesUProceduralDungeonEditorObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProceduralDungeonEditorObject);
	UClass* Z_Construct_UClass_UProceduralDungeonEditorObject_NoRegister()
	{
		return UProceduralDungeonEditorObject::StaticClass();
	}
	struct Z_Construct_UClass_UProceduralDungeonEditorObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProceduralDungeonEditorObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeonEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonEditorObject_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralDungeonEditorObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorMode/ProceduralDungeonEditorObject.h" },
		{ "ModuleRelativePath", "Private/EditorMode/ProceduralDungeonEditorObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralDungeonEditorObject_Statics::NewProp_DoorType_MetaData[] = {
		{ "Category", "Procedural Dungeon Editor" },
		{ "ModuleRelativePath", "Private/EditorMode/ProceduralDungeonEditorObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProceduralDungeonEditorObject_Statics::NewProp_DoorType = { "DoorType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProceduralDungeonEditorObject, DoorType), Z_Construct_UClass_UDoorType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonEditorObject_Statics::NewProp_DoorType_MetaData), Z_Construct_UClass_UProceduralDungeonEditorObject_Statics::NewProp_DoorType_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProceduralDungeonEditorObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonEditorObject_Statics::NewProp_DoorType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProceduralDungeonEditorObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProceduralDungeonEditorObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProceduralDungeonEditorObject_Statics::ClassParams = {
		&UProceduralDungeonEditorObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UProceduralDungeonEditorObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonEditorObject_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonEditorObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UProceduralDungeonEditorObject_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonEditorObject_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UProceduralDungeonEditorObject()
	{
		if (!Z_Registration_Info_UClass_UProceduralDungeonEditorObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProceduralDungeonEditorObject.OuterSingleton, Z_Construct_UClass_UProceduralDungeonEditorObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProceduralDungeonEditorObject.OuterSingleton;
	}
	template<> PROCEDURALDUNGEONEDITOR_API UClass* StaticClass<UProceduralDungeonEditorObject>()
	{
		return UProceduralDungeonEditorObject::StaticClass();
	}
	UProceduralDungeonEditorObject::UProceduralDungeonEditorObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProceduralDungeonEditorObject);
	UProceduralDungeonEditorObject::~UProceduralDungeonEditorObject() {}
	struct Z_CompiledInDeferFile_FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Private_EditorMode_ProceduralDungeonEditorObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Private_EditorMode_ProceduralDungeonEditorObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProceduralDungeonEditorObject, UProceduralDungeonEditorObject::StaticClass, TEXT("UProceduralDungeonEditorObject"), &Z_Registration_Info_UClass_UProceduralDungeonEditorObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProceduralDungeonEditorObject), 1683771644U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Private_EditorMode_ProceduralDungeonEditorObject_h_161625112(TEXT("/Script/ProceduralDungeonEditor"),
		Z_CompiledInDeferFile_FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Private_EditorMode_ProceduralDungeonEditorObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Private_EditorMode_ProceduralDungeonEditorObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
