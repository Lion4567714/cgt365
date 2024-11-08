// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/DungeonBlueprintLibrary.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ADoor_NoRegister();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDoorType_NoRegister();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonBlueprintLibrary();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonBlueprintLibrary_NoRegister();
	PROCEDURALDUNGEON_API UEnum* Z_Construct_UEnum_ProceduralDungeon_EDoorDirection();
	UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// End Cross Module References
	DEFINE_FUNCTION(UDungeonBlueprintLibrary::execSpectate)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Controller);
		P_GET_UBOOL(Z_Param_DestroyPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDungeonBlueprintLibrary::Spectate(Z_Param_Controller,Z_Param_DestroyPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonBlueprintLibrary::execDoorDirection_Opposite)
	{
		P_GET_ENUM_REF(EDoorDirection,Z_Param_Out_A);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDoorDirection*)Z_Param__Result=UDungeonBlueprintLibrary::DoorDirection_Opposite((EDoorDirection&)(Z_Param_Out_A));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonBlueprintLibrary::execDoorDirection_Negate)
	{
		P_GET_ENUM_REF(EDoorDirection,Z_Param_Out_A);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDoorDirection*)Z_Param__Result=UDungeonBlueprintLibrary::DoorDirection_Negate((EDoorDirection&)(Z_Param_Out_A));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonBlueprintLibrary::execDoorDirection_Decrement)
	{
		P_GET_ENUM_REF(EDoorDirection,Z_Param_Out_A);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDoorDirection*)Z_Param__Result=UDungeonBlueprintLibrary::DoorDirection_Decrement((EDoorDirection&)(Z_Param_Out_A));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonBlueprintLibrary::execDoorDirection_Increment)
	{
		P_GET_ENUM_REF(EDoorDirection,Z_Param_Out_A);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDoorDirection*)Z_Param__Result=UDungeonBlueprintLibrary::DoorDirection_Increment((EDoorDirection&)(Z_Param_Out_A));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonBlueprintLibrary::execDoorDirection_Sub)
	{
		P_GET_ENUM_REF(EDoorDirection,Z_Param_Out_A);
		P_GET_ENUM_REF(EDoorDirection,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDoorDirection*)Z_Param__Result=UDungeonBlueprintLibrary::DoorDirection_Sub((EDoorDirection&)(Z_Param_Out_A),(EDoorDirection&)(Z_Param_Out_B));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonBlueprintLibrary::execDoorDirection_Add)
	{
		P_GET_ENUM_REF(EDoorDirection,Z_Param_Out_A);
		P_GET_ENUM_REF(EDoorDirection,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDoorDirection*)Z_Param__Result=UDungeonBlueprintLibrary::DoorDirection_Add((EDoorDirection&)(Z_Param_Out_A),(EDoorDirection&)(Z_Param_Out_B));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonBlueprintLibrary::execDoorDirection_Valid)
	{
		P_GET_ENUM_REF(EDoorDirection,Z_Param_Out_A);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDungeonBlueprintLibrary::DoorDirection_Valid((EDoorDirection&)(Z_Param_Out_A));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonBlueprintLibrary::execCompareDataTableRows)
	{
		P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_A);
		P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDungeonBlueprintLibrary::CompareDataTableRows(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonBlueprintLibrary::execIsDoorOfType)
	{
		P_GET_OBJECT(UClass,Z_Param_DoorClass);
		P_GET_OBJECT(UDoorType,Z_Param_DoorType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDungeonBlueprintLibrary::IsDoorOfType(Z_Param_DoorClass,Z_Param_DoorType);
		P_NATIVE_END;
	}
	void UDungeonBlueprintLibrary::StaticRegisterNativesUDungeonBlueprintLibrary()
	{
		UClass* Class = UDungeonBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CompareDataTableRows", &UDungeonBlueprintLibrary::execCompareDataTableRows },
			{ "DoorDirection_Add", &UDungeonBlueprintLibrary::execDoorDirection_Add },
			{ "DoorDirection_Decrement", &UDungeonBlueprintLibrary::execDoorDirection_Decrement },
			{ "DoorDirection_Increment", &UDungeonBlueprintLibrary::execDoorDirection_Increment },
			{ "DoorDirection_Negate", &UDungeonBlueprintLibrary::execDoorDirection_Negate },
			{ "DoorDirection_Opposite", &UDungeonBlueprintLibrary::execDoorDirection_Opposite },
			{ "DoorDirection_Sub", &UDungeonBlueprintLibrary::execDoorDirection_Sub },
			{ "DoorDirection_Valid", &UDungeonBlueprintLibrary::execDoorDirection_Valid },
			{ "IsDoorOfType", &UDungeonBlueprintLibrary::execIsDoorOfType },
			{ "Spectate", &UDungeonBlueprintLibrary::execSpectate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics
	{
		struct DungeonBlueprintLibrary_eventCompareDataTableRows_Parms
		{
			FDataTableRowHandle A;
			FDataTableRowHandle B;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventCompareDataTableRows_Parms, A), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::NewProp_A_MetaData), Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::NewProp_A_MetaData) }; // 1575649708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventCompareDataTableRows_Parms, B), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::NewProp_B_MetaData), Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::NewProp_B_MetaData) }; // 1575649708
	void Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DungeonBlueprintLibrary_eventCompareDataTableRows_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonBlueprintLibrary_eventCompareDataTableRows_Parms), &Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal (Data Table Row Handle)" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "CompareDataTableRows", nullptr, nullptr, Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::DungeonBlueprintLibrary_eventCompareDataTableRows_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::DungeonBlueprintLibrary_eventCompareDataTableRows_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics
	{
		struct DungeonBlueprintLibrary_eventDoorDirection_Add_Parms
		{
			EDoorDirection A;
			EDoorDirection B;
			EDoorDirection ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_A_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_A;
		static const UECodeGen_Private::FBytePropertyParams NewProp_B_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_B;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_A_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Add_Parms, A), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_A_MetaData), Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_A_MetaData) }; // 2850159906
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_B_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Add_Parms, B), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_B_MetaData), Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_B_MetaData) }; // 2850159906
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Add_Parms, ReturnValue), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(0, nullptr) }; // 2850159906
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_A_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_B_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "A,B" },
		{ "Category", "Math|Door Direction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Addition (A + B)\n" },
