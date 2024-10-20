// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeonEditor/Private/Factories/DoorTypeFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorTypeFactory() {}
// Cross Module References
	PROCEDURALDUNGEONEDITOR_API UClass* Z_Construct_UClass_UDoorTypeFactory();
	PROCEDURALDUNGEONEDITOR_API UClass* Z_Construct_UClass_UDoorTypeFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_ProceduralDungeonEditor();
// End Cross Module References
	void UDoorTypeFactory::StaticRegisterNativesUDoorTypeFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDoorTypeFactory);
	UClass* Z_Construct_UClass_UDoorTypeFactory_NoRegister()
	{
		return UDoorTypeFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDoorTypeFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDoorTypeFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeonEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDoorTypeFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorTypeFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/DoorTypeFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/DoorTypeFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDoorTypeFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoorTypeFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDoorTypeFactory_Statics::ClassParams = {
		&UDoorTypeFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDoorTypeFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UDoorTypeFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDoorTypeFactory()
	{
		if (!Z_Registration_Info_UClass_UDoorTypeFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDoorTypeFactory.OuterSingleton, Z_Construct_UClass_UDoorTypeFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDoorTypeFactory.OuterSingleton;
	}
	template<> PROCEDURALDUNGEONEDITOR_API UClass* StaticClass<UDoorTypeFactory>()
	{
		return UDoorTypeFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoorTypeFactory);
	UDoorTypeFactory::~UDoorTypeFactory() {}
	struct Z_CompiledInDeferFile_FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Private_Factories_DoorTypeFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Private_Factories_DoorTypeFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDoorTypeFactory, UDoorTypeFactory::StaticClass, TEXT("UDoorTypeFactory"), &Z_Registration_Info_UClass_UDoorTypeFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDoorTypeFactory), 2159846392U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Private_Factories_DoorTypeFactory_h_2611448920(TEXT("/Script/ProceduralDungeonEditor"),
		Z_CompiledInDeferFile_FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Private_Factories_DoorTypeFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Private_Factories_DoorTypeFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
