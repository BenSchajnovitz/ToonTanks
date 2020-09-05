// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOONTANKS_PawnTank_generated_h
#error "PawnTank.generated.h already included, missing '#pragma once' in PawnTank.h"
#endif
#define TOONTANKS_PawnTank_generated_h

#define ToonTanks_Source_ToonTanks_Pawns_PawnTank_h_15_SPARSE_DATA
#define ToonTanks_Source_ToonTanks_Pawns_PawnTank_h_15_RPC_WRAPPERS
#define ToonTanks_Source_ToonTanks_Pawns_PawnTank_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ToonTanks_Source_ToonTanks_Pawns_PawnTank_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPawnTank(); \
	friend struct Z_Construct_UClass_APawnTank_Statics; \
public: \
	DECLARE_CLASS(APawnTank, APawnBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(APawnTank)


#define ToonTanks_Source_ToonTanks_Pawns_PawnTank_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPawnTank(); \
	friend struct Z_Construct_UClass_APawnTank_Statics; \
public: \
	DECLARE_CLASS(APawnTank, APawnBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(APawnTank)


#define ToonTanks_Source_ToonTanks_Pawns_PawnTank_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APawnTank(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APawnTank) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APawnTank); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APawnTank); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APawnTank(APawnTank&&); \
	NO_API APawnTank(const APawnTank&); \
public:


#define ToonTanks_Source_ToonTanks_Pawns_PawnTank_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APawnTank(APawnTank&&); \
	NO_API APawnTank(const APawnTank&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APawnTank); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APawnTank); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APawnTank)


#define ToonTanks_Source_ToonTanks_Pawns_PawnTank_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArmComp() { return STRUCT_OFFSET(APawnTank, SpringArmComp); } \
	FORCEINLINE static uint32 __PPO__CameraComp() { return STRUCT_OFFSET(APawnTank, CameraComp); } \
	FORCEINLINE static uint32 __PPO__MoveSpeed() { return STRUCT_OFFSET(APawnTank, MoveSpeed); } \
	FORCEINLINE static uint32 __PPO__RotateSpeed() { return STRUCT_OFFSET(APawnTank, RotateSpeed); }


#define ToonTanks_Source_ToonTanks_Pawns_PawnTank_h_12_PROLOG
#define ToonTanks_Source_ToonTanks_Pawns_PawnTank_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTanks_Source_ToonTanks_Pawns_PawnTank_h_15_PRIVATE_PROPERTY_OFFSET \
	ToonTanks_Source_ToonTanks_Pawns_PawnTank_h_15_SPARSE_DATA \
	ToonTanks_Source_ToonTanks_Pawns_PawnTank_h_15_RPC_WRAPPERS \
	ToonTanks_Source_ToonTanks_Pawns_PawnTank_h_15_INCLASS \
	ToonTanks_Source_ToonTanks_Pawns_PawnTank_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ToonTanks_Source_ToonTanks_Pawns_PawnTank_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTanks_Source_ToonTanks_Pawns_PawnTank_h_15_PRIVATE_PROPERTY_OFFSET \
	ToonTanks_Source_ToonTanks_Pawns_PawnTank_h_15_SPARSE_DATA \
	ToonTanks_Source_ToonTanks_Pawns_PawnTank_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ToonTanks_Source_ToonTanks_Pawns_PawnTank_h_15_INCLASS_NO_PURE_DECLS \
	ToonTanks_Source_ToonTanks_Pawns_PawnTank_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOONTANKS_API UClass* StaticClass<class APawnTank>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ToonTanks_Source_ToonTanks_Pawns_PawnTank_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
