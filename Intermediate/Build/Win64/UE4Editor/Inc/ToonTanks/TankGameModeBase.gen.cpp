// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToonTanks/GameModes/TankGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankGameModeBase() {}
// Cross Module References
	TOONTANKS_API UClass* Z_Construct_UClass_ATankGameModeBase_NoRegister();
	TOONTANKS_API UClass* Z_Construct_UClass_ATankGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ToonTanks();
// End Cross Module References
	static FName NAME_ATankGameModeBase_GameOver = FName(TEXT("GameOver"));
	void ATankGameModeBase::GameOver(bool PlayerWon)
	{
		TankGameModeBase_eventGameOver_Parms Parms;
		Parms.PlayerWon=PlayerWon ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ATankGameModeBase_GameOver),&Parms);
	}
	static FName NAME_ATankGameModeBase_GameStart = FName(TEXT("GameStart"));
	void ATankGameModeBase::GameStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATankGameModeBase_GameStart),NULL);
	}
	void ATankGameModeBase::StaticRegisterNativesATankGameModeBase()
	{
	}
	struct Z_Construct_UFunction_ATankGameModeBase_GameOver_Statics
	{
		static void NewProp_PlayerWon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PlayerWon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATankGameModeBase_GameOver_Statics::NewProp_PlayerWon_SetBit(void* Obj)
	{
		((TankGameModeBase_eventGameOver_Parms*)Obj)->PlayerWon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATankGameModeBase_GameOver_Statics::NewProp_PlayerWon = { "PlayerWon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TankGameModeBase_eventGameOver_Parms), &Z_Construct_UFunction_ATankGameModeBase_GameOver_Statics::NewProp_PlayerWon_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATankGameModeBase_GameOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATankGameModeBase_GameOver_Statics::NewProp_PlayerWon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankGameModeBase_GameOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameModes/TankGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankGameModeBase_GameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankGameModeBase, nullptr, "GameOver", nullptr, nullptr, sizeof(TankGameModeBase_eventGameOver_Parms), Z_Construct_UFunction_ATankGameModeBase_GameOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankGameModeBase_GameOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankGameModeBase_GameOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankGameModeBase_GameOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankGameModeBase_GameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATankGameModeBase_GameOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATankGameModeBase_GameStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankGameModeBase_GameStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameModes/TankGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankGameModeBase_GameStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankGameModeBase, nullptr, "GameStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankGameModeBase_GameStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankGameModeBase_GameStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankGameModeBase_GameStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATankGameModeBase_GameStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATankGameModeBase_NoRegister()
	{
		return ATankGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATankGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATankGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ToonTanks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATankGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATankGameModeBase_GameOver, "GameOver" }, // 2062794421
		{ &Z_Construct_UFunction_ATankGameModeBase_GameStart, "GameStart" }, // 3392429467
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameModes/TankGameModeBase.h" },
		{ "ModuleRelativePath", "GameModes/TankGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATankGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATankGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATankGameModeBase_Statics::ClassParams = {
		&ATankGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATankGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATankGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATankGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATankGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATankGameModeBase, 2487911081);
	template<> TOONTANKS_API UClass* StaticClass<ATankGameModeBase>()
	{
		return ATankGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATankGameModeBase(Z_Construct_UClass_ATankGameModeBase, &ATankGameModeBase::StaticClass, TEXT("/Script/ToonTanks"), TEXT("ATankGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
