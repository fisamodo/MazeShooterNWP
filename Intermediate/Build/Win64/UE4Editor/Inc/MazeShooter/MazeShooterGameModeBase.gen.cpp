// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MazeShooter/MazeShooterGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMazeShooterGameModeBase() {}
// Cross Module References
	MAZESHOOTER_API UClass* Z_Construct_UClass_AMazeShooterGameModeBase_NoRegister();
	MAZESHOOTER_API UClass* Z_Construct_UClass_AMazeShooterGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MazeShooter();
// End Cross Module References
	void AMazeShooterGameModeBase::StaticRegisterNativesAMazeShooterGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AMazeShooterGameModeBase_NoRegister()
	{
		return AMazeShooterGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMazeShooterGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointsToWin_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointsToWin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMazeShooterGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MazeShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeShooterGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MazeShooterGameModeBase.h" },
		{ "ModuleRelativePath", "MazeShooterGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeShooterGameModeBase_Statics::NewProp_PointsToWin_MetaData[] = {
		{ "Category", "Game Rules" },
		{ "ModuleRelativePath", "MazeShooterGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMazeShooterGameModeBase_Statics::NewProp_PointsToWin = { UE4CodeGen_Private::EPropertyClass::Int, "PointsToWin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AMazeShooterGameModeBase, PointsToWin), METADATA_PARAMS(Z_Construct_UClass_AMazeShooterGameModeBase_Statics::NewProp_PointsToWin_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMazeShooterGameModeBase_Statics::NewProp_PointsToWin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMazeShooterGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeShooterGameModeBase_Statics::NewProp_PointsToWin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMazeShooterGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMazeShooterGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMazeShooterGameModeBase_Statics::ClassParams = {
		&AMazeShooterGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		Z_Construct_UClass_AMazeShooterGameModeBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMazeShooterGameModeBase_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMazeShooterGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMazeShooterGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMazeShooterGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMazeShooterGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMazeShooterGameModeBase, 177610671);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMazeShooterGameModeBase(Z_Construct_UClass_AMazeShooterGameModeBase, &AMazeShooterGameModeBase::StaticClass, TEXT("/Script/MazeShooter"), TEXT("AMazeShooterGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMazeShooterGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
