// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToonTanks/Pawns/PawnTurret.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnTurret() {}
// Cross Module References
	TOONTANKS_API UClass* Z_Construct_UClass_APawnTurret_NoRegister();
	TOONTANKS_API UClass* Z_Construct_UClass_APawnTurret();
	TOONTANKS_API UClass* Z_Construct_UClass_APawnBase();
	UPackage* Z_Construct_UPackage__Script_ToonTanks();
// End Cross Module References
	void APawnTurret::StaticRegisterNativesAPawnTurret()
	{
	}
	UClass* Z_Construct_UClass_APawnTurret_NoRegister()
	{
		return APawnTurret::StaticClass();
	}
	struct Z_Construct_UClass_APawnTurret_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APawnTurret_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawnBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ToonTanks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnTurret_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Pawns/PawnTurret.h" },
		{ "ModuleRelativePath", "Pawns/PawnTurret.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnTurret_Statics::NewProp_FireRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Pawns/PawnTurret.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APawnTurret_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APawnTurret, FireRate), METADATA_PARAMS(Z_Construct_UClass_APawnTurret_Statics::NewProp_FireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawnTurret_Statics::NewProp_FireRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APawnTurret_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnTurret_Statics::NewProp_FireRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APawnTurret_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APawnTurret>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APawnTurret_Statics::ClassParams = {
		&APawnTurret::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APawnTurret_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APawnTurret_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APawnTurret_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APawnTurret_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APawnTurret()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APawnTurret_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APawnTurret, 2604342208);
	template<> TOONTANKS_API UClass* StaticClass<APawnTurret>()
	{
		return APawnTurret::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APawnTurret(Z_Construct_UClass_APawnTurret, &APawnTurret::StaticClass, TEXT("/Script/ToonTanks"), TEXT("APawnTurret"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APawnTurret);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
