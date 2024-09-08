// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RoomVisibilityComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ARoomLevel;
enum class EVisibilityMode : uint8;
#ifdef PROCEDURALDUNGEON_RoomVisibilityComponent_generated_h
#error "RoomVisibilityComponent.generated.h already included, missing '#pragma once' in RoomVisibilityComponent.h"
#endif
#define PROCEDURALDUNGEON_RoomVisibilityComponent_generated_h

#define FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h_42_DELEGATE \
PROCEDURALDUNGEON_API void FRoomVisibilityEvent_DelegateWrapper(const FMulticastScriptDelegate& RoomVisibilityEvent, AActor* Actor, bool IsInVisibleRoom);


#define FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h_47_SPARSE_DATA
#define FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h_47_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h_47_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRoomVisibilityChanged); \
	DECLARE_FUNCTION(execGetVisibilityMode); \
	DECLARE_FUNCTION(execSetVisibilityMode); \
	DECLARE_FUNCTION(execIsVisible);


#define FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h_47_ACCESSORS
#define FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURoomVisibilityComponent(); \
	friend struct Z_Construct_UClass_URoomVisibilityComponent_Statics; \
public: \
	DECLARE_CLASS(URoomVisibilityComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), NO_API) \
	DECLARE_SERIALIZER(URoomVisibilityComponent) \
	virtual UObject* _getUObject() const override { return const_cast<URoomVisibilityComponent*>(this); }


#define FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h_47_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URoomVisibilityComponent(URoomVisibilityComponent&&); \
	NO_API URoomVisibilityComponent(const URoomVisibilityComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoomVisibilityComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoomVisibilityComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URoomVisibilityComponent) \
	NO_API virtual ~URoomVisibilityComponent();


#define FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h_44_PROLOG
#define FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h_47_SPARSE_DATA \
	FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h_47_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h_47_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h_47_ACCESSORS \
	FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h_47_INCLASS_NO_PURE_DECLS \
	FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALDUNGEON_API UClass* StaticClass<class URoomVisibilityComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h


#define FOREACH_ENUM_EVISIBILITYMODE(op) \
	op(EVisibilityMode::Default) \
	op(EVisibilityMode::ForceVisible) \
	op(EVisibilityMode::ForceHidden) \
	op(EVisibilityMode::Custom) \
	op(EVisibilityMode::NbMode) 

enum class EVisibilityMode : uint8;
template<> struct TIsUEnumClass<EVisibilityMode> { enum { Value = true }; };
template<> PROCEDURALDUNGEON_API UEnum* StaticEnum<EVisibilityMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
