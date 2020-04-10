// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MazeShooter/MazeShooterGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMazeShooterGameState() {}
// Cross Module References
	MAZESHOOTER_API UClass* Z_Construct_UClass_AMazeShooterGameState_NoRegister();
	MAZESHOOTER_API UClass* Z_Construct_UClass_AMazeShooterGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_MazeShooter();
// End Cross Module References
	void AMazeShooterGameState::StaticRegisterNativesAMazeShooterGameState()
	{
	}
	UClass* Z_Construct_UClass_AMazeShooterGameState_NoRegister()
	{
		return AMazeShooterGameState::StaticClass();
	}
	struct Z_Construct_UClass_AMazeShooterGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMazeShooterGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MazeShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeShooterGameState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MazeShooterGameState.h" },
		{ "ModuleRelativePath", "MazeShooterGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMazeShooterGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMazeShooterGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMazeShooterGameState_Statics::ClassParams = {
		&AMazeShooterGameState::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMazeShooterGameState_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMazeShooterGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMazeShooterGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMazeShooterGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMazeShooterGameState, 3419810195);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMazeShooterGameState(Z_Construct_UClass_AMazeShooterGameState, &AMazeShooterGameState::StaticClass, TEXT("/Script/MazeShooter"), TEXT("AMazeShooterGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMazeShooterGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
