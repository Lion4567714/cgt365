// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/RoomLevel.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoomLevel() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ARoomLevel();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ARoomLevel_NoRegister();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoom_NoRegister();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomData_NoRegister();
	PROCEDURALDUNGEON_API UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature_Statics
	{
		struct _Script_ProceduralDungeon_eventRoomLevelVisibilityEvent_Parms
		{
			ARoomLevel* RoomLevel;
			bool IsVisible;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomLevel;
		static void NewProp_IsVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature_Statics::NewProp_RoomLevel = { "RoomLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProceduralDungeon_eventRoomLevelVisibilityEvent_Parms, RoomLevel), Z_Construct_UClass_ARoomLevel_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature_Statics::NewProp_IsVisible_SetBit(void* Obj)
	{
		((_Script_ProceduralDungeon_eventRoomLevelVisibilityEvent_Parms*)Obj)->IsVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature_Statics::NewProp_IsVisible = { "IsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ProceduralDungeon_eventRoomLevelVisibilityEvent_Parms), &Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature_Statics::NewProp_IsVisible_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature_Statics::NewProp_RoomLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature_Statics::NewProp_IsVisible,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RoomLevel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProceduralDungeon, nullptr, "RoomLevelVisibilityEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature_Statics::_Script_ProceduralDungeon_eventRoomLevelVisibilityEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature_Statics::_Script_ProceduralDungeon_eventRoomLevelVisibilityEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FRoomLevelVisibilityEvent_DelegateWrapper(const FMulticastScriptDelegate& RoomLevelVisibilityEvent, ARoomLevel* RoomLevel, bool IsVisible)
{
	struct _Script_ProceduralDungeon_eventRoomLevelVisibilityEvent_Parms
	{
		ARoomLevel* RoomLevel;
		bool IsVisible;
	};
	_Script_ProceduralDungeon_eventRoomLevelVisibilityEvent_Parms Parms;
	Parms.RoomLevel=RoomLevel;
	Parms.IsVisible=IsVisible ? true : false;
	RoomLevelVisibilityEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ARoomLevel::execOnTriggerEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTriggerEndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARoomLevel::execOnTriggerBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTriggerBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARoomLevel::execGetRoom)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URoom**)Z_Param__Result=P_THIS->GetRoom();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARoomLevel::execLock)
	{
		P_GET_UBOOL(Z_Param_lock);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Lock(Z_Param_lock);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARoomLevel::execIsLocked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARoomLevel::execIsVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVisible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARoomLevel::execIsPlayerInside)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayerInside();
		P_NATIVE_END;
	}
	void ARoomLevel::StaticRegisterNativesARoomLevel()
	{
		UClass* Class = ARoomLevel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRoom", &ARoomLevel::execGetRoom },
			{ "IsLocked", &ARoomLevel::execIsLocked },
			{ "IsPlayerInside", &ARoomLevel::execIsPlayerInside },
			{ "IsVisible", &ARoomLevel::execIsVisible },
			{ "Lock", &ARoomLevel::execLock },
			{ "OnTriggerBeginOverlap", &ARoomLevel::execOnTriggerBeginOverlap },
			{ "OnTriggerEndOverlap", &ARoomLevel::execOnTriggerEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARoomLevel_GetRoom_Statics
	{
		struct RoomLevel_eventGetRoom_Parms
		{
			URoom* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARoomLevel_GetRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomLevel_eventGetRoom_Parms, ReturnValue), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoomLevel_GetRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomLevel_GetRoom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoomLevel_GetRoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural Dungeon" },
		{ "CompactNodeTitle", "Room" },
		{ "ModuleRelativePath", "Public/RoomLevel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoomLevel_GetRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoomLevel, nullptr, "GetRoom", nullptr, nullptr, Z_Construct_UFunction_ARoomLevel_GetRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_GetRoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoomLevel_GetRoom_Statics::RoomLevel_eventGetRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_GetRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoomLevel_GetRoom_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_GetRoom_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ARoomLevel_GetRoom_Statics::RoomLevel_eventGetRoom_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ARoomLevel_GetRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoomLevel_GetRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARoomLevel_IsLocked_Statics
	{
		struct RoomLevel_eventIsLocked_Parms
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
	void Z_Construct_UFunction_ARoomLevel_IsLocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RoomLevel_eventIsLocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARoomLevel_IsLocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RoomLevel_eventIsLocked_Parms), &Z_Construct_UFunction_ARoomLevel_IsLocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoomLevel_IsLocked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomLevel_IsLocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoomLevel_IsLocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural Dungeon" },
		{ "CompactNodeTitle", "Is Locked" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetRoom() instead to access directly the room functions." },
		{ "ModuleRelativePath", "Public/RoomLevel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoomLevel_IsLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoomLevel, nullptr, "IsLocked", nullptr, nullptr, Z_Construct_UFunction_ARoomLevel_IsLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_IsLocked_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoomLevel_IsLocked_Statics::RoomLevel_eventIsLocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_IsLocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoomLevel_IsLocked_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_IsLocked_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ARoomLevel_IsLocked_Statics::RoomLevel_eventIsLocked_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ARoomLevel_IsLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoomLevel_IsLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARoomLevel_IsPlayerInside_Statics
	{
		struct RoomLevel_eventIsPlayerInside_Parms
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
	void Z_Construct_UFunction_ARoomLevel_IsPlayerInside_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RoomLevel_eventIsPlayerInside_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARoomLevel_IsPlayerInside_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RoomLevel_eventIsPlayerInside_Parms), &Z_Construct_UFunction_ARoomLevel_IsPlayerInside_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoomLevel_IsPlayerInside_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomLevel_IsPlayerInside_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoomLevel_IsPlayerInside_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural Dungeon" },
		{ "CompactNodeTitle", "Is Player Inside" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetRoom() instead to access directly the room functions." },
		{ "ModuleRelativePath", "Public/RoomLevel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoomLevel_IsPlayerInside_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoomLevel, nullptr, "IsPlayerInside", nullptr, nullptr, Z_Construct_UFunction_ARoomLevel_IsPlayerInside_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_IsPlayerInside_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoomLevel_IsPlayerInside_Statics::RoomLevel_eventIsPlayerInside_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_IsPlayerInside_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoomLevel_IsPlayerInside_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_IsPlayerInside_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ARoomLevel_IsPlayerInside_Statics::RoomLevel_eventIsPlayerInside_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ARoomLevel_IsPlayerInside()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoomLevel_IsPlayerInside_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARoomLevel_IsVisible_Statics
	{
		struct RoomLevel_eventIsVisible_Parms
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
	void Z_Construct_UFunction_ARoomLevel_IsVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RoomLevel_eventIsVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARoomLevel_IsVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RoomLevel_eventIsVisible_Parms), &Z_Construct_UFunction_ARoomLevel_IsVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoomLevel_IsVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomLevel_IsVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoomLevel_IsVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural Dungeon" },
		{ "CompactNodeTitle", "Is Visible" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetRoom() instead to access directly the room functions." },
		{ "ModuleRelativePath", "Public/RoomLevel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoomLevel_IsVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoomLevel, nullptr, "IsVisible", nullptr, nullptr, Z_Construct_UFunction_ARoomLevel_IsVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_IsVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoomLevel_IsVisible_Statics::RoomLevel_eventIsVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_IsVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoomLevel_IsVisible_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_IsVisible_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ARoomLevel_IsVisible_Statics::RoomLevel_eventIsVisible_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ARoomLevel_IsVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoomLevel_IsVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARoomLevel_Lock_Statics
	{
		struct RoomLevel_eventLock_Parms
		{
			bool lock;
		};
		static void NewProp_lock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_lock;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ARoomLevel_Lock_Statics::NewProp_lock_SetBit(void* Obj)
	{
		((RoomLevel_eventLock_Parms*)Obj)->lock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARoomLevel_Lock_Statics::NewProp_lock = { "lock", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RoomLevel_eventLock_Parms), &Z_Construct_UFunction_ARoomLevel_Lock_Statics::NewProp_lock_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoomLevel_Lock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomLevel_Lock_Statics::NewProp_lock,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoomLevel_Lock_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural Dungeon" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetRoom() instead to access directly the room functions." },
		{ "ModuleRelativePath", "Public/RoomLevel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoomLevel_Lock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoomLevel, nullptr, "Lock", nullptr, nullptr, Z_Construct_UFunction_ARoomLevel_Lock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_Lock_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoomLevel_Lock_Statics::RoomLevel_eventLock_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_Lock_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoomLevel_Lock_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_Lock_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ARoomLevel_Lock_Statics::RoomLevel_eventLock_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ARoomLevel_Lock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoomLevel_Lock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics
	{
		struct RoomLevel_eventOnTriggerBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomLevel_eventOnTriggerBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::NewProp_OverlappedComp_MetaData), Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::NewProp_OverlappedComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomLevel_eventOnTriggerBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomLevel_eventOnTriggerBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomLevel_eventOnTriggerBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((RoomLevel_eventOnTriggerBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RoomLevel_eventOnTriggerBeginOverlap_Parms), &Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomLevel_eventOnTriggerBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RoomLevel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoomLevel, nullptr, "OnTriggerBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::RoomLevel_eventOnTriggerBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::RoomLevel_eventOnTriggerBeginOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics
	{
		struct RoomLevel_eventOnTriggerEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomLevel_eventOnTriggerEndOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::NewProp_OverlappedComp_MetaData), Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::NewProp_OverlappedComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomLevel_eventOnTriggerEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomLevel_eventOnTriggerEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomLevel_eventOnTriggerEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RoomLevel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoomLevel, nullptr, "OnTriggerEndOverlap", nullptr, nullptr, Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::RoomLevel_eventOnTriggerEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::RoomLevel_eventOnTriggerEndOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARoomLevel);
	UClass* Z_Construct_UClass_ARoomLevel_NoRegister()
	{
		return ARoomLevel::StaticClass();
	}
	struct Z_Construct_UClass_ARoomLevel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Room_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisibilityChangedEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_VisibilityChangedEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomTrigger_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomTrigger;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARoomLevel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALevelScriptActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARoomLevel_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ARoomLevel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARoomLevel_GetRoom, "GetRoom" }, // 594175328
		{ &Z_Construct_UFunction_ARoomLevel_IsLocked, "IsLocked" }, // 3792722930
		{ &Z_Construct_UFunction_ARoomLevel_IsPlayerInside, "IsPlayerInside" }, // 837571743
		{ &Z_Construct_UFunction_ARoomLevel_IsVisible, "IsVisible" }, // 283391749
		{ &Z_Construct_UFunction_ARoomLevel_Lock, "Lock" }, // 2960327917
		{ &Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap, "OnTriggerBeginOverlap" }, // 3665478026
		{ &Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap, "OnTriggerEndOverlap" }, // 1049640653
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARoomLevel_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoomLevel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural Dungeon" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "RoomLevel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RoomLevel.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoomLevel_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/RoomLevel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoomLevel_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoomLevel, Data), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARoomLevel_Statics::NewProp_Data_MetaData), Z_Construct_UClass_ARoomLevel_Statics::NewProp_Data_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoomLevel_Statics::NewProp_Room_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Macro is here to mark property to be used by GC\n" },
#endif
		{ "ModuleRelativePath", "Public/RoomLevel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Macro is here to mark property to be used by GC" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoomLevel_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoomLevel, Room), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARoomLevel_Statics::NewProp_Room_MetaData), Z_Construct_UClass_ARoomLevel_Statics::NewProp_Room_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoomLevel_Statics::NewProp_VisibilityChangedEvent_MetaData[] = {
		{ "Category", "Procedural Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event to notify when the visibility of the room has been toggled.\n" },
#endif
		{ "ModuleRelativePath", "Public/RoomLevel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event to notify when the visibility of the room has been toggled." },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARoomLevel_Statics::NewProp_VisibilityChangedEvent = { "VisibilityChangedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoomLevel, VisibilityChangedEvent), Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARoomLevel_Statics::NewProp_VisibilityChangedEvent_MetaData), Z_Construct_UClass_ARoomLevel_Statics::NewProp_VisibilityChangedEvent_MetaData) }; // 3664069625
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoomLevel_Statics::NewProp_RoomTrigger_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RoomLevel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoomLevel_Statics::NewProp_RoomTrigger = { "RoomTrigger", nullptr, (EPropertyFlags)0x0040000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoomLevel, RoomTrigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARoomLevel_Statics::NewProp_RoomTrigger_MetaData), Z_Construct_UClass_ARoomLevel_Statics::NewProp_RoomTrigger_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARoomLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomLevel_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomLevel_Statics::NewProp_Room,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomLevel_Statics::NewProp_VisibilityChangedEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomLevel_Statics::NewProp_RoomTrigger,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARoomLevel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoomLevel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARoomLevel_Statics::ClassParams = {
		&ARoomLevel::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARoomLevel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARoomLevel_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARoomLevel_Statics::Class_MetaDataParams), Z_Construct_UClass_ARoomLevel_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARoomLevel_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ARoomLevel()
	{
		if (!Z_Registration_Info_UClass_ARoomLevel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARoomLevel.OuterSingleton, Z_Construct_UClass_ARoomLevel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARoomLevel.OuterSingleton;
	}
	template<> PROCEDURALDUNGEON_API UClass* StaticClass<ARoomLevel>()
	{
		return ARoomLevel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARoomLevel);
	ARoomLevel::~ARoomLevel() {}
	struct Z_CompiledInDeferFile_FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomLevel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomLevel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARoomLevel, ARoomLevel::StaticClass, TEXT("ARoomLevel"), &Z_Registration_Info_UClass_ARoomLevel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARoomLevel), 626778998U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomLevel_h_179806137(TEXT("/Script/ProceduralDungeon"),
		Z_CompiledInDeferFile_FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomLevel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomLevel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
