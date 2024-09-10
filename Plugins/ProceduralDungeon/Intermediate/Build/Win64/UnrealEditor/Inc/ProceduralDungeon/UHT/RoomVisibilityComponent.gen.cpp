// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/RoomVisibilityComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoomVisibilityComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ARoomLevel_NoRegister();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomVisibilityComponent();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomVisibilityComponent_NoRegister();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomVisitor_NoRegister();
	PROCEDURALDUNGEON_API UEnum* Z_Construct_UEnum_ProceduralDungeon_EVisibilityMode();
	PROCEDURALDUNGEON_API UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVisibilityMode;
	static UEnum* EVisibilityMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVisibilityMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVisibilityMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProceduralDungeon_EVisibilityMode, (UObject*)Z_Construct_UPackage__Script_ProceduralDungeon(), TEXT("EVisibilityMode"));
		}
		return Z_Registration_Info_UEnum_EVisibilityMode.OuterSingleton;
	}
	template<> PROCEDURALDUNGEON_API UEnum* StaticEnum<EVisibilityMode>()
	{
		return EVisibilityMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ProceduralDungeon_EVisibilityMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ProceduralDungeon_EVisibilityMode_Statics::Enumerators[] = {
		{ "EVisibilityMode::Default", (int64)EVisibilityMode::Default },
		{ "EVisibilityMode::ForceVisible", (int64)EVisibilityMode::ForceVisible },
		{ "EVisibilityMode::ForceHidden", (int64)EVisibilityMode::ForceHidden },
		{ "EVisibilityMode::Custom", (int64)EVisibilityMode::Custom },
		{ "EVisibilityMode::NbMode", (int64)EVisibilityMode::NbMode },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ProceduralDungeon_EVisibilityMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Custom.DisplayName", "Custom" },
		{ "Custom.Name", "EVisibilityMode::Custom" },
		{ "Default.DisplayName", "Same As Room" },
		{ "Default.Name", "EVisibilityMode::Default" },
		{ "DisplayName", "Room Visibility" },
		{ "ForceHidden.DisplayName", "Force Hidden" },
		{ "ForceHidden.Name", "EVisibilityMode::ForceHidden" },
		{ "ForceVisible.DisplayName", "Force Visible" },
		{ "ForceVisible.Name", "EVisibilityMode::ForceVisible" },
		{ "ModuleRelativePath", "Public/RoomVisibilityComponent.h" },
		{ "NbMode.Hidden", "" },
		{ "NbMode.Name", "EVisibilityMode::NbMode" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProceduralDungeon_EVisibilityMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ProceduralDungeon,
		nullptr,
		"EVisibilityMode",
		"EVisibilityMode",
		Z_Construct_UEnum_ProceduralDungeon_EVisibilityMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralDungeon_EVisibilityMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralDungeon_EVisibilityMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProceduralDungeon_EVisibilityMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ProceduralDungeon_EVisibilityMode()
	{
		if (!Z_Registration_Info_UEnum_EVisibilityMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVisibilityMode.InnerSingleton, Z_Construct_UEnum_ProceduralDungeon_EVisibilityMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVisibilityMode.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature_Statics
	{
		struct _Script_ProceduralDungeon_eventRoomVisibilityEvent_Parms
		{
			AActor* Actor;
			bool IsInVisibleRoom;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_IsInVisibleRoom_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsInVisibleRoom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProceduralDungeon_eventRoomVisibilityEvent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature_Statics::NewProp_IsInVisibleRoom_SetBit(void* Obj)
	{
		((_Script_ProceduralDungeon_eventRoomVisibilityEvent_Parms*)Obj)->IsInVisibleRoom = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature_Statics::NewProp_IsInVisibleRoom = { "IsInVisibleRoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ProceduralDungeon_eventRoomVisibilityEvent_Parms), &Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature_Statics::NewProp_IsInVisibleRoom_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature_Statics::NewProp_IsInVisibleRoom,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RoomVisibilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProceduralDungeon, nullptr, "RoomVisibilityEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature_Statics::_Script_ProceduralDungeon_eventRoomVisibilityEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature_Statics::_Script_ProceduralDungeon_eventRoomVisibilityEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FRoomVisibilityEvent_DelegateWrapper(const FMulticastScriptDelegate& RoomVisibilityEvent, AActor* Actor, bool IsInVisibleRoom)
{
	struct _Script_ProceduralDungeon_eventRoomVisibilityEvent_Parms
	{
		AActor* Actor;
		bool IsInVisibleRoom;
	};
	_Script_ProceduralDungeon_eventRoomVisibilityEvent_Parms Parms;
	Parms.Actor=Actor;
	Parms.IsInVisibleRoom=IsInVisibleRoom ? true : false;
	RoomVisibilityEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(URoomVisibilityComponent::execRoomVisibilityChanged)
	{
		P_GET_OBJECT(ARoomLevel,Z_Param_RoomLevel);
		P_GET_UBOOL(Z_Param_IsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RoomVisibilityChanged(Z_Param_RoomLevel,Z_Param_IsVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URoomVisibilityComponent::execGetVisibilityMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EVisibilityMode*)Z_Param__Result=P_THIS->GetVisibilityMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URoomVisibilityComponent::execSetVisibilityMode)
	{
		P_GET_ENUM(EVisibilityMode,Z_Param_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibilityMode(EVisibilityMode(Z_Param_Mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URoomVisibilityComponent::execIsVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVisible();
		P_NATIVE_END;
	}
	void URoomVisibilityComponent::StaticRegisterNativesURoomVisibilityComponent()
	{
		UClass* Class = URoomVisibilityComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetVisibilityMode", &URoomVisibilityComponent::execGetVisibilityMode },
			{ "IsVisible", &URoomVisibilityComponent::execIsVisible },
			{ "RoomVisibilityChanged", &URoomVisibilityComponent::execRoomVisibilityChanged },
			{ "SetVisibilityMode", &URoomVisibilityComponent::execSetVisibilityMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URoomVisibilityComponent_GetVisibilityMode_Statics
	{
		struct RoomVisibilityComponent_eventGetVisibilityMode_Parms
		{
			EVisibilityMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URoomVisibilityComponent_GetVisibilityMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URoomVisibilityComponent_GetVisibilityMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomVisibilityComponent_eventGetVisibilityMode_Parms, ReturnValue), Z_Construct_UEnum_ProceduralDungeon_EVisibilityMode, METADATA_PARAMS(0, nullptr) }; // 1141838856
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomVisibilityComponent_GetVisibilityMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomVisibilityComponent_GetVisibilityMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomVisibilityComponent_GetVisibilityMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URoomVisibilityComponent_GetVisibilityMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural Dungeon" },
		{ "CompactNodeTitle", "Visibility" },
		{ "DisplayName", "Get Visibility" },
		{ "ModuleRelativePath", "Public/RoomVisibilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomVisibilityComponent_GetVisibilityMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoomVisibilityComponent, nullptr, "GetVisibilityMode", nullptr, nullptr, Z_Construct_UFunction_URoomVisibilityComponent_GetVisibilityMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoomVisibilityComponent_GetVisibilityMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoomVisibilityComponent_GetVisibilityMode_Statics::RoomVisibilityComponent_eventGetVisibilityMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomVisibilityComponent_GetVisibilityMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomVisibilityComponent_GetVisibilityMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomVisibilityComponent_GetVisibilityMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URoomVisibilityComponent_GetVisibilityMode_Statics::RoomVisibilityComponent_eventGetVisibilityMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URoomVisibilityComponent_GetVisibilityMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomVisibilityComponent_GetVisibilityMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URoomVisibilityComponent_IsVisible_Statics
	{
		struct RoomVisibilityComponent_eventIsVisible_Parms
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
	void Z_Construct_UFunction_URoomVisibilityComponent_IsVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RoomVisibilityComponent_eventIsVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URoomVisibilityComponent_IsVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RoomVisibilityComponent_eventIsVisible_Parms), &Z_Construct_UFunction_URoomVisibilityComponent_IsVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomVisibilityComponent_IsVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomVisibilityComponent_IsVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URoomVisibilityComponent_IsVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if the actor is in a visible room.\n// Always returns true when \"Occlude Dynamic Actors\" is unchecked in the plugin's settings\n// Useful with \"Custom\" visibility.\n" },
#endif
		{ "CompactNodeTitle", "Is In Visible Room" },
		{ "DisplayName", "Is In Visible Room" },
		{ "ModuleRelativePath", "Public/RoomVisibilityComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the actor is in a visible room.\nAlways returns true when \"Occlude Dynamic Actors\" is unchecked in the plugin's settings\nUseful with \"Custom\" visibility." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomVisibilityComponent_IsVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoomVisibilityComponent, nullptr, "IsVisible", nullptr, nullptr, Z_Construct_UFunction_URoomVisibilityComponent_IsVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoomVisibilityComponent_IsVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoomVisibilityComponent_IsVisible_Statics::RoomVisibilityComponent_eventIsVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomVisibilityComponent_IsVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomVisibilityComponent_IsVisible_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomVisibilityComponent_IsVisible_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URoomVisibilityComponent_IsVisible_Statics::RoomVisibilityComponent_eventIsVisible_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URoomVisibilityComponent_IsVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomVisibilityComponent_IsVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URoomVisibilityComponent_RoomVisibilityChanged_Statics
	{
		struct RoomVisibilityComponent_eventRoomVisibilityChanged_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoomVisibilityComponent_RoomVisibilityChanged_Statics::NewProp_RoomLevel = { "RoomLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomVisibilityComponent_eventRoomVisibilityChanged_Parms, RoomLevel), Z_Construct_UClass_ARoomLevel_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URoomVisibilityComponent_RoomVisibilityChanged_Statics::NewProp_IsVisible_SetBit(void* Obj)
	{
		((RoomVisibilityComponent_eventRoomVisibilityChanged_Parms*)Obj)->IsVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URoomVisibilityComponent_RoomVisibilityChanged_Statics::NewProp_IsVisible = { "IsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RoomVisibilityComponent_eventRoomVisibilityChanged_Parms), &Z_Construct_UFunction_URoomVisibilityComponent_RoomVisibilityChanged_Statics::NewProp_IsVisible_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomVisibilityComponent_RoomVisibilityChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomVisibilityComponent_RoomVisibilityChanged_Statics::NewProp_RoomLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomVisibilityComponent_RoomVisibilityChanged_Statics::NewProp_IsVisible,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URoomVisibilityComponent_RoomVisibilityChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RoomVisibilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomVisibilityComponent_RoomVisibilityChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoomVisibilityComponent, nullptr, "RoomVisibilityChanged", nullptr, nullptr, Z_Construct_UFunction_URoomVisibilityComponent_RoomVisibilityChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoomVisibilityComponent_RoomVisibilityChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoomVisibilityComponent_RoomVisibilityChanged_Statics::RoomVisibilityComponent_eventRoomVisibilityChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomVisibilityComponent_RoomVisibilityChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomVisibilityComponent_RoomVisibilityChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomVisibilityComponent_RoomVisibilityChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URoomVisibilityComponent_RoomVisibilityChanged_Statics::RoomVisibilityComponent_eventRoomVisibilityChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URoomVisibilityComponent_RoomVisibilityChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomVisibilityComponent_RoomVisibilityChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URoomVisibilityComponent_SetVisibilityMode_Statics
	{
		struct RoomVisibilityComponent_eventSetVisibilityMode_Parms
		{
			EVisibilityMode Mode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URoomVisibilityComponent_SetVisibilityMode_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URoomVisibilityComponent_SetVisibilityMode_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomVisibilityComponent_eventSetVisibilityMode_Parms, Mode), Z_Construct_UEnum_ProceduralDungeon_EVisibilityMode, METADATA_PARAMS(0, nullptr) }; // 1141838856
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomVisibilityComponent_SetVisibilityMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomVisibilityComponent_SetVisibilityMode_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomVisibilityComponent_SetVisibilityMode_Statics::NewProp_Mode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URoomVisibilityComponent_SetVisibilityMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural Dungeon" },
		{ "DisplayName", "Set Visibility" },
		{ "ModuleRelativePath", "Public/RoomVisibilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomVisibilityComponent_SetVisibilityMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoomVisibilityComponent, nullptr, "SetVisibilityMode", nullptr, nullptr, Z_Construct_UFunction_URoomVisibilityComponent_SetVisibilityMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoomVisibilityComponent_SetVisibilityMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoomVisibilityComponent_SetVisibilityMode_Statics::RoomVisibilityComponent_eventSetVisibilityMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomVisibilityComponent_SetVisibilityMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomVisibilityComponent_SetVisibilityMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomVisibilityComponent_SetVisibilityMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URoomVisibilityComponent_SetVisibilityMode_Statics::RoomVisibilityComponent_eventSetVisibilityMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URoomVisibilityComponent_SetVisibilityMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomVisibilityComponent_SetVisibilityMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URoomVisibilityComponent);
	UClass* Z_Construct_UClass_URoomVisibilityComponent_NoRegister()
	{
		return URoomVisibilityComponent::StaticClass();
	}
	struct Z_Construct_UClass_URoomVisibilityComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRoomVisibilityChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRoomVisibilityChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URoomVisibilityComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoomVisibilityComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_URoomVisibilityComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URoomVisibilityComponent_GetVisibilityMode, "GetVisibilityMode" }, // 3638324169
		{ &Z_Construct_UFunction_URoomVisibilityComponent_IsVisible, "IsVisible" }, // 2090625627
		{ &Z_Construct_UFunction_URoomVisibilityComponent_RoomVisibilityChanged, "RoomVisibilityChanged" }, // 684050348
		{ &Z_Construct_UFunction_URoomVisibilityComponent_SetVisibilityMode, "SetVisibilityMode" }, // 3420359734
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoomVisibilityComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoomVisibilityComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "ProceduralDungeon" },
		{ "DisplayName", "Room Visibility" },
		{ "IncludePath", "RoomVisibilityComponent.h" },
		{ "ModuleRelativePath", "Public/RoomVisibilityComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoomVisibilityComponent_Statics::NewProp_OnRoomVisibilityChanged_MetaData[] = {
		{ "Category", "Procedural Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the visibility from rooms changed (either by a room visibility change or by this actor moving between rooms).\n// Useful to update a \"Custom\" visibility.\n" },
#endif
		{ "ModuleRelativePath", "Public/RoomVisibilityComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the visibility from rooms changed (either by a room visibility change or by this actor moving between rooms).\nUseful to update a \"Custom\" visibility." },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URoomVisibilityComponent_Statics::NewProp_OnRoomVisibilityChanged = { "OnRoomVisibilityChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoomVisibilityComponent, OnRoomVisibilityChanged), Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URoomVisibilityComponent_Statics::NewProp_OnRoomVisibilityChanged_MetaData), Z_Construct_UClass_URoomVisibilityComponent_Statics::NewProp_OnRoomVisibilityChanged_MetaData) }; // 2744905718
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URoomVisibilityComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomVisibilityComponent_Statics::NewProp_OnRoomVisibilityChanged,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_URoomVisibilityComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_URoomVisitor_NoRegister, (int32)VTABLE_OFFSET(URoomVisibilityComponent, IRoomVisitor), false },  // 4231191646
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoomVisibilityComponent_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_URoomVisibilityComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoomVisibilityComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URoomVisibilityComponent_Statics::ClassParams = {
		&URoomVisibilityComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URoomVisibilityComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URoomVisibilityComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URoomVisibilityComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URoomVisibilityComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoomVisibilityComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URoomVisibilityComponent()
	{
		if (!Z_Registration_Info_UClass_URoomVisibilityComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoomVisibilityComponent.OuterSingleton, Z_Construct_UClass_URoomVisibilityComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URoomVisibilityComponent.OuterSingleton;
	}
	template<> PROCEDURALDUNGEON_API UClass* StaticClass<URoomVisibilityComponent>()
	{
		return URoomVisibilityComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URoomVisibilityComponent);
	URoomVisibilityComponent::~URoomVisibilityComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h_Statics::EnumInfo[] = {
		{ EVisibilityMode_StaticEnum, TEXT("EVisibilityMode"), &Z_Registration_Info_UEnum_EVisibilityMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1141838856U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URoomVisibilityComponent, URoomVisibilityComponent::StaticClass, TEXT("URoomVisibilityComponent"), &Z_Registration_Info_UClass_URoomVisibilityComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoomVisibilityComponent), 3964799109U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h_1649165577(TEXT("/Script/ProceduralDungeon"),
		Z_CompiledInDeferFile_FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
