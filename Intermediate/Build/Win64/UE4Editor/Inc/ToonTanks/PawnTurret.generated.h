// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOONTANKS_PawnTurret_generated_h
#error "PawnTurret.generated.h already included, missing '#pragma once' in PawnTurret.h"
#endif
#define TOONTANKS_PawnTurret_generated_h

#define ToonTanks_Source_ToonTanks_Pawns_PawnTurret_h_14_SPARSE_DATA
#define ToonTanks_Source_ToonTanks_Pawns_PawnTurret_h_14_RPC_WRAPPERS
#define ToonTanks_Source_ToonTanks_Pawns_PawnTurret_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define ToonTanks_Source_ToonTanks_Pawns_PawnTurret_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPawnTurret(); \
	friend struct Z_Construct_UClass_APawnTurret_Statics; \
public: \
	DECLARE_CLASS(APawnTurret, APawnBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(APawnTurret)


#define ToonTanks_Source_ToonTanks_Pawns_PawnTurret_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPawnTurret(); \
	friend struct Z_Construct_UClass_APawnTurret_Statics; \
public: \
	DECLARE_CLASS(APawnTurret, APawnBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(APawnTurret)


#define ToonTanks_Source_ToonTanks_Pawns_PawnTurret_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APawnTurret(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APawnTurret) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APawnTurret); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APawnTurret); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APawnTurret(APawnTurret&&); \
	NO_API APawnTurret(const APawnTurret&); \
public:


#define ToonTanks_Source_ToonTanks_Pawns_PawnTurret_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APawnTurret() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APawnTurret(APawnTurret&&); \
	NO_API APawnTurret(const APawnTurret&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APawnTurret); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APawnTurret); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APawnTurret)


#define ToonTanks_Source_ToonTanks_Pawns_PawnTurret_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FireRate() { return STRUCT_OFFSET(APawnTurret, FireRate); } \
	FORCEINLINE static uint32 __PPO__FireRange() { return STRUCT_OFFSET(APawnTurret, FireRange); }


#define ToonTanks_Source_ToonTanks_Pawns_PawnTurret_h_11_PROLOG
#define ToonTanks_Source_ToonTanks_Pawns_PawnTurret_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTanks_Source_ToonTanks_Pawns_PawnTurret_h_14_PRIVATE_PROPERTY_OFFSET \
	ToonTanks_Source_ToonTanks_Pawns_PawnTurret_h_14_SPARSE_DATA \
	ToonTanks_Source_ToonTanks_Pawns_PawnTurret_h_14_RPC_WRAPPERS \
	ToonTanks_Source_ToonTanks_Pawns_PawnTurret_h_14_INCLASS \
	ToonTanks_Source_ToonTanks_Pawns_PawnTurret_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ToonTanks_Source_ToonTanks_Pawns_PawnTurret_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTanks_Source_ToonTanks_Pawns_PawnTurret_h_14_PRIVATE_PROPERTY_OFFSET \
	ToonTanks_Source_ToonTanks_Pawns_PawnTurret_h_14_SPARSE_DATA \
	ToonTanks_Source_ToonTanks_Pawns_PawnTurret_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ToonTanks_Source_ToonTanks_Pawns_PawnTurret_h_14_INCLASS_NO_PURE_DECLS \
	ToonTanks_Source_ToonTanks_Pawns_PawnTurret_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOONTANKS_API UClass* StaticClass<class APawnTurret>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ToonTanks_Source_ToonTanks_Pawns_PawnTurret_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
