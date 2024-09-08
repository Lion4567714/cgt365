// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Room.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADoor;
class URoomCustomData;
class URoomData;
struct FRandomStream;
#ifdef PROCEDURALDUNGEON_Room_generated_h
#error "Room.generated.h already included, missing '#pragma once' in Room.h"
#endif
#define PROCEDURALDUNGEON_Room_generated_h

#define FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRoomConnection_Statics; \
	PROCEDURALDUNGEON_API static class UScriptStruct* StaticStruct();


template<> PROCEDURALDUNGEON_API UScriptStruct* StaticStruct<struct FRoomConnection>();

#define FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCustomDataPair_Statics; \
	PROCEDURALDUNGEON_API static class UScriptStruct* StaticStruct();


template<> PROCEDURALDUNGEON_API UScriptStruct* StaticStruct<struct FCustomDataPair>();

#define FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_65_SPARSE_DATA
#define FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_65_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_65_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnInstanceLoaded); \
	DECLARE_FUNCTION(execOnRep_IsLocked); \
	DECLARE_FUNCTION(execGetAllDoors); \
	DECLARE_FUNCTION(execGetDoor); \
	DECLARE_FUNCTION(execGetRandomStream); \
	DECLARE_FUNCTION(execHasCustomData_BP); \
	DECLARE_FUNCTION(execGetCustomData_BP); \
	DECLARE_FUNCTION(execLock); \
	DECLARE_FUNCTION(execIsLocked); \
	DECLARE_FUNCTION(execIsVisible); \
	DECLARE_FUNCTION(execIsPlayerInside); \
	DECLARE_FUNCTION(execGetRoomData);


#define FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_65_ACCESSORS
#define FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURoom(); \
	friend struct Z_Construct_UClass_URoom_Statics; \
public: \
	DECLARE_CLASS(URoom, UReplicableObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), NO_API) \
	DECLARE_SERIALIZER(URoom) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Position=NETFIELD_REP_START, \
		Direction, \
		RoomData, \
		CustomData, \
		Connections, \
		GeneratorOwner, \
		Id, \
		bIsLocked, \
		NETFIELD_REP_END=bIsLocked	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(URoom) \
public:


#define FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_65_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URoom(URoom&&); \
	NO_API URoom(const URoom&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoom); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URoom) \
	NO_API virtual ~URoom();


#define FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_62_PROLOG
#define FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_65_SPARSE_DATA \
	FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_65_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_65_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_65_ACCESSORS \
	FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_65_INCLASS_NO_PURE_DECLS \
	FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALDUNGEON_API UClass* StaticClass<class URoom>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
