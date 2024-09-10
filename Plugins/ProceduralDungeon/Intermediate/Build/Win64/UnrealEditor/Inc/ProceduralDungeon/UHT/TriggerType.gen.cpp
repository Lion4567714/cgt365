// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/TriggerType.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerType() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UTriggerType();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UTriggerType_NoRegister();
	PROCEDURALDUNGEON_API UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerArrayEvent__DelegateSignature();
	PROCEDURALDUNGEON_API UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerEvent__DelegateSignature_Statics
	{
		struct _Script_ProceduralDungeon_eventTriggerEvent_Parms
		{
			AActor* Actor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerEvent__DelegateSignature_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProceduralDungeon_eventTriggerEvent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerEvent__DelegateSignature_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerType.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProceduralDungeon, nullptr, "TriggerEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerEvent__DelegateSignature_Statics::_Script_ProceduralDungeon_eventTriggerEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerEvent__DelegateSignature_Statics::_Script_ProceduralDungeon_eventTriggerEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FTriggerEvent_DelegateWrapper(const FMulticastScriptDelegate& TriggerEvent, AActor* Actor)
{
	struct _Script_ProceduralDungeon_eventTriggerEvent_Parms
	{
		AActor* Actor;
	};
	_Script_ProceduralDungeon_eventTriggerEvent_Parms Parms;
	Parms.Actor=Actor;
	TriggerEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerArrayEvent__DelegateSignature_Statics
	{
		struct _Script_ProceduralDungeon_eventTriggerArrayEvent_Parms
		{
			TArray<AActor*> Actor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerArrayEvent__DelegateSignature_Statics::NewProp_Actor_Inner = { "Actor", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerArrayEvent__DelegateSignature_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProceduralDungeon_eventTriggerArrayEvent_Parms, Actor), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerArrayEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerArrayEvent__DelegateSignature_Statics::NewProp_Actor_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerArrayEvent__DelegateSignature_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerArrayEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerType.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerArrayEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProceduralDungeon, nullptr, "TriggerArrayEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerArrayEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerArrayEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerArrayEvent__DelegateSignature_Statics::_Script_ProceduralDungeon_eventTriggerArrayEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerArrayEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerArrayEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerArrayEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerArrayEvent__DelegateSignature_Statics::_Script_ProceduralDungeon_eventTriggerArrayEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerArrayEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerArrayEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FTriggerArrayEvent_DelegateWrapper(const FMulticastScriptDelegate& TriggerArrayEvent, const TArray<AActor*>& Actor)
{
	struct _Script_ProceduralDungeon_eventTriggerArrayEvent_Parms
	{
		TArray<AActor*> Actor;
	};
	_Script_ProceduralDungeon_eventTriggerArrayEvent_Parms Parms;
	Parms.Actor=Actor;
	TriggerArrayEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UTriggerType::execTriggerDeactivate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerDeactivate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerType::execTriggerActivate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerActivate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerType::execTriggerTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerTick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerType::execOnTriggerExit)
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
	DEFINE_FUNCTION(UTriggerType::execOnTriggerEnter)
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
	DEFINE_FUNCTION(UTriggerType::execGetActorList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetActorList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerType::execIsActivated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActivated();
		P_NATIVE_END;
	}
	void UTriggerType::StaticRegisterNativesUTriggerType()
	{
		UClass* Class = UTriggerType::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActorList", &UTriggerType::execGetActorList },
			{ "IsActivated", &UTriggerType::execIsActivated },
			{ "OnTriggerEnter", &UTriggerType::execOnTriggerEnter },
			{ "OnTriggerExit", &UTriggerType::execOnTriggerExit },
			{ "TriggerActivate", &UTriggerType::execTriggerActivate },
			{ "TriggerDeactivate", &UTriggerType::execTriggerDeactivate },
			{ "TriggerTick", &UTriggerType::execTriggerTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerType_GetActorList_Statics
	{
		struct TriggerType_eventGetActorList_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerType_GetActorList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerType_GetActorList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerType_eventGetActorList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerType_GetActorList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerType_GetActorList_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerType_GetActorList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerType_GetActorList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerType.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerType_GetActorList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerType, nullptr, "GetActorList", nullptr, nullptr, Z_Construct_UFunction_UTriggerType_GetActorList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerType_GetActorList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTriggerType_GetActorList_Statics::TriggerType_eventGetActorList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerType_GetActorList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTriggerType_GetActorList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerType_GetActorList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTriggerType_GetActorList_Statics::TriggerType_eventGetActorList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTriggerType_GetActorList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTriggerType_GetActorList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerType_IsActivated_Statics
	{
		struct TriggerType_eventIsActivated_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTriggerType_IsActivated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerType_eventIsActivated_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerType_IsActivated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TriggerType_eventIsActivated_Parms), &Z_Construct_UFunction_UTriggerType_IsActivated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerType_IsActivated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerType_IsActivated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerType_IsActivated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerType.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerType_IsActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerType, nullptr, "IsActivated", nullptr, nullptr, Z_Construct_UFunction_UTriggerType_IsActivated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerType_IsActivated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTriggerType_IsActivated_Statics::TriggerType_eventIsActivated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerType_IsActivated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTriggerType_IsActivated_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerType_IsActivated_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTriggerType_IsActivated_Statics::TriggerType_eventIsActivated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTriggerType_IsActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTriggerType_IsActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerType_OnTriggerEnter_Statics
	{
		struct TriggerType_eventOnTriggerEnter_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerType_OnTriggerEnter_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerType_OnTriggerEnter_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerType_eventOnTriggerEnter_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerType_OnTriggerEnter_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_UTriggerType_OnTriggerEnter_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerType_OnTriggerEnter_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerType_eventOnTriggerEnter_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerType_OnTriggerEnter_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerType_OnTriggerEnter_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerType_eventOnTriggerEnter_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerType_OnTriggerEnter_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_UTriggerType_OnTriggerEnter_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTriggerType_OnTriggerEnter_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerType_eventOnTriggerEnter_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UTriggerType_OnTriggerEnter_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((TriggerType_eventOnTriggerEnter_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerType_OnTriggerEnter_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TriggerType_eventOnTriggerEnter_Parms), &Z_Construct_UFunction_UTriggerType_OnTriggerEnter_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerType_OnTriggerEnter_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerType_OnTriggerEnter_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerType_eventOnTriggerEnter_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerType_OnTriggerEnter_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_UTriggerType_OnTriggerEnter_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerType_OnTriggerEnter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerType_OnTriggerEnter_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerType_OnTriggerEnter_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerType_OnTriggerEnter_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerType_OnTriggerEnter_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerType_OnTriggerEnter_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerType_OnTriggerEnter_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerType_OnTriggerEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerType.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerType_OnTriggerEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerType, nullptr, "OnTriggerEnter", nullptr, nullptr, Z_Construct_UFunction_UTriggerType_OnTriggerEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerType_OnTriggerEnter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTriggerType_OnTriggerEnter_Statics::TriggerType_eventOnTriggerEnter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerType_OnTriggerEnter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTriggerType_OnTriggerEnter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerType_OnTriggerEnter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTriggerType_OnTriggerEnter_Statics::TriggerType_eventOnTriggerEnter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTriggerType_OnTriggerEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTriggerType_OnTriggerEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerType_OnTriggerExit_Statics
	{
		struct TriggerType_eventOnTriggerExit_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerType_OnTriggerExit_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerType_OnTriggerExit_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerType_eventOnTriggerExit_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerType_OnTriggerExit_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_UTriggerType_OnTriggerExit_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerType_OnTriggerExit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerType_eventOnTriggerExit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerType_OnTriggerExit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerType_OnTriggerExit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerType_eventOnTriggerExit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerType_OnTriggerExit_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_UTriggerType_OnTriggerExit_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTriggerType_OnTriggerExit_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerType_eventOnTriggerExit_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerType_OnTriggerExit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerType_OnTriggerExit_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerType_OnTriggerExit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerType_OnTriggerExit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerType_OnTriggerExit_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerType_OnTriggerExit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerType.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerType_OnTriggerExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerType, nullptr, "OnTriggerExit", nullptr, nullptr, Z_Construct_UFunction_UTriggerType_OnTriggerExit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerType_OnTriggerExit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTriggerType_OnTriggerExit_Statics::TriggerType_eventOnTriggerExit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerType_OnTriggerExit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTriggerType_OnTriggerExit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerType_OnTriggerExit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTriggerType_OnTriggerExit_Statics::TriggerType_eventOnTriggerExit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTriggerType_OnTriggerExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTriggerType_OnTriggerExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerType_TriggerActivate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerType_TriggerActivate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerType.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerType_TriggerActivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerType, nullptr, "TriggerActivate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerType_TriggerActivate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTriggerType_TriggerActivate_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UTriggerType_TriggerActivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTriggerType_TriggerActivate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerType_TriggerDeactivate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerType_TriggerDeactivate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerType.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerType_TriggerDeactivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerType, nullptr, "TriggerDeactivate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerType_TriggerDeactivate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTriggerType_TriggerDeactivate_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UTriggerType_TriggerDeactivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTriggerType_TriggerDeactivate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerType_TriggerTick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerType_TriggerTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerType.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerType_TriggerTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerType, nullptr, "TriggerTick", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerType_TriggerTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTriggerType_TriggerTick_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UTriggerType_TriggerTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTriggerType_TriggerTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTriggerType);
	UClass* Z_Construct_UClass_UTriggerType_NoRegister()
	{
		return UTriggerType::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerType_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TickDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActivationDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_requiredActorCountToActivate_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_requiredActorCountToActivate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnActorEnter_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActorEnter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnActorExit_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActorExit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTriggerTick_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTriggerTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnActivation_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActivation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDeactivation_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeactivation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsActivated_MetaData[];
#endif
		static void NewProp_bIsActivated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActivated;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickTimer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TickTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationTimer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActivationTimer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBoxComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerType_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerType_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerType_GetActorList, "GetActorList" }, // 3122219627
		{ &Z_Construct_UFunction_UTriggerType_IsActivated, "IsActivated" }, // 712327522
		{ &Z_Construct_UFunction_UTriggerType_OnTriggerEnter, "OnTriggerEnter" }, // 1545819361
		{ &Z_Construct_UFunction_UTriggerType_OnTriggerExit, "OnTriggerExit" }, // 1586603067
		{ &Z_Construct_UFunction_UTriggerType_TriggerActivate, "TriggerActivate" }, // 480358868
		{ &Z_Construct_UFunction_UTriggerType_TriggerDeactivate, "TriggerDeactivate" }, // 4089068876
		{ &Z_Construct_UFunction_UTriggerType_TriggerTick, "TriggerTick" }, // 3072674022
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerType_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "TriggerType.h" },
		{ "ModuleRelativePath", "Public/TriggerType.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerType_Statics::NewProp_TickDuration_MetaData[] = {
		{ "Category", "Trigger Type" },
		{ "ModuleRelativePath", "Public/TriggerType.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTriggerType_Statics::NewProp_TickDuration = { "TickDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriggerType, TickDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerType_Statics::NewProp_TickDuration_MetaData), Z_Construct_UClass_UTriggerType_Statics::NewProp_TickDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerType_Statics::NewProp_ActivationDelay_MetaData[] = {
		{ "Category", "Trigger Type" },
		{ "ModuleRelativePath", "Public/TriggerType.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTriggerType_Statics::NewProp_ActivationDelay = { "ActivationDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriggerType, ActivationDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerType_Statics::NewProp_ActivationDelay_MetaData), Z_Construct_UClass_UTriggerType_Statics::NewProp_ActivationDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerType_Statics::NewProp_requiredActorCountToActivate_MetaData[] = {
		{ "Category", "Trigger Type" },
		{ "ModuleRelativePath", "Public/TriggerType.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTriggerType_Statics::NewProp_requiredActorCountToActivate = { "requiredActorCountToActivate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriggerType, requiredActorCountToActivate), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerType_Statics::NewProp_requiredActorCountToActivate_MetaData), Z_Construct_UClass_UTriggerType_Statics::NewProp_requiredActorCountToActivate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerType_Statics::NewProp_ActorType_MetaData[] = {
		{ "Category", "Trigger Type" },
		{ "ModuleRelativePath", "Public/TriggerType.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTriggerType_Statics::NewProp_ActorType = { "ActorType", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriggerType, ActorType), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerType_Statics::NewProp_ActorType_MetaData), Z_Construct_UClass_UTriggerType_Statics::NewProp_ActorType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerType_Statics::NewProp_OnActorEnter_MetaData[] = {
		{ "DisplayName", "On Actor Enter" },
		{ "ModuleRelativePath", "Public/TriggerType.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTriggerType_Statics::NewProp_OnActorEnter = { "OnActorEnter", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriggerType, OnActorEnter), Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerType_Statics::NewProp_OnActorEnter_MetaData), Z_Construct_UClass_UTriggerType_Statics::NewProp_OnActorEnter_MetaData) }; // 3262124707
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerType_Statics::NewProp_OnActorExit_MetaData[] = {
		{ "DisplayName", "On Actor Exit" },
		{ "ModuleRelativePath", "Public/TriggerType.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTriggerType_Statics::NewProp_OnActorExit = { "OnActorExit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriggerType, OnActorExit), Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerType_Statics::NewProp_OnActorExit_MetaData), Z_Construct_UClass_UTriggerType_Statics::NewProp_OnActorExit_MetaData) }; // 3262124707
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerType_Statics::NewProp_OnTriggerTick_MetaData[] = {
		{ "DisplayName", "On Trigger Tick" },
		{ "ModuleRelativePath", "Public/TriggerType.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTriggerType_Statics::NewProp_OnTriggerTick = { "OnTriggerTick", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriggerType, OnTriggerTick), Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerArrayEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerType_Statics::NewProp_OnTriggerTick_MetaData), Z_Construct_UClass_UTriggerType_Statics::NewProp_OnTriggerTick_MetaData) }; // 1622959298
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerType_Statics::NewProp_OnActivation_MetaData[] = {
		{ "DisplayName", "On Trigger Activation" },
		{ "ModuleRelativePath", "Public/TriggerType.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTriggerType_Statics::NewProp_OnActivation = { "OnActivation", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriggerType, OnActivation), Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerArrayEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerType_Statics::NewProp_OnActivation_MetaData), Z_Construct_UClass_UTriggerType_Statics::NewProp_OnActivation_MetaData) }; // 1622959298
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerType_Statics::NewProp_OnDeactivation_MetaData[] = {
		{ "DisplayName", "On Trigger Deactivation" },
		{ "ModuleRelativePath", "Public/TriggerType.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTriggerType_Statics::NewProp_OnDeactivation = { "OnDeactivation", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriggerType, OnDeactivation), Z_Construct_UDelegateFunction_ProceduralDungeon_TriggerArrayEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerType_Statics::NewProp_OnDeactivation_MetaData), Z_Construct_UClass_UTriggerType_Statics::NewProp_OnDeactivation_MetaData) }; // 1622959298
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerType_Statics::NewProp_bIsActivated_MetaData[] = {
		{ "Category", "Trigger Type" },
		{ "ModuleRelativePath", "Public/TriggerType.h" },
	};
#endif
	void Z_Construct_UClass_UTriggerType_Statics::NewProp_bIsActivated_SetBit(void* Obj)
	{
		((UTriggerType*)Obj)->bIsActivated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTriggerType_Statics::NewProp_bIsActivated = { "bIsActivated", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTriggerType), &Z_Construct_UClass_UTriggerType_Statics::NewProp_bIsActivated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerType_Statics::NewProp_bIsActivated_MetaData), Z_Construct_UClass_UTriggerType_Statics::NewProp_bIsActivated_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerType_Statics::NewProp_ActorList_Inner = { "ActorList", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerType_Statics::NewProp_ActorList_MetaData[] = {
		{ "Category", "Trigger Type" },
		{ "ModuleRelativePath", "Public/TriggerType.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTriggerType_Statics::NewProp_ActorList = { "ActorList", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriggerType, ActorList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerType_Statics::NewProp_ActorList_MetaData), Z_Construct_UClass_UTriggerType_Statics::NewProp_ActorList_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerType_Statics::NewProp_TickTimer_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerType.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTriggerType_Statics::NewProp_TickTimer = { "TickTimer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriggerType, TickTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerType_Statics::NewProp_TickTimer_MetaData), Z_Construct_UClass_UTriggerType_Statics::NewProp_TickTimer_MetaData) }; // 3999327403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerType_Statics::NewProp_ActivationTimer_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerType.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTriggerType_Statics::NewProp_ActivationTimer = { "ActivationTimer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriggerType, ActivationTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerType_Statics::NewProp_ActivationTimer_MetaData), Z_Construct_UClass_UTriggerType_Statics::NewProp_ActivationTimer_MetaData) }; // 3999327403
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerType_Statics::NewProp_TickDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerType_Statics::NewProp_ActivationDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerType_Statics::NewProp_requiredActorCountToActivate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerType_Statics::NewProp_ActorType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerType_Statics::NewProp_OnActorEnter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerType_Statics::NewProp_OnActorExit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerType_Statics::NewProp_OnTriggerTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerType_Statics::NewProp_OnActivation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerType_Statics::NewProp_OnDeactivation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerType_Statics::NewProp_bIsActivated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerType_Statics::NewProp_ActorList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerType_Statics::NewProp_ActorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerType_Statics::NewProp_TickTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerType_Statics::NewProp_ActivationTimer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerType>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTriggerType_Statics::ClassParams = {
		&UTriggerType::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTriggerType_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerType_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerType_Statics::Class_MetaDataParams), Z_Construct_UClass_UTriggerType_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerType_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTriggerType()
	{
		if (!Z_Registration_Info_UClass_UTriggerType.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTriggerType.OuterSingleton, Z_Construct_UClass_UTriggerType_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTriggerType.OuterSingleton;
	}
	template<> PROCEDURALDUNGEON_API UClass* StaticClass<UTriggerType>()
	{
		return UTriggerType::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerType);
	UTriggerType::~UTriggerType() {}
	struct Z_CompiledInDeferFile_FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTriggerType, UTriggerType::StaticClass, TEXT("UTriggerType"), &Z_Registration_Info_UClass_UTriggerType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTriggerType), 3483691265U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_1571170978(TEXT("/Script/ProceduralDungeon"),
		Z_CompiledInDeferFile_FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
