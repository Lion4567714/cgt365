// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TriggerType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PROCEDURALDUNGEON_TriggerType_generated_h
#error "TriggerType.generated.h already included, missing '#pragma once' in TriggerType.h"
#endif
#define PROCEDURALDUNGEON_TriggerType_generated_h

#define FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_32_DELEGATE \
PROCEDURALDUNGEON_API void FTriggerEvent_DelegateWrapper(const FMulticastScriptDelegate& TriggerEvent, AActor* Actor);


#define FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_33_DELEGATE \
PROCEDURALDUNGEON_API void FTriggerArrayEvent_DelegateWrapper(const FMulticastScriptDelegate& TriggerArrayEvent, const TArray<AActor*>& Actor);


#define FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_38_SPARSE_DATA
#define FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_38_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_38_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTriggerDeactivate); \
	DECLARE_FUNCTION(execTriggerActivate); \
	DECLARE_FUNCTION(execTriggerTick); \
	DECLARE_FUNCTION(execOnTriggerExit); \
	DECLARE_FUNCTION(execOnTriggerEnter); \
	DECLARE_FUNCTION(execGetActorList); \
	DECLARE_FUNCTION(execIsActivated);


#define FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_38_ACCESSORS
#define FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriggerType(); \
	friend struct Z_Construct_UClass_UTriggerType_Statics; \
public: \
	DECLARE_CLASS(UTriggerType, UBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), NO_API) \
	DECLARE_SERIALIZER(UTriggerType)


#define FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerType(UTriggerType&&); \
	NO_API UTriggerType(const UTriggerType&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerType); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTriggerType) \
	NO_API virtual ~UTriggerType();


#define FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_35_PROLOG
#define FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_38_SPARSE_DATA \
	FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_38_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_38_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_38_ACCESSORS \
	FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_38_INCLASS_NO_PURE_DECLS \
	FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALDUNGEON_API UClass* StaticClass<class UTriggerType>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_pc_Documents_GitHub_cgt365_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerType_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
