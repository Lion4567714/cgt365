// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/DungeonGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonGraph() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonGraph();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonGraph_NoRegister();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UReplicableObject();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoom_NoRegister();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomCustomData_NoRegister();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomData_NoRegister();
	PROCEDURALDUNGEON_API UEnum* Z_Construct_UEnum_ProceduralDungeon_EDungeonGraphState();
	UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDungeonGraphState;
	static UEnum* EDungeonGraphState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDungeonGraphState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDungeonGraphState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProceduralDungeon_EDungeonGraphState, (UObject*)Z_Construct_UPackage__Script_ProceduralDungeon(), TEXT("EDungeonGraphState"));
		}
		return Z_Registration_Info_UEnum_EDungeonGraphState.OuterSingleton;
	}
	template<> PROCEDURALDUNGEON_API UEnum* StaticEnum<EDungeonGraphState>()
	{
		return EDungeonGraphState_StaticEnum();
	}
	struct Z_Construct_UEnum_ProceduralDungeon_EDungeonGraphState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ProceduralDungeon_EDungeonGraphState_Statics::Enumerators[] = {
		{ "EDungeonGraphState::None", (int64)EDungeonGraphState::None },
		{ "EDungeonGraphState::RoomListChanged", (int64)EDungeonGraphState::RoomListChanged },
		{ "EDungeonGraphState::RequestGeneration", (int64)EDungeonGraphState::RequestGeneration },
		{ "EDungeonGraphState::NbState", (int64)EDungeonGraphState::NbState },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ProceduralDungeon_EDungeonGraphState_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
		{ "NbState.Name", "EDungeonGraphState::NbState" },
		{ "None.Name", "EDungeonGraphState::None" },
		{ "RequestGeneration.Name", "EDungeonGraphState::RequestGeneration" },
		{ "RoomListChanged.Name", "EDungeonGraphState::RoomListChanged" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProceduralDungeon_EDungeonGraphState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ProceduralDungeon,
		nullptr,
		"EDungeonGraphState",
		"EDungeonGraphState",
		Z_Construct_UEnum_ProceduralDungeon_EDungeonGraphState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralDungeon_EDungeonGraphState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralDungeon_EDungeonGraphState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProceduralDungeon_EDungeonGraphState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ProceduralDungeon_EDungeonGraphState()
	{
		if (!Z_Registration_Info_UEnum_EDungeonGraphState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDungeonGraphState.InnerSingleton, Z_Construct_UEnum_ProceduralDungeon_EDungeonGraphState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDungeonGraphState.InnerSingleton;
	}
	DEFINE_FUNCTION(UDungeonGraph::execOnRep_Rooms)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Rooms();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonGraph::execHasValidPath)
	{
		P_GET_OBJECT(URoom,Z_Param_From);
		P_GET_OBJECT(URoom,Z_Param_To);
		P_GET_UBOOL(Z_Param_IgnoreLockedRooms);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasValidPath(Z_Param_From,Z_Param_To,Z_Param_IgnoreLockedRooms);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonGraph::execCountTotalRoomType)
	{
		P_GET_TARRAY_REF(TSubclassOf<URoomData> ,Z_Param_Out_RoomTypeList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CountTotalRoomType(Z_Param_Out_RoomTypeList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonGraph::execCountRoomType)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<URoomData> ,Z_Param_Out_RoomType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CountRoomType(Z_Param_Out_RoomType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonGraph::execHasAlreadyOneRoomTypeFrom)
	{
		P_GET_TARRAY_REF(TSubclassOf<URoomData> ,Z_Param_Out_RoomTypeList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAlreadyOneRoomTypeFrom(Z_Param_Out_RoomTypeList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonGraph::execHasAlreadyRoomType)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<URoomData> ,Z_Param_Out_RoomType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAlreadyRoomType(Z_Param_Out_RoomType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonGraph::execCountTotalRoomData)
	{
		P_GET_TARRAY_REF(URoomData*,Z_Param_Out_RoomDataList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CountTotalRoomData(Z_Param_Out_RoomDataList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonGraph::execCountRoomData)
	{
		P_GET_OBJECT(URoomData,Z_Param_RoomData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CountRoomData(Z_Param_RoomData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonGraph::execHasAlreadyOneRoomDataFrom)
	{
		P_GET_TARRAY_REF(URoomData*,Z_Param_Out_RoomDataList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAlreadyOneRoomDataFrom(Z_Param_Out_RoomDataList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonGraph::execHasAlreadyRoomData)
	{
		P_GET_OBJECT(URoomData,Z_Param_RoomData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAlreadyRoomData(Z_Param_RoomData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonGraph::execCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Count();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonGraph::execGetRandomRoom)
	{
		P_GET_TARRAY_REF(URoom*,Z_Param_Out_RoomList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URoom**)Z_Param__Result=P_THIS->GetRandomRoom(Z_Param_Out_RoomList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonGraph::execGetAllRoomsWithAnyCustomData)
	{
		P_GET_TARRAY_REF(TSubclassOf<URoomCustomData> ,Z_Param_Out_CustomData);
		P_GET_TARRAY_REF(URoom*,Z_Param_Out_Rooms);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllRoomsWithAnyCustomData(Z_Param_Out_CustomData,Z_Param_Out_Rooms);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonGraph::execGetAllRoomsWithAllCustomData)
	{
		P_GET_TARRAY_REF(TSubclassOf<URoomCustomData> ,Z_Param_Out_CustomData);
		P_GET_TARRAY_REF(URoom*,Z_Param_Out_Rooms);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllRoomsWithAllCustomData(Z_Param_Out_CustomData,Z_Param_Out_Rooms);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonGraph::execGetAllRoomsWithCustomData)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<URoomCustomData> ,Z_Param_Out_CustomData);
		P_GET_TARRAY_REF(URoom*,Z_Param_Out_Rooms);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllRoomsWithCustomData(Z_Param_Out_CustomData,Z_Param_Out_Rooms);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonGraph::execGetFirstRoomFromData)
	{
		P_GET_OBJECT(URoomData,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const URoom**)Z_Param__Result=P_THIS->GetFirstRoomFromData(Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonGraph::execGetAllRoomsFromDataList)
	{
		P_GET_TARRAY_REF(URoomData*,Z_Param_Out_Data);
		P_GET_TARRAY_REF(URoom*,Z_Param_Out_Rooms);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllRoomsFromDataList(Z_Param_Out_Data,Z_Param_Out_Rooms);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonGraph::execGetAllRoomsFromData)
	{
		P_GET_OBJECT(URoomData,Z_Param_Data);
		P_GET_TARRAY_REF(URoom*,Z_Param_Out_Rooms);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllRoomsFromData(Z_Param_Data,Z_Param_Out_Rooms);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonGraph::execGetAllRooms)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<URoom*>*)Z_Param__Result=P_THIS->GetAllRooms();
		P_NATIVE_END;
	}
	void UDungeonGraph::StaticRegisterNativesUDungeonGraph()
	{
		UClass* Class = UDungeonGraph::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Count", &UDungeonGraph::execCount },
			{ "CountRoomData", &UDungeonGraph::execCountRoomData },
			{ "CountRoomType", &UDungeonGraph::execCountRoomType },
			{ "CountTotalRoomData", &UDungeonGraph::execCountTotalRoomData },
			{ "CountTotalRoomType", &UDungeonGraph::execCountTotalRoomType },
			{ "GetAllRooms", &UDungeonGraph::execGetAllRooms },
			{ "GetAllRoomsFromData", &UDungeonGraph::execGetAllRoomsFromData },
			{ "GetAllRoomsFromDataList", &UDungeonGraph::execGetAllRoomsFromDataList },
			{ "GetAllRoomsWithAllCustomData", &UDungeonGraph::execGetAllRoomsWithAllCustomData },
			{ "GetAllRoomsWithAnyCustomData", &UDungeonGraph::execGetAllRoomsWithAnyCustomData },
			{ "GetAllRoomsWithCustomData", &UDungeonGraph::execGetAllRoomsWithCustomData },
			{ "GetFirstRoomFromData", &UDungeonGraph::execGetFirstRoomFromData },
			{ "GetRandomRoom", &UDungeonGraph::execGetRandomRoom },
			{ "HasAlreadyOneRoomDataFrom", &UDungeonGraph::execHasAlreadyOneRoomDataFrom },
			{ "HasAlreadyOneRoomTypeFrom", &UDungeonGraph::execHasAlreadyOneRoomTypeFrom },
			{ "HasAlreadyRoomData", &UDungeonGraph::execHasAlreadyRoomData },
			{ "HasAlreadyRoomType", &UDungeonGraph::execHasAlreadyRoomType },
			{ "HasValidPath", &UDungeonGraph::execHasValidPath },
			{ "OnRep_Rooms", &UDungeonGraph::execOnRep_Rooms },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDungeonGraph_Count_Statics
	{
		struct DungeonGraph_eventCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDungeonGraph_Count_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_Count_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_Count_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonGraph_Count_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the total number of room\n" },
#endif
		{ "CompactNodeTitle", "Count" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the total number of room" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_Count_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "Count", nullptr, nullptr, Z_Construct_UFunction_UDungeonGraph_Count_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_Count_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_Count_Statics::DungeonGraph_eventCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_Count_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_Count_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_Count_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_Count_Statics::DungeonGraph_eventCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonGraph_Count()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_Count_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics
	{
		struct DungeonGraph_eventCountRoomData_Parms
		{
			const URoomData* RoomData;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::NewProp_RoomData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::NewProp_RoomData = { "RoomData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventCountRoomData_Parms, RoomData), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::NewProp_RoomData_MetaData), Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::NewProp_RoomData_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventCountRoomData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::NewProp_RoomData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the number of a specific RoomData in the dungeon\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the number of a specific RoomData in the dungeon" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "CountRoomData", nullptr, nullptr, Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::DungeonGraph_eventCountRoomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::DungeonGraph_eventCountRoomData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonGraph_CountRoomData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics
	{
		struct DungeonGraph_eventCountRoomType_Parms
		{
			const TSubclassOf<URoomData>  RoomType;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RoomType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::NewProp_RoomType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::NewProp_RoomType = { "RoomType", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventCountRoomType_Parms, RoomType), Z_Construct_UClass_UClass, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::NewProp_RoomType_MetaData), Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::NewProp_RoomType_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventCountRoomType_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::NewProp_RoomType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "RoomType" },
		{ "Category", "Dungeon Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the number of a specific RoomData type in the dungeon\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the number of a specific RoomData type in the dungeon" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "CountRoomType", nullptr, nullptr, Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::DungeonGraph_eventCountRoomType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::DungeonGraph_eventCountRoomType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonGraph_CountRoomType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics
	{
		struct DungeonGraph_eventCountTotalRoomData_Parms
		{
			TArray<URoomData*> RoomDataList;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomDataList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomDataList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomDataList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::NewProp_RoomDataList_Inner = { "RoomDataList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::NewProp_RoomDataList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::NewProp_RoomDataList = { "RoomDataList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventCountTotalRoomData_Parms, RoomDataList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::NewProp_RoomDataList_MetaData), Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::NewProp_RoomDataList_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventCountTotalRoomData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::NewProp_RoomDataList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::NewProp_RoomDataList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the total number of RoomData in the dungeon from the list provided\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the total number of RoomData in the dungeon from the list provided" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "CountTotalRoomData", nullptr, nullptr, Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::DungeonGraph_eventCountTotalRoomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::DungeonGraph_eventCountTotalRoomData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics
	{
		struct DungeonGraph_eventCountTotalRoomType_Parms
		{
			TArray<TSubclassOf<URoomData> > RoomTypeList;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_RoomTypeList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomTypeList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomTypeList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::NewProp_RoomTypeList_Inner = { "RoomTypeList", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::NewProp_RoomTypeList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::NewProp_RoomTypeList = { "RoomTypeList", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventCountTotalRoomType_Parms, RoomTypeList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::NewProp_RoomTypeList_MetaData), Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::NewProp_RoomTypeList_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventCountTotalRoomType_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::NewProp_RoomTypeList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::NewProp_RoomTypeList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the total number of RoomData type in the dungeon from the list provided\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the total number of RoomData type in the dungeon from the list provided" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "CountTotalRoomType", nullptr, nullptr, Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::DungeonGraph_eventCountTotalRoomType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::DungeonGraph_eventCountTotalRoomType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics
	{
		struct DungeonGraph_eventGetAllRooms_Parms
		{
			TArray<URoom*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetAllRooms_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns all rooms\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns all rooms" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "GetAllRooms", nullptr, nullptr, Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::DungeonGraph_eventGetAllRooms_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::DungeonGraph_eventGetAllRooms_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonGraph_GetAllRooms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics
	{
		struct DungeonGraph_eventGetAllRoomsFromData_Parms
		{
			const URoomData* Data;
			TArray<URoom*> Rooms;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Data;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Rooms_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Rooms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetAllRoomsFromData_Parms, Data), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::NewProp_Data_MetaData), Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::NewProp_Data_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::NewProp_Rooms_Inner = { "Rooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::NewProp_Rooms = { "Rooms", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetAllRoomsFromData_Parms, Rooms), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::NewProp_Rooms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::NewProp_Rooms,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns all room instances of the provided room data\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns all room instances of the provided room data" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "GetAllRoomsFromData", nullptr, nullptr, Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::DungeonGraph_eventGetAllRoomsFromData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::DungeonGraph_eventGetAllRoomsFromData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics
	{
		struct DungeonGraph_eventGetAllRoomsFromDataList_Parms
		{
			TArray<URoomData*> Data;
			TArray<URoom*> Rooms;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Rooms_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Rooms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetAllRoomsFromDataList_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::NewProp_Data_MetaData), Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::NewProp_Data_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::NewProp_Rooms_Inner = { "Rooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::NewProp_Rooms = { "Rooms", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetAllRoomsFromDataList_Parms, Rooms), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::NewProp_Rooms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::NewProp_Rooms,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns all room instances of any of the provided room data\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns all room instances of any of the provided room data" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "GetAllRoomsFromDataList", nullptr, nullptr, Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::DungeonGraph_eventGetAllRoomsFromDataList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::DungeonGraph_eventGetAllRoomsFromDataList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics
	{
		struct DungeonGraph_eventGetAllRoomsWithAllCustomData_Parms
		{
			TArray<TSubclassOf<URoomCustomData> > CustomData;
			TArray<URoom*> Rooms;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_CustomData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Rooms_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Rooms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::NewProp_CustomData_Inner = { "CustomData", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_URoomCustomData_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::NewProp_CustomData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetAllRoomsWithAllCustomData_Parms, CustomData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::NewProp_CustomData_MetaData), Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::NewProp_CustomData_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::NewProp_Rooms_Inner = { "Rooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::NewProp_Rooms = { "Rooms", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetAllRoomsWithAllCustomData_Parms, Rooms), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::NewProp_CustomData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::NewProp_CustomData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::NewProp_Rooms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::NewProp_Rooms,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns all room instances having ALL the provided custom data\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns all room instances having ALL the provided custom data" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "GetAllRoomsWithAllCustomData", nullptr, nullptr, Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::DungeonGraph_eventGetAllRoomsWithAllCustomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::DungeonGraph_eventGetAllRoomsWithAllCustomData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics
	{
		struct DungeonGraph_eventGetAllRoomsWithAnyCustomData_Parms
		{
			TArray<TSubclassOf<URoomCustomData> > CustomData;
			TArray<URoom*> Rooms;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_CustomData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Rooms_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Rooms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::NewProp_CustomData_Inner = { "CustomData", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_URoomCustomData_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::NewProp_CustomData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetAllRoomsWithAnyCustomData_Parms, CustomData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::NewProp_CustomData_MetaData), Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::NewProp_CustomData_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::NewProp_Rooms_Inner = { "Rooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::NewProp_Rooms = { "Rooms", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetAllRoomsWithAnyCustomData_Parms, Rooms), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::NewProp_CustomData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::NewProp_CustomData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::NewProp_Rooms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::NewProp_Rooms,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns all room instances having at least one of the provided custom data\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns all room instances having at least one of the provided custom data" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "GetAllRoomsWithAnyCustomData", nullptr, nullptr, Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::DungeonGraph_eventGetAllRoomsWithAnyCustomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::DungeonGraph_eventGetAllRoomsWithAnyCustomData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics
	{
		struct DungeonGraph_eventGetAllRoomsWithCustomData_Parms
		{
			const TSubclassOf<URoomCustomData>  CustomData;
			TArray<URoom*> Rooms;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomData_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CustomData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Rooms_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Rooms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::NewProp_CustomData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetAllRoomsWithCustomData_Parms, CustomData), Z_Construct_UClass_UClass, Z_Construct_UClass_URoomCustomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::NewProp_CustomData_MetaData), Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::NewProp_CustomData_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::NewProp_Rooms_Inner = { "Rooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::NewProp_Rooms = { "Rooms", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetAllRoomsWithCustomData_Parms, Rooms), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::NewProp_CustomData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::NewProp_Rooms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::NewProp_Rooms,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "CustomData" },
		{ "Category", "Dungeon Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns all room instances having the provided custom data\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns all room instances having the provided custom data" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "GetAllRoomsWithCustomData", nullptr, nullptr, Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::DungeonGraph_eventGetAllRoomsWithCustomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::DungeonGraph_eventGetAllRoomsWithCustomData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics
	{
		struct DungeonGraph_eventGetFirstRoomFromData_Parms
		{
			const URoomData* Data;
			const URoom* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetFirstRoomFromData_Parms, Data), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::NewProp_Data_MetaData), Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::NewProp_Data_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetFirstRoomFromData_Parms, ReturnValue), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the first found room instance of the provided room data\n// (no defined order, so could be any room of the dungeon)\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the first found room instance of the provided room data\n(no defined order, so could be any room of the dungeon)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "GetFirstRoomFromData", nullptr, nullptr, Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::DungeonGraph_eventGetFirstRoomFromData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::DungeonGraph_eventGetFirstRoomFromData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics
	{
		struct DungeonGraph_eventGetRandomRoom_Parms
		{
			TArray<URoom*> RoomList;
			URoom* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomList;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::NewProp_RoomList_Inner = { "RoomList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::NewProp_RoomList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::NewProp_RoomList = { "RoomList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetRandomRoom_Parms, RoomList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::NewProp_RoomList_MetaData), Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::NewProp_RoomList_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetRandomRoom_Parms, ReturnValue), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::NewProp_RoomList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::NewProp_RoomList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns a random room from an array of room\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a random room from an array of room" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "GetRandomRoom", nullptr, nullptr, Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::DungeonGraph_eventGetRandomRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::DungeonGraph_eventGetRandomRoom_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonGraph_GetRandomRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics
	{
		struct DungeonGraph_eventHasAlreadyOneRoomDataFrom_Parms
		{
			TArray<URoomData*> RoomDataList;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomDataList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomDataList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomDataList;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::NewProp_RoomDataList_Inner = { "RoomDataList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::NewProp_RoomDataList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::NewProp_RoomDataList = { "RoomDataList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventHasAlreadyOneRoomDataFrom_Parms, RoomDataList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::NewProp_RoomDataList_MetaData), Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::NewProp_RoomDataList_MetaData) };
	void Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DungeonGraph_eventHasAlreadyOneRoomDataFrom_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGraph_eventHasAlreadyOneRoomDataFrom_Parms), &Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::NewProp_RoomDataList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::NewProp_RoomDataList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if at least one of the RoomData from the list provided is already in the dungeon\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if at least one of the RoomData from the list provided is already in the dungeon" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "HasAlreadyOneRoomDataFrom", nullptr, nullptr, Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::DungeonGraph_eventHasAlreadyOneRoomDataFrom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::DungeonGraph_eventHasAlreadyOneRoomDataFrom_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics
	{
		struct DungeonGraph_eventHasAlreadyOneRoomTypeFrom_Parms
		{
			TArray<TSubclassOf<URoomData> > RoomTypeList;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_RoomTypeList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomTypeList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomTypeList;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::NewProp_RoomTypeList_Inner = { "RoomTypeList", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::NewProp_RoomTypeList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::NewProp_RoomTypeList = { "RoomTypeList", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventHasAlreadyOneRoomTypeFrom_Parms, RoomTypeList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::NewProp_RoomTypeList_MetaData), Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::NewProp_RoomTypeList_MetaData) };
	void Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DungeonGraph_eventHasAlreadyOneRoomTypeFrom_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGraph_eventHasAlreadyOneRoomTypeFrom_Parms), &Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::NewProp_RoomTypeList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::NewProp_RoomTypeList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if at least one of the RoomData type from the list provided is already in the dungeon\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if at least one of the RoomData type from the list provided is already in the dungeon" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "HasAlreadyOneRoomTypeFrom", nullptr, nullptr, Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::DungeonGraph_eventHasAlreadyOneRoomTypeFrom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::DungeonGraph_eventHasAlreadyOneRoomTypeFrom_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics
	{
		struct DungeonGraph_eventHasAlreadyRoomData_Parms
		{
			const URoomData* RoomData;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::NewProp_RoomData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::NewProp_RoomData = { "RoomData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventHasAlreadyRoomData_Parms, RoomData), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::NewProp_RoomData_MetaData), Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::NewProp_RoomData_MetaData) };
	void Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DungeonGraph_eventHasAlreadyRoomData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGraph_eventHasAlreadyRoomData_Parms), &Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::NewProp_RoomData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if a specific RoomData is already in the dungeon\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if a specific RoomData is already in the dungeon" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "HasAlreadyRoomData", nullptr, nullptr, Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::DungeonGraph_eventHasAlreadyRoomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::DungeonGraph_eventHasAlreadyRoomData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics
	{
		struct DungeonGraph_eventHasAlreadyRoomType_Parms
		{
			const TSubclassOf<URoomData>  RoomType;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RoomType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::NewProp_RoomType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::NewProp_RoomType = { "RoomType", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventHasAlreadyRoomType_Parms, RoomType), Z_Construct_UClass_UClass, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::NewProp_RoomType_MetaData), Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::NewProp_RoomType_MetaData) };
	void Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DungeonGraph_eventHasAlreadyRoomType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGraph_eventHasAlreadyRoomType_Parms), &Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::NewProp_RoomType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "RoomType" },
		{ "Category", "Dungeon Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if a specific RoomData type is already in the dungeon\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if a specific RoomData type is already in the dungeon" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "HasAlreadyRoomType", nullptr, nullptr, Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::DungeonGraph_eventHasAlreadyRoomType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::DungeonGraph_eventHasAlreadyRoomType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics
	{
		struct DungeonGraph_eventHasValidPath_Parms
		{
			const URoom* From;
			const URoom* To;
			bool IgnoreLockedRooms;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_From_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_From;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_To_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_To;
		static void NewProp_IgnoreLockedRooms_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreLockedRooms;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_From_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventHasValidPath_Parms, From), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_From_MetaData), Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_From_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_To_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventHasValidPath_Parms, To), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_To_MetaData), Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_To_MetaData) };
	void Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_IgnoreLockedRooms_SetBit(void* Obj)
	{
		((DungeonGraph_eventHasValidPath_Parms*)Obj)->IgnoreLockedRooms = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_IgnoreLockedRooms = { "IgnoreLockedRooms", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGraph_eventHasValidPath_Parms), &Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_IgnoreLockedRooms_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DungeonGraph_eventHasValidPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGraph_eventHasValidPath_Parms), &Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_From,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_To,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_IgnoreLockedRooms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns wether a path is valid between 2 rooms (no locked room blocking the way)\n// Note: Could be pure, but since it can be heavy duty for large dungeons, keep it impure to avoid duplicate calls.\n" },
#endif
		{ "CPP_Default_IgnoreLockedRooms", "false" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
		{ "ReturnDisplayName", "Yes" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns wether a path is valid between 2 rooms (no locked room blocking the way)\nNote: Could be pure, but since it can be heavy duty for large dungeons, keep it impure to avoid duplicate calls." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "HasValidPath", nullptr, nullptr, Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::DungeonGraph_eventHasValidPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::DungeonGraph_eventHasValidPath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonGraph_HasValidPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonGraph_OnRep_Rooms_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonGraph_OnRep_Rooms_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_OnRep_Rooms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "OnRep_Rooms", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_OnRep_Rooms_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_OnRep_Rooms_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDungeonGraph_OnRep_Rooms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_OnRep_Rooms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonGraph);
	UClass* Z_Construct_UClass_UDungeonGraph_NoRegister()
	{
		return UDungeonGraph::StaticClass();
	}
	struct Z_Construct_UClass_UDungeonGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Rooms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rooms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Rooms;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReplicatedRooms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedRooms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReplicatedRooms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDungeonGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReplicableObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonGraph_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDungeonGraph_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDungeonGraph_Count, "Count" }, // 1198756485
		{ &Z_Construct_UFunction_UDungeonGraph_CountRoomData, "CountRoomData" }, // 3697624493
		{ &Z_Construct_UFunction_UDungeonGraph_CountRoomType, "CountRoomType" }, // 3986736229
		{ &Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData, "CountTotalRoomData" }, // 492865458
		{ &Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType, "CountTotalRoomType" }, // 3399007661
		{ &Z_Construct_UFunction_UDungeonGraph_GetAllRooms, "GetAllRooms" }, // 2523818385
		{ &Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData, "GetAllRoomsFromData" }, // 276855700
		{ &Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList, "GetAllRoomsFromDataList" }, // 4089973902
		{ &Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData, "GetAllRoomsWithAllCustomData" }, // 1601152163
		{ &Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData, "GetAllRoomsWithAnyCustomData" }, // 4237307123
		{ &Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData, "GetAllRoomsWithCustomData" }, // 413739566
		{ &Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData, "GetFirstRoomFromData" }, // 1966309511
		{ &Z_Construct_UFunction_UDungeonGraph_GetRandomRoom, "GetRandomRoom" }, // 1833645187
		{ &Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom, "HasAlreadyOneRoomDataFrom" }, // 1666705485
		{ &Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom, "HasAlreadyOneRoomTypeFrom" }, // 115187406
		{ &Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData, "HasAlreadyRoomData" }, // 878752236
		{ &Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType, "HasAlreadyRoomType" }, // 2932493696
		{ &Z_Construct_UFunction_UDungeonGraph_HasValidPath, "HasValidPath" }, // 3898493539
		{ &Z_Construct_UFunction_UDungeonGraph_OnRep_Rooms, "OnRep_Rooms" }, // 3469194609
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonGraph_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonGraph_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DungeonGraph.h" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonGraph_Statics::NewProp_Rooms_Inner = { "Rooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonGraph_Statics::NewProp_Rooms_MetaData[] = {
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDungeonGraph_Statics::NewProp_Rooms = { "Rooms", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonGraph, Rooms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonGraph_Statics::NewProp_Rooms_MetaData), Z_Construct_UClass_UDungeonGraph_Statics::NewProp_Rooms_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonGraph_Statics::NewProp_ReplicatedRooms_Inner = { "ReplicatedRooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonGraph_Statics::NewProp_ReplicatedRooms_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This array is synchronized with the server\n// We keep it separated to be able to unload previous rooms on clients\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This array is synchronized with the server\nWe keep it separated to be able to unload previous rooms on clients" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDungeonGraph_Statics::NewProp_ReplicatedRooms = { "ReplicatedRooms", "OnRep_Rooms", (EPropertyFlags)0x0040000100002020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonGraph, ReplicatedRooms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonGraph_Statics::NewProp_ReplicatedRooms_MetaData), Z_Construct_UClass_UDungeonGraph_Statics::NewProp_ReplicatedRooms_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonGraph_Statics::NewProp_Rooms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonGraph_Statics::NewProp_Rooms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonGraph_Statics::NewProp_ReplicatedRooms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonGraph_Statics::NewProp_ReplicatedRooms,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDungeonGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonGraph_Statics::ClassParams = {
		&UDungeonGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDungeonGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonGraph_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonGraph_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonGraph_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDungeonGraph()
	{
		if (!Z_Registration_Info_UClass_UDungeonGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonGraph.OuterSingleton, Z_Construct_UClass_UDungeonGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDungeonGraph.OuterSingleton;
	}
	template<> PROCEDURALDUNGEON_API UClass* StaticClass<UDungeonGraph>()
	{
		return UDungeonGraph::StaticClass();
	}

	void UDungeonGraph::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedRooms(TEXT("ReplicatedRooms"));

		const bool bIsValid = true
			&& Name_ReplicatedRooms == ClassReps[(int32)ENetFields_Private::ReplicatedRooms].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UDungeonGraph"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonGraph);
	UDungeonGraph::~UDungeonGraph() {}
	struct Z_CompiledInDeferFile_FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_Statics::EnumInfo[] = {
		{ EDungeonGraphState_StaticEnum, TEXT("EDungeonGraphState"), &Z_Registration_Info_UEnum_EDungeonGraphState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1113518810U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonGraph, UDungeonGraph::StaticClass, TEXT("UDungeonGraph"), &Z_Registration_Info_UClass_UDungeonGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonGraph), 2554259146U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_1189677540(TEXT("/Script/ProceduralDungeon"),
		Z_CompiledInDeferFile_FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
