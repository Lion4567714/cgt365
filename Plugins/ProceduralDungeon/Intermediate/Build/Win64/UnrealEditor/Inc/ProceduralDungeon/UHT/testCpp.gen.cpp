// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/testCpp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodetestCpp() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_AtestCpp();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_AtestCpp_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// End Cross Module References
	void AtestCpp::StaticRegisterNativesAtestCpp()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AtestCpp);
	UClass* Z_Construct_UClass_AtestCpp_NoRegister()
	{
		return AtestCpp::StaticClass();
	}
	struct Z_Construct_UClass_AtestCpp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AtestCpp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AtestCpp_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AtestCpp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "testCpp.h" },
		{ "ModuleRelativePath", "Public/testCpp.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AtestCpp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AtestCpp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AtestCpp_Statics::ClassParams = {
		&AtestCpp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AtestCpp_Statics::Class_MetaDataParams), Z_Construct_UClass_AtestCpp_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AtestCpp()
	{
		if (!Z_Registration_Info_UClass_AtestCpp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AtestCpp.OuterSingleton, Z_Construct_UClass_AtestCpp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AtestCpp.OuterSingleton;
	}
	template<> PROCEDURALDUNGEON_API UClass* StaticClass<AtestCpp>()
	{
		return AtestCpp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AtestCpp);
	AtestCpp::~AtestCpp() {}
	struct Z_CompiledInDeferFile_FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_testCpp_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_testCpp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AtestCpp, AtestCpp::StaticClass, TEXT("AtestCpp"), &Z_Registration_Info_UClass_AtestCpp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AtestCpp), 3438407904U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_testCpp_h_3988546296(TEXT("/Script/ProceduralDungeon"),
		Z_CompiledInDeferFile_FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_testCpp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_testCpp_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
