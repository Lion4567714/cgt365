// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RoomData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDungeonGraph;
class URoom;
struct FDoorDef;
#ifdef PROCEDURALDUNGEON_RoomData_generated_h
#error "RoomData.generated.h already included, missing '#pragma once' in RoomData.h"
#endif
#define PROCEDURALDUNGEON_RoomData_generated_h

<<<<<<< Updated upstream
#define FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_50_SPARSE_DATA
#define FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_50_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_50_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
=======
#define FID_Unreal_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_50_SPARSE_DATA
#define FID_Unreal_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_50_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_50_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
>>>>>>> Stashed changes
	virtual void InitializeRoom_Implementation(URoom* Room, UDungeonGraph* Dungeon) const; \
 \
	DECLARE_FUNCTION(execInitializeRoom); \
	DECLARE_FUNCTION(execHasCompatibleDoor); \
	DECLARE_FUNCTION(execGetNbDoor);


<<<<<<< Updated upstream
#define FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_50_ACCESSORS
#define FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_50_CALLBACK_WRAPPERS
#define FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_50_INCLASS_NO_PURE_DECLS \
=======
#define FID_Unreal_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_50_ACCESSORS
#define FID_Unreal_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_50_CALLBACK_WRAPPERS
#define FID_Unreal_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_50_INCLASS_NO_PURE_DECLS \
>>>>>>> Stashed changes
private: \
	static void StaticRegisterNativesURoomData(); \
	friend struct Z_Construct_UClass_URoomData_Statics; \
public: \
	DECLARE_CLASS(URoomData, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), NO_API) \
	DECLARE_SERIALIZER(URoomData)


<<<<<<< Updated upstream
#define FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_50_ENHANCED_CONSTRUCTORS \
=======
#define FID_Unreal_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_50_ENHANCED_CONSTRUCTORS \
>>>>>>> Stashed changes
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URoomData(URoomData&&); \
	NO_API URoomData(const URoomData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoomData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoomData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URoomData) \
	NO_API virtual ~URoomData();


<<<<<<< Updated upstream
#define FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_47_PROLOG
#define FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_50_SPARSE_DATA \
	FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_50_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_50_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_50_ACCESSORS \
	FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_50_CALLBACK_WRAPPERS \
	FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_50_INCLASS_NO_PURE_DECLS \
	FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_50_ENHANCED_CONSTRUCTORS \
=======
#define FID_Unreal_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_47_PROLOG
#define FID_Unreal_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_50_SPARSE_DATA \
	FID_Unreal_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_50_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_50_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_50_ACCESSORS \
	FID_Unreal_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_50_CALLBACK_WRAPPERS \
	FID_Unreal_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_50_INCLASS_NO_PURE_DECLS \
	FID_Unreal_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_50_ENHANCED_CONSTRUCTORS \
>>>>>>> Stashed changes
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALDUNGEON_API UClass* StaticClass<class URoomData>();

#undef CURRENT_FILE_ID
<<<<<<< Updated upstream
#define CURRENT_FILE_ID FID_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h
=======
#define CURRENT_FILE_ID FID_Unreal_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h
>>>>>>> Stashed changes


PRAGMA_ENABLE_DEPRECATION_WARNINGS
