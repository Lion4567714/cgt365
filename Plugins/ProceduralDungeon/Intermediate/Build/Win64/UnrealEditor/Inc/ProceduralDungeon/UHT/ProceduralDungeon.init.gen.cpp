// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralDungeon_init() {}
	PROCEDURALDUNGEON_API UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature();
	PROCEDURALDUNGEON_API UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature();
	PROCEDURALDUNGEON_API UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature();
	PROCEDURALDUNGEON_API UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature();
	PROCEDURALDUNGEON_API UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerArrayEvent__DelegateSignature();
	PROCEDURALDUNGEON_API UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ProceduralDungeon;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ProceduralDungeon()
	{
		if (!Z_Registration_Info_UPackage__Script_ProceduralDungeon.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerArrayEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerEvent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ProceduralDungeon",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x8C222A00,
				0x5B40221B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ProceduralDungeon.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ProceduralDungeon.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ProceduralDungeon(Z_Construct_UPackage__Script_ProceduralDungeon, TEXT("/Script/ProceduralDungeon"), Z_Registration_Info_UPackage__Script_ProceduralDungeon, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8C222A00, 0x5B40221B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
