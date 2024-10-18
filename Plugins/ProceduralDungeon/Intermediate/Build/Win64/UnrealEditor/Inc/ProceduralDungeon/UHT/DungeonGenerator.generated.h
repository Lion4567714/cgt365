// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DungeonGenerator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADoor;
class UDoorType;
class UDungeonGraph;
class URoomData;
struct FDoorDef;
struct FRandomStream;
#ifdef PROCEDURALDUNGEON_DungeonGenerator_generated_h
#error "DungeonGenerator.generated.h already included, missing '#pragma once' in DungeonGenerator.h"
#endif
#define PROCEDURALDUNGEON_DungeonGenerator_generated_h

#define FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_34_DELEGATE \
PROCEDURALDUNGEON_API void FGenerationEvent_DelegateWrapper(const FMulticastScriptDelegate& GenerationEvent);


#define FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_35_DELEGATE \
PROCEDURALDUNGEON_API void FRoomEvent_DelegateWrapper(const FMulticastScriptDelegate& RoomEvent, const URoomData* NewRoom);


#define FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_53_SPARSE_DATA
#define FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_53_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_53_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnRoomAdded_Implementation(const URoomData* NewRoom); \
	virtual void OnGenerationFailed_Implementation(); \
	virtual void OnGenerationInit_Implementation(); \
	virtual void OnPostGeneration_Implementation(); \
	virtual void OnPreGeneration_Implementation(); \
	virtual void InitializeDungeon_Implementation(const UDungeonGraph* Rooms); \
	virtual bool ContinueToAddRoom_Implementation(); \
	virtual bool IsValidDungeon_Implementation(); \
	virtual TSubclassOf<ADoor>  ChooseDoor_Implementation(const URoomData* CurrentRoom, const URoomData* NextRoom, const UDoorType* DoorType); \
	virtual URoomData* ChooseNextRoomData_Implementation(const URoomData* CurrentRoom, FDoorDef const& DoorData, int32& DoorIndex); \
	virtual URoomData* ChooseFirstRoomData_Implementation(); \
 \
	DECLARE_FUNCTION(execGetSeed); \
	DECLARE_FUNCTION(execSetSeed); \
	DECLARE_FUNCTION(execCreateDungeon); \
	DECLARE_FUNCTION(execGetRandomStream); \
	DECLARE_FUNCTION(execGetCompatibleRoomData); \
	DECLARE_FUNCTION(execGetNbRoom); \
	DECLARE_FUNCTION(execGetRandomRoomData); \
	DECLARE_FUNCTION(execCountTotalRoomType); \
	DECLARE_FUNCTION(execCountRoomType); \
	DECLARE_FUNCTION(execHasAlreadyOneRoomTypeFrom); \
	DECLARE_FUNCTION(execHasAlreadyRoomType); \
	DECLARE_FUNCTION(execCountTotalRoomData); \
	DECLARE_FUNCTION(execCountRoomData); \
	DECLARE_FUNCTION(execHasAlreadyOneRoomDataFrom); \
	DECLARE_FUNCTION(execHasAlreadyRoomData); \
	DECLARE_FUNCTION(execOnRoomAdded); \
	DECLARE_FUNCTION(execOnGenerationFailed); \
	DECLARE_FUNCTION(execOnGenerationInit); \
	DECLARE_FUNCTION(execOnPostGeneration); \
	DECLARE_FUNCTION(execOnPreGeneration); \
	DECLARE_FUNCTION(execInitializeDungeon); \
	DECLARE_FUNCTION(execContinueToAddRoom); \
	DECLARE_FUNCTION(execIsValidDungeon); \
	DECLARE_FUNCTION(execChooseDoor); \
	DECLARE_FUNCTION(execChooseNextRoomData); \
	DECLARE_FUNCTION(execChooseFirstRoomData); \
	DECLARE_FUNCTION(execUnload); \
	DECLARE_FUNCTION(execGenerate);


#define FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_53_ACCESSORS
#define FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_53_CALLBACK_WRAPPERS
#define FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADungeonGenerator(); \
	friend struct Z_Construct_UClass_ADungeonGenerator_Statics; \
public: \
	DECLARE_CLASS(ADungeonGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), NO_API) \
	DECLARE_SERIALIZER(ADungeonGenerator) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Graph=NETFIELD_REP_START, \
		Seed, \
		Generation, \
		NETFIELD_REP_END=Generation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_53_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADungeonGenerator(ADungeonGenerator&&); \
	NO_API ADungeonGenerator(const ADungeonGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeonGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeonGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADungeonGenerator) \
	NO_API virtual ~ADungeonGenerator();


#define FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_50_PROLOG
#define FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_53_SPARSE_DATA \
	FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_53_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_53_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_53_ACCESSORS \
	FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_53_CALLBACK_WRAPPERS \
	FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_53_INCLASS_NO_PURE_DECLS \
	FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALDUNGEON_API UClass* StaticClass<class ADungeonGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h


#define FOREACH_ENUM_EGENERATIONRESULT(op) \
	op(EGenerationResult::None) \
	op(EGenerationResult::Error) \
	op(EGenerationResult::Success) 

enum class EGenerationResult : uint8;
template<> struct TIsUEnumClass<EGenerationResult> { enum { Value = true }; };
template<> PROCEDURALDUNGEON_API UEnum* StaticEnum<EGenerationResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
