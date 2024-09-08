// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/DoorType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorType() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDoorType();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDoorType_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// End Cross Module References
	void UDoorType::StaticRegisterNativesUDoorType()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDoorType);
	UClass* Z_Construct_UClass_UDoorType_NoRegister()
	{
		return UDoorType::StaticClass();
	}
	struct Z_Construct_UClass_UDoorType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDoorType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDoorType_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DoorType.h" },
		{ "ModuleRelativePath", "Public/DoorType.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorType_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Door Type" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Size of the door bounds, only used by the debug draw as a visual hint for designers and artists.\n" },
#endif
		{ "ModuleRelativePath", "Public/DoorType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of the door bounds, only used by the debug draw as a visual hint for designers and artists." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDoorType_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDoorType, Size), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDoorType_Statics::NewProp_Size_MetaData), Z_Construct_UClass_UDoorType_Statics::NewProp_Size_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorType_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Door Type" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Just a description, used nowhere.\n" },
#endif
		{ "ModuleRelativePath", "Public/DoorType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Just a description, used nowhere." },
#endif
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UDoorType_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0020080800000801, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDoorType, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDoorType_Statics::NewProp_Description_MetaData), Z_Construct_UClass_UDoorType_Statics::NewProp_Description_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDoorType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorType_Statics::NewProp_Size,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorType_Statics::NewProp_Description,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDoorType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoorType>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDoorType_Statics::ClassParams = {
		&UDoorType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDoorType_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDoorType_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDoorType_Statics::Class_MetaDataParams), Z_Construct_UClass_UDoorType_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDoorType_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDoorType()
	{
		if (!Z_Registration_Info_UClass_UDoorType.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDoorType.OuterSingleton, Z_Construct_UClass_UDoorType_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDoorType.OuterSingleton;
	}
	template<> PROCEDURALDUNGEON_API UClass* StaticClass<UDoorType>()
	{
		return UDoorType::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoorType);
	UDoorType::~UDoorType() {}
	struct Z_CompiledInDeferFile_FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DoorType_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DoorType_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDoorType, UDoorType::StaticClass, TEXT("UDoorType"), &Z_Registration_Info_UClass_UDoorType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDoorType), 3283033367U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DoorType_h_4202769317(TEXT("/Script/ProceduralDungeon"),
		Z_CompiledInDeferFile_FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DoorType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DoorType_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
