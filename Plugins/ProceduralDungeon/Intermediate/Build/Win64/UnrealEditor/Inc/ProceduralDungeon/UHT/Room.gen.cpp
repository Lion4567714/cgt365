// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/Room.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoom() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingDynamic_NoRegister();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ADoor_NoRegister();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ADungeonGenerator_NoRegister();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UReplicableObject();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoom();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoom_NoRegister();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomCustomData_NoRegister();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomData_NoRegister();
	PROCEDURALDUNGEON_API UEnum* Z_Construct_UEnum_ProceduralDungeon_EDoorDirection();
	PROCEDURALDUNGEON_API UScriptStruct* Z_Construct_UScriptStruct_FCustomDataPair();
	PROCEDURALDUNGEON_API UScriptStruct* Z_Construct_UScriptStruct_FRoomConnection();
	UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RoomConnection;
class UScriptStruct* FRoomConnection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RoomConnection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RoomConnection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoomConnection, (UObject*)Z_Construct_UPackage__Script_ProceduralDungeon(), TEXT("RoomConnection"));
	}
	return Z_Registration_Info_UScriptStruct_RoomConnection.OuterSingleton;
}
template<> PROCEDURALDUNGEON_API UScriptStruct* StaticStruct<FRoomConnection>()
{
	return FRoomConnection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRoomConnection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherRoom_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_OtherRoom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoomConnection_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Room.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRoomConnection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoomConnection>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoomConnection_Statics::NewProp_OtherRoom_MetaData[] = {
		{ "ModuleRelativePath", "Public/Room.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FRoomConnection_Statics::NewProp_OtherRoom = { "OtherRoom", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoomConnection, OtherRoom), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomConnection_Statics::NewProp_OtherRoom_MetaData), Z_Construct_UScriptStruct_FRoomConnection_Statics::NewProp_OtherRoom_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRoomConnection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoomConnection_Statics::NewProp_OtherRoom,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRoomConnection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
		nullptr,
		&NewStructOps,
		"RoomConnection",
		Z_Construct_UScriptStruct_FRoomConnection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomConnection_Statics::PropPointers),
		sizeof(FRoomConnection),
		alignof(FRoomConnection),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomConnection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRoomConnection_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomConnection_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRoomConnection()
	{
		if (!Z_Registration_Info_UScriptStruct_RoomConnection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RoomConnection.InnerSingleton, Z_Construct_UScriptStruct_FRoomConnection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RoomConnection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomDataPair;
class UScriptStruct* FCustomDataPair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomDataPair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomDataPair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomDataPair, (UObject*)Z_Construct_UPackage__Script_ProceduralDungeon(), TEXT("CustomDataPair"));
	}
	return Z_Registration_Info_UScriptStruct_CustomDataPair.OuterSingleton;
}
template<> PROCEDURALDUNGEON_API UScriptStruct* StaticStruct<FCustomDataPair>()
{
	return FCustomDataPair::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomDataPair_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DataClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomDataPair_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Room.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomDataPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomDataPair>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomDataPair_Statics::NewProp_DataClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Room.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCustomDataPair_Statics::NewProp_DataClass = { "DataClass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomDataPair, DataClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomDataPair_Statics::NewProp_DataClass_MetaData), Z_Construct_UScriptStruct_FCustomDataPair_Statics::NewProp_DataClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomDataPair_Statics::NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Public/Room.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCustomDataPair_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomDataPair, Data), Z_Construct_UClass_URoomCustomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomDataPair_Statics::NewProp_Data_MetaData), Z_Construct_UScriptStruct_FCustomDataPair_Statics::NewProp_Data_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomDataPair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomDataPair_Statics::NewProp_DataClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomDataPair_Statics::NewProp_Data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomDataPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
		nullptr,
		&NewStructOps,
		"CustomDataPair",
		Z_Construct_UScriptStruct_FCustomDataPair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomDataPair_Statics::PropPointers),
		sizeof(FCustomDataPair),
		alignof(FCustomDataPair),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomDataPair_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCustomDataPair_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomDataPair_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCustomDataPair()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomDataPair.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomDataPair.InnerSingleton, Z_Construct_UScriptStruct_FCustomDataPair_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomDataPair.InnerSingleton;
	}
	DEFINE_FUNCTION(URoom::execOnInstanceLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInstanceLoaded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URoom::execOnRep_IsLocked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsLocked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URoom::execGetAllDoors)
	{
		P_GET_TARRAY_REF(ADoor*,Z_Param_Out_OutDoors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllDoors(Z_Param_Out_OutDoors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URoom::execGetDoor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DoorIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADoor**)Z_Param__Result=P_THIS->GetDoor(Z_Param_DoorIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URoom::execGetRandomStream)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRandomStream*)Z_Param__Result=P_THIS->GetRandomStream();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URoom::execHasCustomData_BP)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<URoomCustomData> ,Z_Param_Out_DataType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasCustomData_BP(Z_Param_Out_DataType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URoom::execGetCustomData_BP)
	{
		P_GET_OBJECT(UClass,Z_Param_DataType);
		P_GET_OBJECT_REF(URoomCustomData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomData_BP(Z_Param_DataType,Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URoom::execLock)
	{
		P_GET_UBOOL(Z_Param_lock);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Lock(Z_Param_lock);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URoom::execIsLocked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URoom::execIsVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVisible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URoom::execIsPlayerInside)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayerInside();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URoom::execGetRoomData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const URoomData**)Z_Param__Result=P_THIS->GetRoomData();
		P_NATIVE_END;
	}
	void URoom::StaticRegisterNativesURoom()
	{
		UClass* Class = URoom::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllDoors", &URoom::execGetAllDoors },
			{ "GetCustomData_BP", &URoom::execGetCustomData_BP },
			{ "GetDoor", &URoom::execGetDoor },
			{ "GetRandomStream", &URoom::execGetRandomStream },
			{ "GetRoomData", &URoom::execGetRoomData },
			{ "HasCustomData_BP", &URoom::execHasCustomData_BP },
			{ "IsLocked", &URoom::execIsLocked },
			{ "IsPlayerInside", &URoom::execIsPlayerInside },
			{ "IsVisible", &URoom::execIsVisible },
			{ "Lock", &URoom::execLock },
			{ "OnInstanceLoaded", &URoom::execOnInstanceLoaded },
			{ "OnRep_IsLocked", &URoom::execOnRep_IsLocked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URoom_GetAllDoors_Statics
	{
		struct Room_eventGetAllDoors_Parms
		{
			TArray<ADoor*> OutDoors;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutDoors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutDoors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoom_GetAllDoors_Statics::NewProp_OutDoors_Inner = { "OutDoors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ADoor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URoom_GetAllDoors_Statics::NewProp_OutDoors = { "OutDoors", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Room_eventGetAllDoors_Parms, OutDoors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoom_GetAllDoors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_GetAllDoors_Statics::NewProp_OutDoors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_GetAllDoors_Statics::NewProp_OutDoors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URoom_GetAllDoors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Room" },
		{ "ModuleRelativePath", "Public/Room.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoom_GetAllDoors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoom, nullptr, "GetAllDoors", nullptr, nullptr, Z_Construct_UFunction_URoom_GetAllDoors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetAllDoors_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoom_GetAllDoors_Statics::Room_eventGetAllDoors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetAllDoors_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoom_GetAllDoors_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetAllDoors_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URoom_GetAllDoors_Statics::Room_eventGetAllDoors_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URoom_GetAllDoors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoom_GetAllDoors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URoom_GetCustomData_BP_Statics
	{
		struct Room_eventGetCustomData_BP_Parms
		{
			TSubclassOf<URoomCustomData>  DataType;
			URoomCustomData* Data;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_DataType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URoom_GetCustomData_BP_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Room_eventGetCustomData_BP_Parms, DataType), Z_Construct_UClass_UClass, Z_Construct_UClass_URoomCustomData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoom_GetCustomData_BP_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Room_eventGetCustomData_BP_Parms, Data), Z_Construct_UClass_URoomCustomData_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URoom_GetCustomData_BP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Room_eventGetCustomData_BP_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URoom_GetCustomData_BP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Room_eventGetCustomData_BP_Parms), &Z_Construct_UFunction_URoom_GetCustomData_BP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoom_GetCustomData_BP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_GetCustomData_BP_Statics::NewProp_DataType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_GetCustomData_BP_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_GetCustomData_BP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URoom_GetCustomData_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Room" },
		{ "DeterminesOutputType", "DataType" },
		{ "DisplayName", "Get Custom Data" },
		{ "DynamicOutputParam", "Data" },
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/Room.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoom_GetCustomData_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoom, nullptr, "GetCustomData_BP", nullptr, nullptr, Z_Construct_UFunction_URoom_GetCustomData_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetCustomData_BP_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoom_GetCustomData_BP_Statics::Room_eventGetCustomData_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetCustomData_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoom_GetCustomData_BP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetCustomData_BP_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URoom_GetCustomData_BP_Statics::Room_eventGetCustomData_BP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URoom_GetCustomData_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoom_GetCustomData_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URoom_GetDoor_Statics
	{
		struct Room_eventGetDoor_Parms
		{
			int32 DoorIndex;
			ADoor* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_DoorIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URoom_GetDoor_Statics::NewProp_DoorIndex = { "DoorIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Room_eventGetDoor_Parms, DoorIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoom_GetDoor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Room_eventGetDoor_Parms, ReturnValue), Z_Construct_UClass_ADoor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoom_GetDoor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_GetDoor_Statics::NewProp_DoorIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_GetDoor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URoom_GetDoor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Room" },
		{ "ModuleRelativePath", "Public/Room.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoom_GetDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoom, nullptr, "GetDoor", nullptr, nullptr, Z_Construct_UFunction_URoom_GetDoor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetDoor_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoom_GetDoor_Statics::Room_eventGetDoor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoom_GetDoor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetDoor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URoom_GetDoor_Statics::Room_eventGetDoor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URoom_GetDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoom_GetDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URoom_GetRandomStream_Statics
	{
		struct Room_eventGetRandomStream_Parms
		{
			FRandomStream ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URoom_GetRandomStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Room_eventGetRandomStream_Parms, ReturnValue), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoom_GetRandomStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_GetRandomStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URoom_GetRandomStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "Room" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the RandomStream from the Dungeon Generator\n" },
#endif
		{ "ModuleRelativePath", "Public/Room.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the RandomStream from the Dungeon Generator" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoom_GetRandomStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoom, nullptr, "GetRandomStream", nullptr, nullptr, Z_Construct_UFunction_URoom_GetRandomStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetRandomStream_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoom_GetRandomStream_Statics::Room_eventGetRandomStream_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetRandomStream_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoom_GetRandomStream_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetRandomStream_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URoom_GetRandomStream_Statics::Room_eventGetRandomStream_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URoom_GetRandomStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoom_GetRandomStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URoom_GetRoomData_Statics
	{
		struct Room_eventGetRoomData_Parms
		{
			const URoomData* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URoom_GetRoomData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoom_GetRoomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Room_eventGetRoomData_Parms, ReturnValue), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetRoomData_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_URoom_GetRoomData_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoom_GetRoomData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_GetRoomData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URoom_GetRoomData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Room" },
		{ "ModuleRelativePath", "Public/Room.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoom_GetRoomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoom, nullptr, "GetRoomData", nullptr, nullptr, Z_Construct_UFunction_URoom_GetRoomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetRoomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoom_GetRoomData_Statics::Room_eventGetRoomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetRoomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoom_GetRoomData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetRoomData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URoom_GetRoomData_Statics::Room_eventGetRoomData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URoom_GetRoomData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoom_GetRoomData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URoom_HasCustomData_BP_Statics
	{
		struct Room_eventHasCustomData_BP_Parms
		{
			const TSubclassOf<URoomCustomData>  DataType;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DataType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URoom_HasCustomData_BP_Statics::NewProp_DataType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URoom_HasCustomData_BP_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Room_eventHasCustomData_BP_Parms, DataType), Z_Construct_UClass_UClass, Z_Construct_UClass_URoomCustomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_HasCustomData_BP_Statics::NewProp_DataType_MetaData), Z_Construct_UFunction_URoom_HasCustomData_BP_Statics::NewProp_DataType_MetaData) };
	void Z_Construct_UFunction_URoom_HasCustomData_BP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Room_eventHasCustomData_BP_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URoom_HasCustomData_BP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Room_eventHasCustomData_BP_Parms), &Z_Construct_UFunction_URoom_HasCustomData_BP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoom_HasCustomData_BP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_HasCustomData_BP_Statics::NewProp_DataType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_HasCustomData_BP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URoom_HasCustomData_BP_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "DataType" },
		{ "Category", "Room" },
		{ "DisplayName", "Has Custom Data" },
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/Room.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoom_HasCustomData_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoom, nullptr, "HasCustomData_BP", nullptr, nullptr, Z_Construct_UFunction_URoom_HasCustomData_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_HasCustomData_BP_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoom_HasCustomData_BP_Statics::Room_eventHasCustomData_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_HasCustomData_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoom_HasCustomData_BP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_HasCustomData_BP_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URoom_HasCustomData_BP_Statics::Room_eventHasCustomData_BP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URoom_HasCustomData_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoom_HasCustomData_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URoom_IsLocked_Statics
	{
		struct Room_eventIsLocked_Parms
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
	void Z_Construct_UFunction_URoom_IsLocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Room_eventIsLocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URoom_IsLocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Room_eventIsLocked_Parms), &Z_Construct_UFunction_URoom_IsLocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoom_IsLocked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_IsLocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URoom_IsLocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Room" },
		{ "CompactNodeTitle", "Is Locked" },
		{ "ModuleRelativePath", "Public/Room.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoom_IsLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoom, nullptr, "IsLocked", nullptr, nullptr, Z_Construct_UFunction_URoom_IsLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_IsLocked_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoom_IsLocked_Statics::Room_eventIsLocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_IsLocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoom_IsLocked_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_IsLocked_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URoom_IsLocked_Statics::Room_eventIsLocked_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URoom_IsLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoom_IsLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URoom_IsPlayerInside_Statics
	{
		struct Room_eventIsPlayerInside_Parms
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
	void Z_Construct_UFunction_URoom_IsPlayerInside_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Room_eventIsPlayerInside_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URoom_IsPlayerInside_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Room_eventIsPlayerInside_Parms), &Z_Construct_UFunction_URoom_IsPlayerInside_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoom_IsPlayerInside_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_IsPlayerInside_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URoom_IsPlayerInside_Statics::Function_MetaDataParams[] = {
		{ "Category", "Room" },
		{ "ModuleRelativePath", "Public/Room.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoom_IsPlayerInside_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoom, nullptr, "IsPlayerInside", nullptr, nullptr, Z_Construct_UFunction_URoom_IsPlayerInside_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_IsPlayerInside_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoom_IsPlayerInside_Statics::Room_eventIsPlayerInside_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_IsPlayerInside_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoom_IsPlayerInside_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_IsPlayerInside_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URoom_IsPlayerInside_Statics::Room_eventIsPlayerInside_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URoom_IsPlayerInside()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoom_IsPlayerInside_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URoom_IsVisible_Statics
	{
		struct Room_eventIsVisible_Parms
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
	void Z_Construct_UFunction_URoom_IsVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Room_eventIsVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URoom_IsVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Room_eventIsVisible_Parms), &Z_Construct_UFunction_URoom_IsVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoom_IsVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_IsVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URoom_IsVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Room" },
		{ "CompactNodeTitle", "Is Visible" },
		{ "ModuleRelativePath", "Public/Room.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoom_IsVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoom, nullptr, "IsVisible", nullptr, nullptr, Z_Construct_UFunction_URoom_IsVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_IsVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoom_IsVisible_Statics::Room_eventIsVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_IsVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoom_IsVisible_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_IsVisible_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URoom_IsVisible_Statics::Room_eventIsVisible_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URoom_IsVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoom_IsVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URoom_Lock_Statics
	{
		struct Room_eventLock_Parms
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
	void Z_Construct_UFunction_URoom_Lock_Statics::NewProp_lock_SetBit(void* Obj)
	{
		((Room_eventLock_Parms*)Obj)->lock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URoom_Lock_Statics::NewProp_lock = { "lock", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Room_eventLock_Parms), &Z_Construct_UFunction_URoom_Lock_Statics::NewProp_lock_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoom_Lock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_Lock_Statics::NewProp_lock,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URoom_Lock_Statics::Function_MetaDataParams[] = {
		{ "Category", "Room" },
		{ "ModuleRelativePath", "Public/Room.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoom_Lock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoom, nullptr, "Lock", nullptr, nullptr, Z_Construct_UFunction_URoom_Lock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_Lock_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoom_Lock_Statics::Room_eventLock_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_Lock_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoom_Lock_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_Lock_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URoom_Lock_Statics::Room_eventLock_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URoom_Lock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoom_Lock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URoom_OnInstanceLoaded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URoom_OnInstanceLoaded_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// needed macro for binding to delegate\n" },
#endif
		{ "ModuleRelativePath", "Public/Room.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "needed macro for binding to delegate" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoom_OnInstanceLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoom, nullptr, "OnInstanceLoaded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_OnInstanceLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoom_OnInstanceLoaded_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URoom_OnInstanceLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoom_OnInstanceLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URoom_OnRep_IsLocked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URoom_OnRep_IsLocked_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Needed macro for replication to work\n" },
#endif
		{ "ModuleRelativePath", "Public/Room.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Needed macro for replication to work" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoom_OnRep_IsLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoom, nullptr, "OnRep_IsLocked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_OnRep_IsLocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoom_OnRep_IsLocked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URoom_OnRep_IsLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoom_OnRep_IsLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URoom);
	UClass* Z_Construct_UClass_URoom_NoRegister()
	{
		return URoom::StaticClass();
	}
	struct Z_Construct_UClass_URoom_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Connections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Connections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Connections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratorOwner_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_GeneratorOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLocked_MetaData[];
#endif
		static void NewProp_bIsLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLocked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URoom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReplicableObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoom_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_URoom_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URoom_GetAllDoors, "GetAllDoors" }, // 634065313
		{ &Z_Construct_UFunction_URoom_GetCustomData_BP, "GetCustomData_BP" }, // 493724200
		{ &Z_Construct_UFunction_URoom_GetDoor, "GetDoor" }, // 13075094
		{ &Z_Construct_UFunction_URoom_GetRandomStream, "GetRandomStream" }, // 331375949
		{ &Z_Construct_UFunction_URoom_GetRoomData, "GetRoomData" }, // 1207412705
		{ &Z_Construct_UFunction_URoom_HasCustomData_BP, "HasCustomData_BP" }, // 1305070455
		{ &Z_Construct_UFunction_URoom_IsLocked, "IsLocked" }, // 3793278646
		{ &Z_Construct_UFunction_URoom_IsPlayerInside, "IsPlayerInside" }, // 2026032736
		{ &Z_Construct_UFunction_URoom_IsVisible, "IsVisible" }, // 2189679778
		{ &Z_Construct_UFunction_URoom_Lock, "Lock" }, // 2771864165
		{ &Z_Construct_UFunction_URoom_OnInstanceLoaded, "OnInstanceLoaded" }, // 595291373
		{ &Z_Construct_UFunction_URoom_OnRep_IsLocked, "OnRep_IsLocked" }, // 640700151
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoom_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoom_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Room.h" },
		{ "ModuleRelativePath", "Public/Room.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoom_Statics::NewProp_Instance_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TODO: Make them private\n" },
#endif
		{ "ModuleRelativePath", "Public/Room.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TODO: Make them private" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URoom_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoom, Instance), Z_Construct_UClass_ULevelStreamingDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URoom_Statics::NewProp_Instance_MetaData), Z_Construct_UClass_URoom_Statics::NewProp_Instance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoom_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Public/Room.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URoom_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoom, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URoom_Statics::NewProp_Position_MetaData), Z_Construct_UClass_URoom_Statics::NewProp_Position_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URoom_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoom_Statics::NewProp_Direction_MetaData[] = {
		{ "ModuleRelativePath", "Public/Room.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URoom_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoom, Direction), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URoom_Statics::NewProp_Direction_MetaData), Z_Construct_UClass_URoom_Statics::NewProp_Direction_MetaData) }; // 2850159906
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoom_Statics::NewProp_RoomData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Room.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URoom_Statics::NewProp_RoomData = { "RoomData", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoom, RoomData), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URoom_Statics::NewProp_RoomData_MetaData), Z_Construct_UClass_URoom_Statics::NewProp_RoomData_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URoom_Statics::NewProp_CustomData_Inner = { "CustomData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCustomDataPair, METADATA_PARAMS(0, nullptr) }; // 2845733292
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoom_Statics::NewProp_CustomData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Room.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URoom_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0040000000002020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoom, CustomData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URoom_Statics::NewProp_CustomData_MetaData), Z_Construct_UClass_URoom_Statics::NewProp_CustomData_MetaData) }; // 2845733292
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URoom_Statics::NewProp_Connections_Inner = { "Connections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRoomConnection, METADATA_PARAMS(0, nullptr) }; // 1987028374
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoom_Statics::NewProp_Connections_MetaData[] = {
		{ "ModuleRelativePath", "Public/Room.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URoom_Statics::NewProp_Connections = { "Connections", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoom, Connections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URoom_Statics::NewProp_Connections_MetaData), Z_Construct_UClass_URoom_Statics::NewProp_Connections_MetaData) }; // 1987028374
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoom_Statics::NewProp_GeneratorOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Room.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_URoom_Statics::NewProp_GeneratorOwner = { "GeneratorOwner", nullptr, (EPropertyFlags)0x0044000000000020, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoom, GeneratorOwner), Z_Construct_UClass_ADungeonGenerator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URoom_Statics::NewProp_GeneratorOwner_MetaData), Z_Construct_UClass_URoom_Statics::NewProp_GeneratorOwner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoom_Statics::NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Public/Room.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_URoom_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoom, Id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URoom_Statics::NewProp_Id_MetaData), Z_Construct_UClass_URoom_Statics::NewProp_Id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoom_Statics::NewProp_bIsLocked_MetaData[] = {
		{ "ModuleRelativePath", "Public/Room.h" },
	};
#endif
	void Z_Construct_UClass_URoom_Statics::NewProp_bIsLocked_SetBit(void* Obj)
	{
		((URoom*)Obj)->bIsLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URoom_Statics::NewProp_bIsLocked = { "bIsLocked", "OnRep_IsLocked", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URoom), &Z_Construct_UClass_URoom_Statics::NewProp_bIsLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URoom_Statics::NewProp_bIsLocked_MetaData), Z_Construct_UClass_URoom_Statics::NewProp_bIsLocked_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoom_Statics::NewProp_Instance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoom_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoom_Statics::NewProp_Direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoom_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoom_Statics::NewProp_RoomData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoom_Statics::NewProp_CustomData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoom_Statics::NewProp_CustomData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoom_Statics::NewProp_Connections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoom_Statics::NewProp_Connections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoom_Statics::NewProp_GeneratorOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoom_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoom_Statics::NewProp_bIsLocked,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URoom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoom>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URoom_Statics::ClassParams = {
		&URoom::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URoom_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URoom_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URoom_Statics::Class_MetaDataParams), Z_Construct_UClass_URoom_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoom_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URoom()
	{
		if (!Z_Registration_Info_UClass_URoom.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoom.OuterSingleton, Z_Construct_UClass_URoom_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URoom.OuterSingleton;
	}
	template<> PROCEDURALDUNGEON_API UClass* StaticClass<URoom>()
	{
		return URoom::StaticClass();
	}

	void URoom::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Position(TEXT("Position"));
		static const FName Name_Direction(TEXT("Direction"));
		static const FName Name_RoomData(TEXT("RoomData"));
		static const FName Name_CustomData(TEXT("CustomData"));
		static const FName Name_Connections(TEXT("Connections"));
		static const FName Name_GeneratorOwner(TEXT("GeneratorOwner"));
		static const FName Name_Id(TEXT("Id"));
		static const FName Name_bIsLocked(TEXT("bIsLocked"));

		const bool bIsValid = true
			&& Name_Position == ClassReps[(int32)ENetFields_Private::Position].Property->GetFName()
			&& Name_Direction == ClassReps[(int32)ENetFields_Private::Direction].Property->GetFName()
			&& Name_RoomData == ClassReps[(int32)ENetFields_Private::RoomData].Property->GetFName()
			&& Name_CustomData == ClassReps[(int32)ENetFields_Private::CustomData].Property->GetFName()
			&& Name_Connections == ClassReps[(int32)ENetFields_Private::Connections].Property->GetFName()
			&& Name_GeneratorOwner == ClassReps[(int32)ENetFields_Private::GeneratorOwner].Property->GetFName()
			&& Name_Id == ClassReps[(int32)ENetFields_Private::Id].Property->GetFName()
			&& Name_bIsLocked == ClassReps[(int32)ENetFields_Private::bIsLocked].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in URoom"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URoom);
	URoom::~URoom() {}
	struct Z_CompiledInDeferFile_FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_Statics::ScriptStructInfo[] = {
		{ FRoomConnection::StaticStruct, Z_Construct_UScriptStruct_FRoomConnection_Statics::NewStructOps, TEXT("RoomConnection"), &Z_Registration_Info_UScriptStruct_RoomConnection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoomConnection), 1987028374U) },
		{ FCustomDataPair::StaticStruct, Z_Construct_UScriptStruct_FCustomDataPair_Statics::NewStructOps, TEXT("CustomDataPair"), &Z_Registration_Info_UScriptStruct_CustomDataPair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomDataPair), 2845733292U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URoom, URoom::StaticClass, TEXT("URoom"), &Z_Registration_Info_UClass_URoom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoom), 2289808847U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_1497759393(TEXT("/Script/ProceduralDungeon"),
		Z_CompiledInDeferFile_FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
