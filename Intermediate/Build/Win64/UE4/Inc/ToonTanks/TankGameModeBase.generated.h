// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOONTANKS_TankGameModeBase_generated_h
#error "TankGameModeBase.generated.h already included, missing '#pragma once' in TankGameModeBase.h"
#endif
#define TOONTANKS_TankGameModeBase_generated_h

#define ToonTanks_Source_ToonTanks_GameModes_TankGameModeBase_h_16_SPARSE_DATA
#define ToonTanks_Source_ToonTanks_GameModes_TankGameModeBase_h_16_RPC_WRAPPERS
#define ToonTanks_Source_ToonTanks_GameModes_TankGameModeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define ToonTanks_Source_ToonTanks_GameModes_TankGameModeBase_h_16_EVENT_PARMS \
	struct TankGameModeBase_eventGameOver_Parms \
	{ \
		bool PlayerWon; \
	};


#define ToonTanks_Source_ToonTanks_GameModes_TankGameModeBase_h_16_CALLBACK_WRAPPERS
#define ToonTanks_Source_ToonTanks_GameModes_TankGameModeBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATankGameModeBase(); \
	friend struct Z_Construct_UClass_ATankGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ATankGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(ATankGameModeBase)


#define ToonTanks_Source_ToonTanks_GameModes_TankGameModeBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesATankGameModeBase(); \
	friend struct Z_Construct_UClass_ATankGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ATankGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(ATankGameModeBase)


#define ToonTanks_Source_ToonTanks_GameModes_TankGameModeBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankGameModeBase(ATankGameModeBase&&); \
	NO_API ATankGameModeBase(const ATankGameModeBase&); \
public:


#define ToonTanks_Source_ToonTanks_GameModes_TankGameModeBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankGameModeBase(ATankGameModeBase&&); \
	NO_API ATankGameModeBase(const ATankGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankGameModeBase)


#define ToonTanks_Source_ToonTanks_GameModes_TankGameModeBase_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StartDelay() { return STRUCT_OFFSET(ATankGameModeBase, StartDelay); }


#define ToonTanks_Source_ToonTanks_GameModes_TankGameModeBase_h_13_PROLOG \
	ToonTanks_Source_ToonTanks_GameModes_TankGameModeBase_h_16_EVENT_PARMS


#define ToonTanks_Source_ToonTanks_GameModes_TankGameModeBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTanks_Source_ToonTanks_GameModes_TankGameModeBase_h_16_PRIVATE_PROPERTY_OFFSET \
	ToonTanks_Source_ToonTanks_GameModes_TankGameModeBase_h_16_SPARSE_DATA \
	ToonTanks_Source_ToonTanks_GameModes_TankGameModeBase_h_16_RPC_WRAPPERS \
	ToonTanks_Source_ToonTanks_GameModes_TankGameModeBase_h_16_CALLBACK_WRAPPERS \
	ToonTanks_Source_ToonTanks_GameModes_TankGameModeBase_h_16_INCLASS \
	ToonTanks_Source_ToonTanks_GameModes_TankGameModeBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ToonTanks_Source_ToonTanks_GameModes_TankGameModeBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTanks_Source_ToonTanks_GameModes_TankGameModeBase_h_16_PRIVATE_PROPERTY_OFFSET \
	ToonTanks_Source_ToonTanks_GameModes_TankGameModeBase_h_16_SPARSE_DATA \
	ToonTanks_Source_ToonTanks_GameModes_TankGameModeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ToonTanks_Source_ToonTanks_GameModes_TankGameModeBase_h_16_CALLBACK_WRAPPERS \
	ToonTanks_Source_ToonTanks_GameModes_TankGameModeBase_h_16_INCLASS_NO_PURE_DECLS \
	ToonTanks_Source_ToonTanks_GameModes_TankGameModeBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOONTANKS_API UClass* StaticClass<class ATankGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ToonTanks_Source_ToonTanks_GameModes_TankGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
