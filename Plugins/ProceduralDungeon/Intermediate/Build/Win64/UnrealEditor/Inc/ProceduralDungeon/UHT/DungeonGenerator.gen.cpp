// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/DungeonGenerator.h"
#include "ProceduralDungeon/Public/ProceduralDungeonTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonGenerator() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ADoor_NoRegister();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ADungeonGenerator();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ADungeonGenerator_NoRegister();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDoorType_NoRegister();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonGraph_NoRegister();
	PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomData_NoRegister();
	PROCEDURALDUNGEON_API UEnum* Z_Construct_UEnum_ProceduralDungeon_EGenerationResult();
	PROCEDURALDUNGEON_API UEnum* Z_Construct_UEnum_ProceduralDungeon_EGenerationType();
	PROCEDURALDUNGEON_API UEnum* Z_Construct_UEnum_ProceduralDungeon_ESeedType();
	PROCEDURALDUNGEON_API UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature();
	PROCEDURALDUNGEON_API UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature();
	PROCEDURALDUNGEON_API UScriptStruct* Z_Construct_UScriptStruct_FDoorDef();
	UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProceduralDungeon, nullptr, "GenerationEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGenerationEvent_DelegateWrapper(const FMulticastScriptDelegate& GenerationEvent)
{
	GenerationEvent.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics
	{
		struct _Script_ProceduralDungeon_eventRoomEvent_Parms
		{
			const URoomData* NewRoom;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewRoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewRoom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::NewProp_NewRoom_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::NewProp_NewRoom = { "NewRoom", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProceduralDungeon_eventRoomEvent_Parms, NewRoom), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::NewProp_NewRoom_MetaData), Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::NewProp_NewRoom_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::NewProp_NewRoom,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProceduralDungeon, nullptr, "RoomEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::_Script_ProceduralDungeon_eventRoomEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::_Script_ProceduralDungeon_eventRoomEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FRoomEvent_DelegateWrapper(const FMulticastScriptDelegate& RoomEvent, const URoomData* NewRoom)
{
	struct _Script_ProceduralDungeon_eventRoomEvent_Parms
	{
		const URoomData* NewRoom;
	};
	_Script_ProceduralDungeon_eventRoomEvent_Parms Parms;
	Parms.NewRoom=NewRoom;
	RoomEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenerationResult;
	static UEnum* EGenerationResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGenerationResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGenerationResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProceduralDungeon_EGenerationResult, (UObject*)Z_Construct_UPackage__Script_ProceduralDungeon(), TEXT("EGenerationResult"));
		}
		return Z_Registration_Info_UEnum_EGenerationResult.OuterSingleton;
	}
	template<> PROCEDURALDUNGEON_API UEnum* StaticEnum<EGenerationResult>()
	{
		return EGenerationResult_StaticEnum();
	}
	struct Z_Construct_UEnum_ProceduralDungeon_EGenerationResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ProceduralDungeon_EGenerationResult_Statics::Enumerators[] = {
		{ "EGenerationResult::None", (int64)EGenerationResult::None },
		{ "EGenerationResult::Error", (int64)EGenerationResult::Error },
		{ "EGenerationResult::Success", (int64)EGenerationResult::Success },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ProceduralDungeon_EGenerationResult_Statics::Enum_MetaDataParams[] = {
		{ "Error.Name", "EGenerationResult::Error" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "None.Name", "EGenerationResult::None" },
		{ "Success.Name", "EGenerationResult::Success" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProceduralDungeon_EGenerationResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ProceduralDungeon,
		nullptr,
		"EGenerationResult",
		"EGenerationResult",
		Z_Construct_UEnum_ProceduralDungeon_EGenerationResult_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralDungeon_EGenerationResult_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralDungeon_EGenerationResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProceduralDungeon_EGenerationResult_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ProceduralDungeon_EGenerationResult()
	{
		if (!Z_Registration_Info_UEnum_EGenerationResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenerationResult.InnerSingleton, Z_Construct_UEnum_ProceduralDungeon_EGenerationResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGenerationResult.InnerSingleton;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execGetSeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execSetSeed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewSeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSeed(Z_Param_NewSeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execCreateDungeon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateDungeon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execGetRandomStream)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRandomStream*)Z_Param__Result=P_THIS->GetRandomStream();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execGetCompatibleRoomData)
	{
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_GET_TARRAY_REF(URoomData*,Z_Param_Out_CompatibleRooms);
		P_GET_TARRAY_REF(URoomData*,Z_Param_Out_RoomDataArray);
		P_GET_STRUCT_REF(FDoorDef,Z_Param_Out_DoorData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCompatibleRoomData(Z_Param_Out_bSuccess,Z_Param_Out_CompatibleRooms,Z_Param_Out_RoomDataArray,Z_Param_Out_DoorData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execGetNbRoom)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNbRoom();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execGetRandomRoomData)
	{
		P_GET_TARRAY(URoomData*,Z_Param_RoomDataArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URoomData**)Z_Param__Result=P_THIS->GetRandomRoomData(Z_Param_RoomDataArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execCountTotalRoomType)
	{
		P_GET_TARRAY(TSubclassOf<URoomData> ,Z_Param_RoomTypeList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CountTotalRoomType(Z_Param_RoomTypeList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execCountRoomType)
	{
		P_GET_OBJECT(UClass,Z_Param_RoomType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CountRoomType(Z_Param_RoomType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execHasAlreadyOneRoomTypeFrom)
	{
		P_GET_TARRAY(TSubclassOf<URoomData> ,Z_Param_RoomTypeList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAlreadyOneRoomTypeFrom(Z_Param_RoomTypeList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execHasAlreadyRoomType)
	{
		P_GET_OBJECT(UClass,Z_Param_RoomType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAlreadyRoomType(Z_Param_RoomType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execCountTotalRoomData)
	{
		P_GET_TARRAY(URoomData*,Z_Param_RoomDataList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CountTotalRoomData(Z_Param_RoomDataList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execCountRoomData)
	{
		P_GET_OBJECT(URoomData,Z_Param_RoomData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CountRoomData(Z_Param_RoomData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execHasAlreadyOneRoomDataFrom)
	{
		P_GET_TARRAY(URoomData*,Z_Param_RoomDataList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAlreadyOneRoomDataFrom(Z_Param_RoomDataList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execHasAlreadyRoomData)
	{
		P_GET_OBJECT(URoomData,Z_Param_RoomData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAlreadyRoomData(Z_Param_RoomData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execOnRoomAdded)
	{
		P_GET_OBJECT(URoomData,Z_Param_NewRoom);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRoomAdded_Implementation(Z_Param_NewRoom);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execOnGenerationFailed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGenerationFailed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execOnGenerationInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGenerationInit_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execOnPostGeneration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPostGeneration_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execOnPreGeneration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPreGeneration_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execInitializeDungeon)
	{
		P_GET_OBJECT(UDungeonGraph,Z_Param_Rooms);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeDungeon_Implementation(Z_Param_Rooms);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execContinueToAddRoom)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ContinueToAddRoom_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execIsValidDungeon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidDungeon_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execChooseDoor)
	{
		P_GET_OBJECT(URoomData,Z_Param_CurrentRoom);
		P_GET_OBJECT(URoomData,Z_Param_NextRoom);
		P_GET_OBJECT(UDoorType,Z_Param_DoorType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<ADoor> *)Z_Param__Result=P_THIS->ChooseDoor_Implementation(Z_Param_CurrentRoom,Z_Param_NextRoom,Z_Param_DoorType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execChooseNextRoomData)
	{
		P_GET_OBJECT(URoomData,Z_Param_CurrentRoom);
		P_GET_STRUCT_REF(FDoorDef,Z_Param_Out_DoorData);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_DoorIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URoomData**)Z_Param__Result=P_THIS->ChooseNextRoomData_Implementation(Z_Param_CurrentRoom,Z_Param_Out_DoorData,Z_Param_Out_DoorIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execChooseFirstRoomData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URoomData**)Z_Param__Result=P_THIS->ChooseFirstRoomData_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execUnload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Unload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execGenerate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Generate();
		P_NATIVE_END;
	}
	struct DungeonGenerator_eventChooseDoor_Parms
	{
		const URoomData* CurrentRoom;
		const URoomData* NextRoom;
		const UDoorType* DoorType;
		TSubclassOf<ADoor>  ReturnValue;

		/** Constructor, initializes return property only **/
		DungeonGenerator_eventChooseDoor_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct DungeonGenerator_eventChooseFirstRoomData_Parms
	{
		URoomData* ReturnValue;

		/** Constructor, initializes return property only **/
		DungeonGenerator_eventChooseFirstRoomData_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct DungeonGenerator_eventChooseNextRoomData_Parms
	{
		const URoomData* CurrentRoom;
		FDoorDef DoorData;
		int32 DoorIndex;
		URoomData* ReturnValue;

		/** Constructor, initializes return property only **/
		DungeonGenerator_eventChooseNextRoomData_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct DungeonGenerator_eventContinueToAddRoom_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		DungeonGenerator_eventContinueToAddRoom_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct DungeonGenerator_eventInitializeDungeon_Parms
	{
		const UDungeonGraph* Rooms;
	};
	struct DungeonGenerator_eventIsValidDungeon_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		DungeonGenerator_eventIsValidDungeon_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct DungeonGenerator_eventOnRoomAdded_Parms
	{
		const URoomData* NewRoom;
	};
	static FName NAME_ADungeonGenerator_ChooseDoor = FName(TEXT("ChooseDoor"));
	TSubclassOf<ADoor>  ADungeonGenerator::ChooseDoor(const URoomData* CurrentRoom, const URoomData* NextRoom, const UDoorType* DoorType)
	{
		DungeonGenerator_eventChooseDoor_Parms Parms;
		Parms.CurrentRoom=CurrentRoom;
		Parms.NextRoom=NextRoom;
		Parms.DoorType=DoorType;
		ProcessEvent(FindFunctionChecked(NAME_ADungeonGenerator_ChooseDoor),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ADungeonGenerator_ChooseFirstRoomData = FName(TEXT("ChooseFirstRoomData"));
	URoomData* ADungeonGenerator::ChooseFirstRoomData()
	{
		DungeonGenerator_eventChooseFirstRoomData_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_ADungeonGenerator_ChooseFirstRoomData),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ADungeonGenerator_ChooseNextRoomData = FName(TEXT("ChooseNextRoomData"));
	URoomData* ADungeonGenerator::ChooseNextRoomData(const URoomData* CurrentRoom, FDoorDef const& DoorData, int32& DoorIndex)
	{
		DungeonGenerator_eventChooseNextRoomData_Parms Parms;
		Parms.CurrentRoom=CurrentRoom;
		Parms.DoorData=DoorData;
		Parms.DoorIndex=DoorIndex;
		ProcessEvent(FindFunctionChecked(NAME_ADungeonGenerator_ChooseNextRoomData),&Parms);
		DoorIndex=Parms.DoorIndex;
		return Parms.ReturnValue;
	}
	static FName NAME_ADungeonGenerator_ContinueToAddRoom = FName(TEXT("ContinueToAddRoom"));
	bool ADungeonGenerator::ContinueToAddRoom()
	{
		DungeonGenerator_eventContinueToAddRoom_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_ADungeonGenerator_ContinueToAddRoom),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ADungeonGenerator_InitializeDungeon = FName(TEXT("InitializeDungeon"));
	void ADungeonGenerator::InitializeDungeon(const UDungeonGraph* Rooms)
	{
		DungeonGenerator_eventInitializeDungeon_Parms Parms;
		Parms.Rooms=Rooms;
		ProcessEvent(FindFunctionChecked(NAME_ADungeonGenerator_InitializeDungeon),&Parms);
	}
	static FName NAME_ADungeonGenerator_IsValidDungeon = FName(TEXT("IsValidDungeon"));
	bool ADungeonGenerator::IsValidDungeon()
	{
		DungeonGenerator_eventIsValidDungeon_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_ADungeonGenerator_IsValidDungeon),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ADungeonGenerator_OnGenerationFailed = FName(TEXT("OnGenerationFailed"));
	void ADungeonGenerator::OnGenerationFailed()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADungeonGenerator_OnGenerationFailed),NULL);
	}
	static FName NAME_ADungeonGenerator_OnGenerationInit = FName(TEXT("OnGenerationInit"));
	void ADungeonGenerator::OnGenerationInit()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADungeonGenerator_OnGenerationInit),NULL);
	}
	static FName NAME_ADungeonGenerator_OnPostGeneration = FName(TEXT("OnPostGeneration"));
	void ADungeonGenerator::OnPostGeneration()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADungeonGenerator_OnPostGeneration),NULL);
	}
	static FName NAME_ADungeonGenerator_OnPreGeneration = FName(TEXT("OnPreGeneration"));
	void ADungeonGenerator::OnPreGeneration()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADungeonGenerator_OnPreGeneration),NULL);
	}
	static FName NAME_ADungeonGenerator_OnRoomAdded = FName(TEXT("OnRoomAdded"));
	void ADungeonGenerator::OnRoomAdded(const URoomData* NewRoom)
	{
		DungeonGenerator_eventOnRoomAdded_Parms Parms;
		Parms.NewRoom=NewRoom;
		ProcessEvent(FindFunctionChecked(NAME_ADungeonGenerator_OnRoomAdded),&Parms);
	}
	void ADungeonGenerator::StaticRegisterNativesADungeonGenerator()
	{
		UClass* Class = ADungeonGenerator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChooseDoor", &ADungeonGenerator::execChooseDoor },
			{ "ChooseFirstRoomData", &ADungeonGenerator::execChooseFirstRoomData },
			{ "ChooseNextRoomData", &ADungeonGenerator::execChooseNextRoomData },
			{ "ContinueToAddRoom", &ADungeonGenerator::execContinueToAddRoom },
			{ "CountRoomData", &ADungeonGenerator::execCountRoomData },
			{ "CountRoomType", &ADungeonGenerator::execCountRoomType },
			{ "CountTotalRoomData", &ADungeonGenerator::execCountTotalRoomData },
			{ "CountTotalRoomType", &ADungeonGenerator::execCountTotalRoomType },
			{ "CreateDungeon", &ADungeonGenerator::execCreateDungeon },
			{ "Generate", &ADungeonGenerator::execGenerate },
			{ "GetCompatibleRoomData", &ADungeonGenerator::execGetCompatibleRoomData },
			{ "GetNbRoom", &ADungeonGenerator::execGetNbRoom },
			{ "GetRandomRoomData", &ADungeonGenerator::execGetRandomRoomData },
			{ "GetRandomStream", &ADungeonGenerator::execGetRandomStream },
			{ "GetSeed", &ADungeonGenerator::execGetSeed },
			{ "HasAlreadyOneRoomDataFrom", &ADungeonGenerator::execHasAlreadyOneRoomDataFrom },
			{ "HasAlreadyOneRoomTypeFrom", &ADungeonGenerator::execHasAlreadyOneRoomTypeFrom },
			{ "HasAlreadyRoomData", &ADungeonGenerator::execHasAlreadyRoomData },
			{ "HasAlreadyRoomType", &ADungeonGenerator::execHasAlreadyRoomType },
			{ "InitializeDungeon", &ADungeonGenerator::execInitializeDungeon },
			{ "IsValidDungeon", &ADungeonGenerator::execIsValidDungeon },
			{ "OnGenerationFailed", &ADungeonGenerator::execOnGenerationFailed },
			{ "OnGenerationInit", &ADungeonGenerator::execOnGenerationInit },
			{ "OnPostGeneration", &ADungeonGenerator::execOnPostGeneration },
			{ "OnPreGeneration", &ADungeonGenerator::execOnPreGeneration },
			{ "OnRoomAdded", &ADungeonGenerator::execOnRoomAdded },
			{ "SetSeed", &ADungeonGenerator::execSetSeed },
			{ "Unload", &ADungeonGenerator::execUnload },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentRoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextRoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NextRoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorType;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::NewProp_CurrentRoom_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::NewProp_CurrentRoom = { "CurrentRoom", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventChooseDoor_Parms, CurrentRoom), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::NewProp_CurrentRoom_MetaData), Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::NewProp_CurrentRoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::NewProp_NextRoom_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::NewProp_NextRoom = { "NextRoom", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventChooseDoor_Parms, NextRoom), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::NewProp_NextRoom_MetaData), Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::NewProp_NextRoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::NewProp_DoorType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::NewProp_DoorType = { "DoorType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventChooseDoor_Parms, DoorType), Z_Construct_UClass_UDoorType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::NewProp_DoorType_MetaData), Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::NewProp_DoorType_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventChooseDoor_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_ADoor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::NewProp_CurrentRoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::NewProp_NextRoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::NewProp_DoorType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return the door which will be spawned between Current Room and Next Room\n// Use IsDoorOfType function to compare a door class with DoorType.\n" },
#endif
		{ "DisplayName", "Choose Door" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the door which will be spawned between Current Room and Next Room\nUse IsDoorOfType function to compare a door class with DoorType." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "ChooseDoor", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::PropPointers), sizeof(DungeonGenerator_eventChooseDoor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::PropPointers) < 2048);
	static_assert(sizeof(DungeonGenerator_eventChooseDoor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADungeonGenerator_ChooseDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventChooseFirstRoomData_Parms, ReturnValue), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return the RoomData you want as root of the dungeon generation\n" },
#endif
		{ "DisplayName", "Choose First Room" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the RoomData you want as root of the dungeon generation" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "ChooseFirstRoomData", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Statics::PropPointers), sizeof(DungeonGenerator_eventChooseFirstRoomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Statics::PropPointers) < 2048);
	static_assert(sizeof(DungeonGenerator_eventChooseFirstRoomData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentRoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DoorData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DoorIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::NewProp_CurrentRoom_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::NewProp_CurrentRoom = { "CurrentRoom", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventChooseNextRoomData_Parms, CurrentRoom), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::NewProp_CurrentRoom_MetaData), Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::NewProp_CurrentRoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::NewProp_DoorData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::NewProp_DoorData = { "DoorData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventChooseNextRoomData_Parms, DoorData), Z_Construct_UScriptStruct_FDoorDef, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::NewProp_DoorData_MetaData), Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::NewProp_DoorData_MetaData) }; // 3858898712
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::NewProp_DoorIndex = { "DoorIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventChooseNextRoomData_Parms, DoorIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventChooseNextRoomData_Parms, ReturnValue), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::NewProp_CurrentRoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::NewProp_DoorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::NewProp_DoorIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "DoorIndex" },
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Return the RoomData that will be connected to the Current Room\n\x09* @param CurrentRoom The room from wich the generator will connect the next room.\n\x09* @param DoorData The door of the CurrentRoom on which the next room will be connected (its location in room units, its orientation and its type).\n\x09* @param DoorIndex The index of the door used on the next room to connect to the CurrentRoom.\n\x09* Use -1 for a random (compatible) door, or the door index from the RoomData door array (0 is the first door).\n\x09* WARNING: If the RandomDoor boolean of the RoomData is checked, then it will be considered -1 whatever you set here.\n\x09* @return The room data asset used to instantiate the new room instance (must not be null)\n\x09*/" },
#endif
		{ "DisplayName", "Choose Next Room" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ReturnDisplayName", "Room Data" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the RoomData that will be connected to the Current Room\n@param CurrentRoom The room from wich the generator will connect the next room.\n@param DoorData The door of the CurrentRoom on which the next room will be connected (its location in room units, its orientation and its type).\n@param DoorIndex The index of the door used on the next room to connect to the CurrentRoom.\nUse -1 for a random (compatible) door, or the door index from the RoomData door array (0 is the first door).\nWARNING: If the RandomDoor boolean of the RoomData is checked, then it will be considered -1 whatever you set here.\n@return The room data asset used to instantiate the new room instance (must not be null)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "ChooseNextRoomData", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::PropPointers), sizeof(DungeonGenerator_eventChooseNextRoomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::PropPointers) < 2048);
	static_assert(sizeof(DungeonGenerator_eventChooseNextRoomData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DungeonGenerator_eventContinueToAddRoom_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGenerator_eventContinueToAddRoom_Parms), &Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Condition to continue or stop adding room to the dungeon\n" },
#endif
		{ "DisplayName", "Continue To Add Room" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Condition to continue or stop adding room to the dungeon" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "ContinueToAddRoom", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics::PropPointers), sizeof(DungeonGenerator_eventContinueToAddRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics::PropPointers) < 2048);
	static_assert(sizeof(DungeonGenerator_eventContinueToAddRoom_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics
	{
		struct DungeonGenerator_eventCountRoomData_Parms
		{
			URoomData* RoomData;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::NewProp_RoomData = { "RoomData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventCountRoomData_Parms, RoomData), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventCountRoomData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::NewProp_RoomData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return the number of a specific RoomData in the dungeon\n" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use the same function from the Rooms variable." },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the number of a specific RoomData in the dungeon" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "CountRoomData", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::DungeonGenerator_eventCountRoomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::DungeonGenerator_eventCountRoomData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADungeonGenerator_CountRoomData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_CountRoomType_Statics
	{
		struct DungeonGenerator_eventCountRoomType_Parms
		{
			TSubclassOf<URoomData>  RoomType;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_RoomType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADungeonGenerator_CountRoomType_Statics::NewProp_RoomType = { "RoomType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventCountRoomType_Parms, RoomType), Z_Construct_UClass_UClass, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADungeonGenerator_CountRoomType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventCountRoomType_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_CountRoomType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_CountRoomType_Statics::NewProp_RoomType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_CountRoomType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_CountRoomType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return the number of a specific RoomData type in the dungeon\n" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use the same function from the Rooms variable." },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the number of a specific RoomData type in the dungeon" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_CountRoomType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "CountRoomType", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_CountRoomType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_CountRoomType_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGenerator_CountRoomType_Statics::DungeonGenerator_eventCountRoomType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_CountRoomType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_CountRoomType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_CountRoomType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADungeonGenerator_CountRoomType_Statics::DungeonGenerator_eventCountRoomType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADungeonGenerator_CountRoomType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_CountRoomType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics
	{
		struct DungeonGenerator_eventCountTotalRoomData_Parms
		{
			TArray<URoomData*> RoomDataList;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomDataList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomDataList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::NewProp_RoomDataList_Inner = { "RoomDataList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::NewProp_RoomDataList = { "RoomDataList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventCountTotalRoomData_Parms, RoomDataList), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventCountTotalRoomData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::NewProp_RoomDataList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::NewProp_RoomDataList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return the total number of RoomData in the dungeon from the list provided\n" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use the same function from the Rooms variable." },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the total number of RoomData in the dungeon from the list provided" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "CountTotalRoomData", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::DungeonGenerator_eventCountTotalRoomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::DungeonGenerator_eventCountTotalRoomData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType_Statics
	{
		struct DungeonGenerator_eventCountTotalRoomType_Parms
		{
			TArray<TSubclassOf<URoomData> > RoomTypeList;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_RoomTypeList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomTypeList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType_Statics::NewProp_RoomTypeList_Inner = { "RoomTypeList", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType_Statics::NewProp_RoomTypeList = { "RoomTypeList", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventCountTotalRoomType_Parms, RoomTypeList), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventCountTotalRoomType_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType_Statics::NewProp_RoomTypeList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType_Statics::NewProp_RoomTypeList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return the total number of RoomData type in the dungeon from the list provided\n" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use the same function from the Rooms variable." },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the total number of RoomData type in the dungeon from the list provided" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "CountTotalRoomType", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType_Statics::DungeonGenerator_eventCountTotalRoomType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType_Statics::DungeonGenerator_eventCountTotalRoomType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_CreateDungeon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_CreateDungeon_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Create virtually the dungeon (no load nor initialization of room levels)\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create virtually the dungeon (no load nor initialization of room levels)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_CreateDungeon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "CreateDungeon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_CreateDungeon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_CreateDungeon_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_CreateDungeon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_CreateDungeon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_Generate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_Generate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Update the seed and call the generation on all clients\n// Do nothing when called on clients\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update the seed and call the generation on all clients\nDo nothing when called on clients" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_Generate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "Generate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_Generate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_Generate_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_Generate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_Generate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics
	{
		struct DungeonGenerator_eventGetCompatibleRoomData_Parms
		{
			bool bSuccess;
			TArray<URoomData*> CompatibleRooms;
			TArray<URoomData*> RoomDataArray;
			FDoorDef DoorData;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CompatibleRooms_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CompatibleRooms;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomDataArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomDataArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomDataArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DoorData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((DungeonGenerator_eventGetCompatibleRoomData_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGenerator_eventGetCompatibleRoomData_Parms), &Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::NewProp_CompatibleRooms_Inner = { "CompatibleRooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::NewProp_CompatibleRooms = { "CompatibleRooms", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventGetCompatibleRoomData_Parms, CompatibleRooms), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::NewProp_RoomDataArray_Inner = { "RoomDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::NewProp_RoomDataArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::NewProp_RoomDataArray = { "RoomDataArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventGetCompatibleRoomData_Parms, RoomDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::NewProp_RoomDataArray_MetaData), Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::NewProp_RoomDataArray_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::NewProp_DoorData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::NewProp_DoorData = { "DoorData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventGetCompatibleRoomData_Parms, DoorData), Z_Construct_UScriptStruct_FDoorDef, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::NewProp_DoorData_MetaData), Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::NewProp_DoorData_MetaData) }; // 3858898712
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::NewProp_CompatibleRooms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::NewProp_CompatibleRooms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::NewProp_RoomDataArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::NewProp_RoomDataArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::NewProp_DoorData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns an array of room data with compatible at least one compatible door with the door data provided.\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns an array of room data with compatible at least one compatible door with the door data provided." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "GetCompatibleRoomData", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::DungeonGenerator_eventGetCompatibleRoomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::DungeonGenerator_eventGetCompatibleRoomData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_GetNbRoom_Statics
	{
		struct DungeonGenerator_eventGetNbRoom_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADungeonGenerator_GetNbRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventGetNbRoom_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_GetNbRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_GetNbRoom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_GetNbRoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the current number of room in the generated dungeon.\n" },
#endif
		{ "CompactNodeTitle", "Room Count" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use the same function from the Rooms variable." },
		{ "DisplayName", "Room Count" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current number of room in the generated dungeon." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_GetNbRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "GetNbRoom", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_GetNbRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetNbRoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGenerator_GetNbRoom_Statics::DungeonGenerator_eventGetNbRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetNbRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_GetNbRoom_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetNbRoom_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADungeonGenerator_GetNbRoom_Statics::DungeonGenerator_eventGetNbRoom_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADungeonGenerator_GetNbRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_GetNbRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics
	{
		struct DungeonGenerator_eventGetRandomRoomData_Parms
		{
			TArray<URoomData*> RoomDataArray;
			URoomData* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomDataArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomDataArray;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::NewProp_RoomDataArray_Inner = { "RoomDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::NewProp_RoomDataArray = { "RoomDataArray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventGetRandomRoomData_Parms, RoomDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventGetRandomRoomData_Parms, ReturnValue), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::NewProp_RoomDataArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::NewProp_RoomDataArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return a random RoomData from the array provided\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return a random RoomData from the array provided" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "GetRandomRoomData", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::DungeonGenerator_eventGetRandomRoomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::DungeonGenerator_eventGetRandomRoomData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_GetRandomStream_Statics
	{
		struct DungeonGenerator_eventGetRandomStream_Parms
		{
			FRandomStream ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_GetRandomStream_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADungeonGenerator_GetRandomStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventGetRandomStream_Parms, ReturnValue), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetRandomStream_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ADungeonGenerator_GetRandomStream_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_GetRandomStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_GetRandomStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_GetRandomStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_GetRandomStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "GetRandomStream", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_GetRandomStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetRandomStream_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGenerator_GetRandomStream_Statics::DungeonGenerator_eventGetRandomStream_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetRandomStream_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_GetRandomStream_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetRandomStream_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADungeonGenerator_GetRandomStream_Statics::DungeonGenerator_eventGetRandomStream_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADungeonGenerator_GetRandomStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_GetRandomStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_GetSeed_Statics
	{
		struct DungeonGenerator_eventGetSeed_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADungeonGenerator_GetSeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventGetSeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_GetSeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_GetSeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_GetSeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
		{ "CompactNodeTitle", "Seed" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_GetSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "GetSeed", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_GetSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetSeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGenerator_GetSeed_Statics::DungeonGenerator_eventGetSeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetSeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_GetSeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetSeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADungeonGenerator_GetSeed_Statics::DungeonGenerator_eventGetSeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADungeonGenerator_GetSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_GetSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics
	{
		struct DungeonGenerator_eventHasAlreadyOneRoomDataFrom_Parms
		{
			TArray<URoomData*> RoomDataList;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomDataList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomDataList;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::NewProp_RoomDataList_Inner = { "RoomDataList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::NewProp_RoomDataList = { "RoomDataList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventHasAlreadyOneRoomDataFrom_Parms, RoomDataList), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DungeonGenerator_eventHasAlreadyOneRoomDataFrom_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGenerator_eventHasAlreadyOneRoomDataFrom_Parms), &Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::NewProp_RoomDataList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::NewProp_RoomDataList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return true if at least one of the RoomData from the list provided is already in the dungeon\n" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use the same function from the Rooms variable." },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return true if at least one of the RoomData from the list provided is already in the dungeon" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "HasAlreadyOneRoomDataFrom", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::DungeonGenerator_eventHasAlreadyOneRoomDataFrom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::DungeonGenerator_eventHasAlreadyOneRoomDataFrom_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics
	{
		struct DungeonGenerator_eventHasAlreadyOneRoomTypeFrom_Parms
		{
			TArray<TSubclassOf<URoomData> > RoomTypeList;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_RoomTypeList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomTypeList;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics::NewProp_RoomTypeList_Inner = { "RoomTypeList", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics::NewProp_RoomTypeList = { "RoomTypeList", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventHasAlreadyOneRoomTypeFrom_Parms, RoomTypeList), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DungeonGenerator_eventHasAlreadyOneRoomTypeFrom_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGenerator_eventHasAlreadyOneRoomTypeFrom_Parms), &Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics::NewProp_RoomTypeList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics::NewProp_RoomTypeList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return true if at least one of the RoomData type from the list provided is already in the dungeon\n" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use the same function from the Rooms variable." },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return true if at least one of the RoomData type from the list provided is already in the dungeon" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "HasAlreadyOneRoomTypeFrom", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics::DungeonGenerator_eventHasAlreadyOneRoomTypeFrom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics::DungeonGenerator_eventHasAlreadyOneRoomTypeFrom_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics
	{
		struct DungeonGenerator_eventHasAlreadyRoomData_Parms
		{
			URoomData* RoomData;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::NewProp_RoomData = { "RoomData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventHasAlreadyRoomData_Parms, RoomData), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DungeonGenerator_eventHasAlreadyRoomData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGenerator_eventHasAlreadyRoomData_Parms), &Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::NewProp_RoomData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return true if a specific RoomData is already in the dungeon\n" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use the same function from the Rooms variable." },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return true if a specific RoomData is already in the dungeon" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "HasAlreadyRoomData", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::DungeonGenerator_eventHasAlreadyRoomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::DungeonGenerator_eventHasAlreadyRoomData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType_Statics
	{
		struct DungeonGenerator_eventHasAlreadyRoomType_Parms
		{
			TSubclassOf<URoomData>  RoomType;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_RoomType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType_Statics::NewProp_RoomType = { "RoomType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventHasAlreadyRoomType_Parms, RoomType), Z_Construct_UClass_UClass, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DungeonGenerator_eventHasAlreadyRoomType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGenerator_eventHasAlreadyRoomType_Parms), &Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType_Statics::NewProp_RoomType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return true if a specific RoomData type is already in the dungeon\n" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use the same function from the Rooms variable." },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return true if a specific RoomData type is already in the dungeon" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "HasAlreadyRoomType", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType_Statics::DungeonGenerator_eventHasAlreadyRoomType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType_Statics::DungeonGenerator_eventHasAlreadyRoomType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_InitializeDungeon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rooms_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Rooms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_InitializeDungeon_Statics::NewProp_Rooms_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_InitializeDungeon_Statics::NewProp_Rooms = { "Rooms", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventInitializeDungeon_Parms, Rooms), Z_Construct_UClass_UDungeonGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_InitializeDungeon_Statics::NewProp_Rooms_MetaData), Z_Construct_UFunction_ADungeonGenerator_InitializeDungeon_Statics::NewProp_Rooms_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_InitializeDungeon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_InitializeDungeon_Statics::NewProp_Rooms,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_InitializeDungeon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Initialize the room instances during the generation step\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initialize the room instances during the generation step" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_InitializeDungeon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "InitializeDungeon", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_InitializeDungeon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_InitializeDungeon_Statics::PropPointers), sizeof(DungeonGenerator_eventInitializeDungeon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_InitializeDungeon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_InitializeDungeon_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_InitializeDungeon_Statics::PropPointers) < 2048);
	static_assert(sizeof(DungeonGenerator_eventInitializeDungeon_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADungeonGenerator_InitializeDungeon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_InitializeDungeon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DungeonGenerator_eventIsValidDungeon_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGenerator_eventIsValidDungeon_Parms), &Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Condition to validate a dungeon Generation\n" },
#endif
		{ "DisplayName", "Is Valid Dungeon" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Condition to validate a dungeon Generation" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "IsValidDungeon", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics::PropPointers), sizeof(DungeonGenerator_eventIsValidDungeon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics::PropPointers) < 2048);
	static_assert(sizeof(DungeonGenerator_eventIsValidDungeon_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_OnGenerationFailed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_OnGenerationFailed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when all dungeon generation tries are exhausted (IsValidDungeon always return false).\n// No dungeon had been generated.\n" },
#endif
		{ "DisplayName", "Generation Failed" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when all dungeon generation tries are exhausted (IsValidDungeon always return false).\nNo dungeon had been generated." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_OnGenerationFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "OnGenerationFailed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_OnGenerationFailed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_OnGenerationFailed_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_OnGenerationFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_OnGenerationFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_OnGenerationInit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_OnGenerationInit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called before trying to generate a new dungeon and each time IsValidDungeon return false.\n" },
#endif
		{ "DisplayName", "Generation Init" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called before trying to generate a new dungeon and each time IsValidDungeon return false." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_OnGenerationInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "OnGenerationInit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_OnGenerationInit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_OnGenerationInit_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_OnGenerationInit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_OnGenerationInit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_OnPostGeneration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_OnPostGeneration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called once after all the dungeon generation (even if failed).\n" },
#endif
		{ "DisplayName", "Post Generation" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called once after all the dungeon generation (even if failed)." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_OnPostGeneration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "OnPostGeneration", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_OnPostGeneration_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_OnPostGeneration_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_OnPostGeneration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_OnPostGeneration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_OnPreGeneration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_OnPreGeneration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called once before anything else when generating a new dungeon.\n" },
#endif
		{ "DisplayName", "Pre Generation" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called once before anything else when generating a new dungeon." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_OnPreGeneration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "OnPreGeneration", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_OnPreGeneration_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_OnPreGeneration_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_OnPreGeneration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_OnPreGeneration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewRoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewRoom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_Statics::NewProp_NewRoom_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_Statics::NewProp_NewRoom = { "NewRoom", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventOnRoomAdded_Parms, NewRoom), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_Statics::NewProp_NewRoom_MetaData), Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_Statics::NewProp_NewRoom_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_Statics::NewProp_NewRoom,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called each time a room is added in the dungeon (but not spawned yet).\n// Those rooms can be destroyed without loading them if the generation try is not valid.\n" },
#endif
		{ "DisplayName", "On Room Added" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called each time a room is added in the dungeon (but not spawned yet).\nThose rooms can be destroyed without loading them if the generation try is not valid." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "OnRoomAdded", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_Statics::PropPointers), sizeof(DungeonGenerator_eventOnRoomAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_Statics::PropPointers) < 2048);
	static_assert(sizeof(DungeonGenerator_eventOnRoomAdded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_SetSeed_Statics
	{
		struct DungeonGenerator_eventSetSeed_Parms
		{
			int32 NewSeed;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewSeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADungeonGenerator_SetSeed_Statics::NewProp_NewSeed = { "NewSeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventSetSeed_Parms, NewSeed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_SetSeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_SetSeed_Statics::NewProp_NewSeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_SetSeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_SetSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "SetSeed", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_SetSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_SetSeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGenerator_SetSeed_Statics::DungeonGenerator_eventSetSeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_SetSeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_SetSeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_SetSeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADungeonGenerator_SetSeed_Statics::DungeonGenerator_eventSetSeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADungeonGenerator_SetSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_SetSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_Unload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_Unload_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Unload the current dungeon\n// Do nothing when called on clients\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unload the current dungeon\nDo nothing when called on clients" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_Unload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "Unload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_Unload_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_Unload_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_Unload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_Unload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonGenerator);
	UClass* Z_Construct_UClass_ADungeonGenerator_NoRegister()
	{
		return ADungeonGenerator::StaticClass();
	}
	struct Z_Construct_UClass_ADungeonGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPreGenerationEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPreGenerationEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPostGenerationEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPostGenerationEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGenerationInitEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGenerationInitEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGenerationFailedEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGenerationFailedEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRoomAddedEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRoomAddedEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseGeneratorTransform_MetaData[];
#endif
		static void NewProp_bUseGeneratorTransform_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGeneratorTransform;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GenerationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenerationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GenerationType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SeedType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SeedType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SeedType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SeedIncrement_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_SeedIncrement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Graph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Graph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Seed;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DoorList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Generation_MetaData[];
#endif
		static const UECodeGen_Private::FUInt64PropertyParams NewProp_Generation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADungeonGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ADungeonGenerator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADungeonGenerator_ChooseDoor, "ChooseDoor" }, // 1844766600
		{ &Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData, "ChooseFirstRoomData" }, // 3408885692
		{ &Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData, "ChooseNextRoomData" }, // 1837015652
		{ &Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom, "ContinueToAddRoom" }, // 3676788825
		{ &Z_Construct_UFunction_ADungeonGenerator_CountRoomData, "CountRoomData" }, // 4101567476
		{ &Z_Construct_UFunction_ADungeonGenerator_CountRoomType, "CountRoomType" }, // 4006594599
		{ &Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData, "CountTotalRoomData" }, // 2176601912
		{ &Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType, "CountTotalRoomType" }, // 2877995342
		{ &Z_Construct_UFunction_ADungeonGenerator_CreateDungeon, "CreateDungeon" }, // 4158568598
		{ &Z_Construct_UFunction_ADungeonGenerator_Generate, "Generate" }, // 3783134885
		{ &Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData, "GetCompatibleRoomData" }, // 319403724
		{ &Z_Construct_UFunction_ADungeonGenerator_GetNbRoom, "GetNbRoom" }, // 1506219859
		{ &Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData, "GetRandomRoomData" }, // 421455562
		{ &Z_Construct_UFunction_ADungeonGenerator_GetRandomStream, "GetRandomStream" }, // 2737026985
		{ &Z_Construct_UFunction_ADungeonGenerator_GetSeed, "GetSeed" }, // 2954953829
		{ &Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom, "HasAlreadyOneRoomDataFrom" }, // 2982983080
		{ &Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom, "HasAlreadyOneRoomTypeFrom" }, // 2913791310
		{ &Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData, "HasAlreadyRoomData" }, // 1074304720
		{ &Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType, "HasAlreadyRoomType" }, // 3333437639
		{ &Z_Construct_UFunction_ADungeonGenerator_InitializeDungeon, "InitializeDungeon" }, // 4088313634
		{ &Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon, "IsValidDungeon" }, // 2856902808
		{ &Z_Construct_UFunction_ADungeonGenerator_OnGenerationFailed, "OnGenerationFailed" }, // 143958482
		{ &Z_Construct_UFunction_ADungeonGenerator_OnGenerationInit, "OnGenerationInit" }, // 2941333960
		{ &Z_Construct_UFunction_ADungeonGenerator_OnPostGeneration, "OnPostGeneration" }, // 354863065
		{ &Z_Construct_UFunction_ADungeonGenerator_OnPreGeneration, "OnPreGeneration" }, // 467769580
		{ &Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded, "OnRoomAdded" }, // 3752494282
		{ &Z_Construct_UFunction_ADungeonGenerator_SetSeed, "SetSeed" }, // 4275194664
		{ &Z_Construct_UFunction_ADungeonGenerator_Unload, "Unload" }, // 621562208
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural Dungeon" },
		{ "IncludePath", "DungeonGenerator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnPreGenerationEvent_MetaData[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called once before anything else when generating a new dungeon.\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called once before anything else when generating a new dungeon." },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnPreGenerationEvent = { "OnPreGenerationEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, OnPreGenerationEvent), Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnPreGenerationEvent_MetaData), Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnPreGenerationEvent_MetaData) }; // 2610677754
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnPostGenerationEvent_MetaData[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called once after all the dungeon generation (even if failed).\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called once after all the dungeon generation (even if failed)." },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnPostGenerationEvent = { "OnPostGenerationEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, OnPostGenerationEvent), Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnPostGenerationEvent_MetaData), Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnPostGenerationEvent_MetaData) }; // 2610677754
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnGenerationInitEvent_MetaData[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called before trying to generate a new dungeon and each time IsValidDungeon return false.\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called before trying to generate a new dungeon and each time IsValidDungeon return false." },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnGenerationInitEvent = { "OnGenerationInitEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, OnGenerationInitEvent), Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnGenerationInitEvent_MetaData), Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnGenerationInitEvent_MetaData) }; // 2610677754
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnGenerationFailedEvent_MetaData[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when all dungeon generation tries are exhausted (IsValidDungeon always return false).\n// No dungeon had been generated.\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when all dungeon generation tries are exhausted (IsValidDungeon always return false).\nNo dungeon had been generated." },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnGenerationFailedEvent = { "OnGenerationFailedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, OnGenerationFailedEvent), Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnGenerationFailedEvent_MetaData), Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnGenerationFailedEvent_MetaData) }; // 2610677754
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnRoomAddedEvent_MetaData[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called each time a room is added in the dungeon (but not spawned yet).\n// Those rooms can be destroyed without loading them if the generation try is not valid.\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called each time a room is added in the dungeon (but not spawned yet).\nThose rooms can be destroyed without loading them if the generation try is not valid." },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnRoomAddedEvent = { "OnRoomAddedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, OnRoomAddedEvent), Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnRoomAddedEvent_MetaData), Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnRoomAddedEvent_MetaData) }; // 1899109969
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bUseGeneratorTransform_MetaData[] = {
		{ "Category", "Procedural Generation" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	void Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bUseGeneratorTransform_SetBit(void* Obj)
	{
		((ADungeonGenerator*)Obj)->bUseGeneratorTransform = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bUseGeneratorTransform = { "bUseGeneratorTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADungeonGenerator), &Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bUseGeneratorTransform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bUseGeneratorTransform_MetaData), Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bUseGeneratorTransform_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_GenerationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_GenerationType_MetaData[] = {
		{ "Category", "Procedural Generation" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_GenerationType = { "GenerationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, GenerationType), Z_Construct_UEnum_ProceduralDungeon_EGenerationType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_GenerationType_MetaData), Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_GenerationType_MetaData) }; // 3608929602
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_SeedType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_SeedType_MetaData[] = {
		{ "Category", "Procedural Generation" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_SeedType = { "SeedType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, SeedType), Z_Construct_UEnum_ProceduralDungeon_ESeedType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_SeedType_MetaData), Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_SeedType_MetaData) }; // 388857190
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_SeedIncrement_MetaData[] = {
		{ "Category", "Procedural Generation" },
		{ "DisplayAfter", "Seed" },
		{ "EditCondition", "SeedType==ESeedType::AutoIncrement" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_SeedIncrement = { "SeedIncrement", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, SeedIncrement), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_SeedIncrement_MetaData), Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_SeedIncrement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_Graph_MetaData[] = {
		{ "Category", "Dungeon Generator" },
		{ "DisplayName", "Rooms" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, Graph), Z_Construct_UClass_UDungeonGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_Graph_MetaData), Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_Graph_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "Procedural Generation" },
		{ "EditCondition", "SeedType!=ESeedType::Random" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0040000000000021, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_Seed_MetaData), Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_Seed_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DoorList_Inner = { "DoorList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ADoor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DoorList_MetaData[] = {
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DoorList = { "DoorList", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, DoorList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DoorList_MetaData), Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DoorList_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_Generation_MetaData[] = {
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_Generation = { "Generation", nullptr, (EPropertyFlags)0x0040000000002020, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, Generation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_Generation_MetaData), Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_Generation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeonGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnPreGenerationEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnPostGenerationEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnGenerationInitEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnGenerationFailedEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnRoomAddedEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bUseGeneratorTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_GenerationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_GenerationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_SeedType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_SeedType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_SeedIncrement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_Graph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DoorList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DoorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_Generation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADungeonGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonGenerator_Statics::ClassParams = {
		&ADungeonGenerator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADungeonGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_ADungeonGenerator_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ADungeonGenerator()
	{
		if (!Z_Registration_Info_UClass_ADungeonGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonGenerator.OuterSingleton, Z_Construct_UClass_ADungeonGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADungeonGenerator.OuterSingleton;
	}
	template<> PROCEDURALDUNGEON_API UClass* StaticClass<ADungeonGenerator>()
	{
		return ADungeonGenerator::StaticClass();
	}

	void ADungeonGenerator::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Graph(TEXT("Graph"));
		static const FName Name_Seed(TEXT("Seed"));
		static const FName Name_Generation(TEXT("Generation"));

		const bool bIsValid = true
			&& Name_Graph == ClassReps[(int32)ENetFields_Private::Graph].Property->GetFName()
			&& Name_Seed == ClassReps[(int32)ENetFields_Private::Seed].Property->GetFName()
			&& Name_Generation == ClassReps[(int32)ENetFields_Private::Generation].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ADungeonGenerator"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonGenerator);
	ADungeonGenerator::~ADungeonGenerator() {}
	struct Z_CompiledInDeferFile_FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_Statics::EnumInfo[] = {
		{ EGenerationResult_StaticEnum, TEXT("EGenerationResult"), &Z_Registration_Info_UEnum_EGenerationResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3923506452U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADungeonGenerator, ADungeonGenerator::StaticClass, TEXT("ADungeonGenerator"), &Z_Registration_Info_UClass_ADungeonGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonGenerator), 3646960957U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_2658509469(TEXT("/Script/ProceduralDungeon"),
		Z_CompiledInDeferFile_FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
