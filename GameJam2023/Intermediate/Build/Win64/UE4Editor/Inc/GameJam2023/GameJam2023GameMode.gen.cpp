// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameJam2023/GameJam2023GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameJam2023GameMode() {}
// Cross Module References
	GAMEJAM2023_API UClass* Z_Construct_UClass_AGameJam2023GameMode_NoRegister();
	GAMEJAM2023_API UClass* Z_Construct_UClass_AGameJam2023GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GameJam2023();
// End Cross Module References
	void AGameJam2023GameMode::StaticRegisterNativesAGameJam2023GameMode()
	{
	}
	UClass* Z_Construct_UClass_AGameJam2023GameMode_NoRegister()
	{
		return AGameJam2023GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGameJam2023GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameJam2023GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameJam2023,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameJam2023GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameJam2023GameMode.h" },
		{ "ModuleRelativePath", "GameJam2023GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameJam2023GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameJam2023GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameJam2023GameMode_Statics::ClassParams = {
		&AGameJam2023GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGameJam2023GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameJam2023GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameJam2023GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameJam2023GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameJam2023GameMode, 4229057348);
	template<> GAMEJAM2023_API UClass* StaticClass<AGameJam2023GameMode>()
	{
		return AGameJam2023GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameJam2023GameMode(Z_Construct_UClass_AGameJam2023GameMode, &AGameJam2023GameMode::StaticClass, TEXT("/Script/GameJam2023"), TEXT("AGameJam2023GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameJam2023GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
