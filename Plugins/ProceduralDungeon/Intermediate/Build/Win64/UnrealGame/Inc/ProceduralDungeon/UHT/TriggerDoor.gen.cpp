// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/TriggerDoor.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerDoor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ADoor();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ATriggerDoor();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ATriggerDoor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// End Cross Module References
	DEFINE_FUNCTION(ATriggerDoor::execIsValidActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidActor_Implementation(Z_Param_Actor,Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATriggerDoor::execOnTriggerExit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTriggerExit(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATriggerDoor::execOnTriggerEnter)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTriggerEnter(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	struct TriggerDoor_eventIsValidActor_Parms
	{
		AActor* Actor;
		UPrimitiveComponent* Component;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		TriggerDoor_eventIsValidActor_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_ATriggerDoor_IsValidActor = FName(TEXT("IsValidActor"));
	bool ATriggerDoor::IsValidActor(AActor* Actor, UPrimitiveComponent* Component)
	{
		TriggerDoor_eventIsValidActor_Parms Parms;
		Parms.Actor=Actor;
		Parms.Component=Component;
		ProcessEvent(FindFunctionChecked(NAME_ATriggerDoor_IsValidActor),&Parms);
		return !!Parms.ReturnValue;
	}
	void ATriggerDoor::StaticRegisterNativesATriggerDoor()
	{
		UClass* Class = ATriggerDoor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsValidActor", &ATriggerDoor::execIsValidActor },
			{ "OnTriggerEnter", &ATriggerDoor::execOnTriggerEnter },
			{ "OnTriggerExit", &ATriggerDoor::execOnTriggerExit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATriggerDoor_IsValidActor_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerDoor_IsValidActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerDoor_eventIsValidActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerDoor_IsValidActor_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerDoor_IsValidActor_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerDoor_eventIsValidActor_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerDoor_IsValidActor_Statics::NewProp_Component_MetaData), Z_Construct_UFunction_ATriggerDoor_IsValidActor_Statics::NewProp_Component_MetaData) };
	void Z_Construct_UFunction_ATriggerDoor_IsValidActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerDoor_eventIsValidActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATriggerDoor_IsValidActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TriggerDoor_eventIsValidActor_Parms), &Z_Construct_UFunction_ATriggerDoor_IsValidActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATriggerDoor_IsValidActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerDoor_IsValidActor_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerDoor_IsValidActor_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerDoor_IsValidActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerDoor_IsValidActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Door" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should returns true if the actor can open the door.\n// Component is the component on the actor that triggered the door.\n// By default the actor is valid if it's a Character.\n" },
#endif
		{ "ModuleRelativePath", "Public/TriggerDoor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should returns true if the actor can open the door.\nComponent is the component on the actor that triggered the door.\nBy default the actor is valid if it's a Character." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerDoor_IsValidActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATriggerDoor, nullptr, "IsValidActor", nullptr, nullptr, Z_Construct_UFunction_ATriggerDoor_IsValidActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerDoor_IsValidActor_Statics::PropPointers), sizeof(TriggerDoor_eventIsValidActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerDoor_IsValidActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATriggerDoor_IsValidActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerDoor_IsValidActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(TriggerDoor_eventIsValidActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATriggerDoor_IsValidActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATriggerDoor_IsValidActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics
	{
		struct TriggerDoor_eventOnTriggerEnter_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerDoor_eventOnTriggerEnter_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerDoor_eventOnTriggerEnter_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerDoor_eventOnTriggerEnter_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerDoor_eventOnTriggerEnter_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((TriggerDoor_eventOnTriggerEnter_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TriggerDoor_eventOnTriggerEnter_Parms), &Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerDoor_eventOnTriggerEnter_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerDoor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATriggerDoor, nullptr, "OnTriggerEnter", nullptr, nullptr, Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::TriggerDoor_eventOnTriggerEnter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::TriggerDoor_eventOnTriggerEnter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics
	{
		struct TriggerDoor_eventOnTriggerExit_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerDoor_eventOnTriggerExit_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerDoor_eventOnTriggerExit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerDoor_eventOnTriggerExit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerDoor_eventOnTriggerExit_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerDoor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATriggerDoor, nullptr, "OnTriggerExit", nullptr, nullptr, Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::TriggerDoor_eventOnTriggerExit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::TriggerDoor_eventOnTriggerExit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATriggerDoor_OnTriggerExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATriggerDoor_OnTriggerExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATriggerDoor);
	UClass* Z_Construct_UClass_ATriggerDoor_NoRegister()
	{
		return ATriggerDoor::StaticClass();
	}
	struct Z_Construct_UClass_ATriggerDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorList_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorList_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ActorList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATriggerDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADoor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerDoor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATriggerDoor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATriggerDoor_IsValidActor, "IsValidActor" }, // 3725202648
		{ &Z_Construct_UFunction_ATriggerDoor_OnTriggerEnter, "OnTriggerEnter" }, // 3918791626
		{ &Z_Construct_UFunction_ATriggerDoor_OnTriggerExit, "OnTriggerExit" }, // 3568652916
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerDoor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerDoor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TriggerDoor.h" },
		{ "ModuleRelativePath", "Public/TriggerDoor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerDoor_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "Category", "Door Trigger" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerDoor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerDoor_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATriggerDoor, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerDoor_Statics::NewProp_BoxComponent_MetaData), Z_Construct_UClass_ATriggerDoor_Statics::NewProp_BoxComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerDoor_Statics::NewProp_ActorList_ElementProp = { "ActorList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerDoor_Statics::NewProp_ActorList_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerDoor.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_ATriggerDoor_Statics::NewProp_ActorList = { "ActorList", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATriggerDoor, ActorList), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerDoor_Statics::NewProp_ActorList_MetaData), Z_Construct_UClass_ATriggerDoor_Statics::NewProp_ActorList_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATriggerDoor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerDoor_Statics::NewProp_BoxComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerDoor_Statics::NewProp_ActorList_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerDoor_Statics::NewProp_ActorList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATriggerDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATriggerDoor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATriggerDoor_Statics::ClassParams = {
		&ATriggerDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATriggerDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerDoor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerDoor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATriggerDoor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerDoor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATriggerDoor()
	{
		if (!Z_Registration_Info_UClass_ATriggerDoor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATriggerDoor.OuterSingleton, Z_Construct_UClass_ATriggerDoor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATriggerDoor.OuterSingleton;
	}
	template<> PROCEDURALDUNGEON_API UClass* StaticClass<ATriggerDoor>()
	{
		return ATriggerDoor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATriggerDoor);
	ATriggerDoor::~ATriggerDoor() {}
	struct Z_CompiledInDeferFile_FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATriggerDoor, ATriggerDoor::StaticClass, TEXT("ATriggerDoor"), &Z_Registration_Info_UClass_ATriggerDoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATriggerDoor), 598947531U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_1320254981(TEXT("/Script/ProceduralDungeon"),
		Z_CompiledInDeferFile_FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