#endif
		{ "CompactNodeTitle", "+" },
		{ "DisplayName", "Direction + Direction" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Addition (A + B)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "DoorDirection_Add", nullptr, nullptr, Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::DungeonBlueprintLibrary_eventDoorDirection_Add_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::DungeonBlueprintLibrary_eventDoorDirection_Add_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics
	{
		struct DungeonBlueprintLibrary_eventDoorDirection_Decrement_Parms
		{
			EDoorDirection A;
			EDoorDirection ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_A_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_A;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::NewProp_A_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Decrement_Parms, A), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(0, nullptr) }; // 2850159906
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Decrement_Parms, ReturnValue), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(0, nullptr) }; // 2850159906
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::NewProp_A_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Door Direction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Decrement the direction and set it\n" },
#endif
		{ "CompactNodeTitle", "--" },
		{ "DisplayName", "Decrement Door Direction" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decrement the direction and set it" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "DoorDirection_Decrement", nullptr, nullptr, Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::DungeonBlueprintLibrary_eventDoorDirection_Decrement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::DungeonBlueprintLibrary_eventDoorDirection_Decrement_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics
	{
		struct DungeonBlueprintLibrary_eventDoorDirection_Increment_Parms
		{
			EDoorDirection A;
			EDoorDirection ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_A_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_A;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::NewProp_A_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Increment_Parms, A), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(0, nullptr) }; // 2850159906
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Increment_Parms, ReturnValue), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(0, nullptr) }; // 2850159906
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::NewProp_A_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Door Direction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Increment the direction and set it\n" },
#endif
		{ "CompactNodeTitle", "++" },
		{ "DisplayName", "Increment Door Direction" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Increment the direction and set it" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "DoorDirection_Increment", nullptr, nullptr, Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::DungeonBlueprintLibrary_eventDoorDirection_Increment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::DungeonBlueprintLibrary_eventDoorDirection_Increment_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics
	{
		struct DungeonBlueprintLibrary_eventDoorDirection_Negate_Parms
		{
			EDoorDirection A;
			EDoorDirection ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_A_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_A;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::NewProp_A_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Negate_Parms, A), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(0, nullptr) }; // 2850159906
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Negate_Parms, ReturnValue), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(0, nullptr) }; // 2850159906
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::NewProp_A_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Door Direction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Negate the direction and set it (same as North - Direction)\n" },
#endif
		{ "CompactNodeTitle", "-" },
		{ "DisplayName", "Negate Door Direction" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Negate the direction and set it (same as North - Direction)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "DoorDirection_Negate", nullptr, nullptr, Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::DungeonBlueprintLibrary_eventDoorDirection_Negate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::DungeonBlueprintLibrary_eventDoorDirection_Negate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics
	{
		struct DungeonBlueprintLibrary_eventDoorDirection_Opposite_Parms
		{
			EDoorDirection A;
			EDoorDirection ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_A_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_A;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::NewProp_A_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Opposite_Parms, A), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::NewProp_A_MetaData), Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::NewProp_A_MetaData) }; // 2850159906
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Opposite_Parms, ReturnValue), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(0, nullptr) }; // 2850159906
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::NewProp_A_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "A" },
		{ "Category", "Math|Door Direction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Transforms North into South and East into West (and vice versa)\n" },
