// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/ReplicableObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplicableObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UReplicableObject();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UReplicableObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// End Cross Module References
	DEFINE_FUNCTION(UReplicableObject::execWakeUpOwnerActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WakeUpOwnerActor();
		P_NATIVE_END;
	}
	void UReplicableObject::StaticRegisterNativesUReplicableObject()
	{
		UClass* Class = UReplicableObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WakeUpOwnerActor", &UReplicableObject::execWakeUpOwnerActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReplicableObject_WakeUpOwnerActor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReplicableObject_WakeUpOwnerActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replication" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Wakes up the owner actor from dormance to indicate that a replicated variable will change.\n// You have to use it *before* modifying the replicated variables.\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplicableObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wakes up the owner actor from dormance to indicate that a replicated variable will change.\nYou have to use it *before* modifying the replicated variables." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplicableObject_WakeUpOwnerActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplicableObject, nullptr, "WakeUpOwnerActor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplicableObject_WakeUpOwnerActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplicableObject_WakeUpOwnerActor_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UReplicableObject_WakeUpOwnerActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplicableObject_WakeUpOwnerActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReplicableObject);
	UClass* Z_Construct_UClass_UReplicableObject_NoRegister()
	{
		return UReplicableObject::StaticClass();
	}
	struct Z_Construct_UClass_UReplicableObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReplicableObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicableObject_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UReplicableObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReplicableObject_WakeUpOwnerActor, "WakeUpOwnerActor" }, // 768677792
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicableObject_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicableObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ReplicableObject.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/ReplicableObject.h" },
		{ "NotBlueprintType", "true" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReplicableObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplicableObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplicableObject_Statics::ClassParams = {
		&UReplicableObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicableObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UReplicableObject_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UReplicableObject()
	{
		if (!Z_Registration_Info_UClass_UReplicableObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplicableObject.OuterSingleton, Z_Construct_UClass_UReplicableObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReplicableObject.OuterSingleton;
	}
	template<> PROCEDURALDUNGEON_API UClass* StaticClass<UReplicableObject>()
	{
		return UReplicableObject::StaticClass();
	}
	UReplicableObject::UReplicableObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReplicableObject);
	UReplicableObject::~UReplicableObject() {}
	struct Z_CompiledInDeferFile_FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReplicableObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReplicableObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReplicableObject, UReplicableObject::StaticClass, TEXT("UReplicableObject"), &Z_Registration_Info_UClass_UReplicableObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplicableObject), 2676624222U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReplicableObject_h_1157586875(TEXT("/Script/ProceduralDungeon"),
		Z_CompiledInDeferFile_FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReplicableObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReplicableObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
