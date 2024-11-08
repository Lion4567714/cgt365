// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeonEditor/Private/Factories/RoomDataFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoomDataFactory() {}
// Cross Module References
	PROCEDURALDUNGEONEDITOR_API UClass* Z_Construct_UClass_URoomDataFactory();
	PROCEDURALDUNGEONEDITOR_API UClass* Z_Construct_UClass_URoomDataFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_ProceduralDungeonEditor();
// End Cross Module References
	void URoomDataFactory::StaticRegisterNativesURoomDataFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URoomDataFactory);
	UClass* Z_Construct_UClass_URoomDataFactory_NoRegister()
	{
		return URoomDataFactory::StaticClass();
	}
	struct Z_Construct_UClass_URoomDataFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URoomDataFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeonEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoomDataFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoomDataFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/RoomDataFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/RoomDataFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URoomDataFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoomDataFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URoomDataFactory_Statics::ClassParams = {
		&URoomDataFactory::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URoomDataFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_URoomDataFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_URoomDataFactory()
	{
		if (!Z_Registration_Info_UClass_URoomDataFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoomDataFactory.OuterSingleton, Z_Construct_UClass_URoomDataFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URoomDataFactory.OuterSingleton;
	}
	template<> PROCEDURALDUNGEONEDITOR_API UClass* StaticClass<URoomDataFactory>()
	{
		return URoomDataFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URoomDataFactory);
	URoomDataFactory::~URoomDataFactory() {}
	struct Z_CompiledInDeferFile_FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Private_Factories_RoomDataFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Private_Factories_RoomDataFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URoomDataFactory, URoomDataFactory::StaticClass, TEXT("URoomDataFactory"), &Z_Registration_Info_UClass_URoomDataFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoomDataFactory), 1046791790U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Private_Factories_RoomDataFactory_h_4096300559(TEXT("/Script/ProceduralDungeonEditor"),
		Z_CompiledInDeferFile_FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Private_Factories_RoomDataFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Private_Factories_RoomDataFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