#endif
		{ "CompactNodeTitle", "Opposite" },
		{ "DisplayName", "Opposite" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transforms North into South and East into West (and vice versa)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "DoorDirection_Opposite", nullptr, nullptr, Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::DungeonBlueprintLibrary_eventDoorDirection_Opposite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::DungeonBlueprintLibrary_eventDoorDirection_Opposite_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics
	{
		struct DungeonBlueprintLibrary_eventDoorDirection_Sub_Parms
		{
			EDoorDirection A;
			EDoorDirection B;
			EDoorDirection ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_A_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_A;
		static const UECodeGen_Private::FBytePropertyParams NewProp_B_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_B;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_A_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Sub_Parms, A), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_A_MetaData), Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_A_MetaData) }; // 2850159906
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_B_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Sub_Parms, B), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_B_MetaData), Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_B_MetaData) }; // 2850159906
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Sub_Parms, ReturnValue), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(0, nullptr) }; // 2850159906
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_A_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_B_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "A,B" },
		{ "Category", "Math|Door Direction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Subtraction (A - B)\n" },
#endif
		{ "CompactNodeTitle", "-" },
		{ "DisplayName", "Direction - Direction" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Subtraction (A - B)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "DoorDirection_Sub", nullptr, nullptr, Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::DungeonBlueprintLibrary_eventDoorDirection_Sub_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::DungeonBlueprintLibrary_eventDoorDirection_Sub_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics
	{
		struct DungeonBlueprintLibrary_eventDoorDirection_Valid_Parms
		{
			EDoorDirection A;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_A_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_A;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::NewProp_A_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Valid_Parms, A), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::NewProp_A_MetaData), Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::NewProp_A_MetaData) }; // 2850159906
	void Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DungeonBlueprintLibrary_eventDoorDirection_Valid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonBlueprintLibrary_eventDoorDirection_Valid_Parms), &Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::NewProp_A_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Door Direction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// True if the value is set (either North, South, East, West)\n// False otherwise\n" },
#endif
		{ "DisplayName", "Is Valid" },
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if the value is set (either North, South, East, West)\nFalse otherwise" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "DoorDirection_Valid", nullptr, nullptr, Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::DungeonBlueprintLibrary_eventDoorDirection_Valid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::DungeonBlueprintLibrary_eventDoorDirection_Valid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics
	{
		struct DungeonBlueprintLibrary_eventIsDoorOfType_Parms
		{
			const TSubclassOf<ADoor>  DoorClass;
			const UDoorType* DoorType;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DoorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::NewProp_DoorClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::NewProp_DoorClass = { "DoorClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventIsDoorOfType_Parms, DoorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ADoor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::NewProp_DoorClass_MetaData), Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::NewProp_DoorClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::NewProp_DoorType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::NewProp_DoorType = { "DoorType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventIsDoorOfType_Parms, DoorType), Z_Construct_UClass_UDoorType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::NewProp_DoorType_MetaData), Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::NewProp_DoorType_MetaData) };
	void Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DungeonBlueprintLibrary_eventIsDoorOfType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonBlueprintLibrary_eventIsDoorOfType_Parms), &Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::NewProp_DoorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::NewProp_DoorType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Procedural Dungeon" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "IsDoorOfType", nullptr, nullptr, Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::DungeonBlueprintLibrary_eventIsDoorOfType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::DungeonBlueprintLibrary_eventIsDoorOfType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics
	{
		struct DungeonBlueprintLibrary_eventSpectate_Parms
		{
			APlayerController* Controller;
			bool DestroyPawn;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static void NewProp_DestroyPawn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DestroyPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventSpectate_Parms, Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::NewProp_DestroyPawn_SetBit(void* Obj)
	{
		((DungeonBlueprintLibrary_eventSpectate_Parms*)Obj)->DestroyPawn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::NewProp_DestroyPawn = { "DestroyPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonBlueprintLibrary_eventSpectate_Parms), &Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::NewProp_DestroyPawn_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::NewProp_Controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::NewProp_DestroyPawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set player to spectate\n" },
#endif
		{ "CPP_Default_DestroyPawn", "true" },
		{ "DefaultToSelf", "Controller" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set player to spectate" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "Spectate", nullptr, nullptr, Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::DungeonBlueprintLibrary_eventSpectate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::DungeonBlueprintLibrary_eventSpectate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonBlueprintLibrary);
	UClass* Z_Construct_UClass_UDungeonBlueprintLibrary_NoRegister()
	{
		return UDungeonBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDungeonBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDungeonBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonBlueprintLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDungeonBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows, "CompareDataTableRows" }, // 656401122
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add, "DoorDirection_Add" }, // 4083399711
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement, "DoorDirection_Decrement" }, // 3867942740
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment, "DoorDirection_Increment" }, // 3391411348
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate, "DoorDirection_Negate" }, // 1220719550
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite, "DoorDirection_Opposite" }, // 3402165732
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub, "DoorDirection_Sub" }, // 609643637
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid, "DoorDirection_Valid" }, // 1334371945
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType, "IsDoorOfType" }, // 2001741286
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate, "Spectate" }, // 4070610351
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonBlueprintLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DungeonBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDungeonBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonBlueprintLibrary_Statics::ClassParams = {
		&UDungeonBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonBlueprintLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDungeonBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UDungeonBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UDungeonBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDungeonBlueprintLibrary.OuterSingleton;
	}
	template<> PROCEDURALDUNGEON_API UClass* StaticClass<UDungeonBlueprintLibrary>()
	{
		return UDungeonBlueprintLibrary::StaticClass();
	}
	UDungeonBlueprintLibrary::UDungeonBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonBlueprintLibrary);
	UDungeonBlueprintLibrary::~UDungeonBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonBlueprintLibrary, UDungeonBlueprintLibrary::StaticClass, TEXT("UDungeonBlueprintLibrary"), &Z_Registration_Info_UClass_UDungeonBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonBlueprintLibrary), 1536812944U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonBlueprintLibrary_h_3438086508(TEXT("/Script/ProceduralDungeon"),
		Z_CompiledInDeferFile_FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
