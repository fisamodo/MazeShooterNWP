// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAZESHOOTER_Target_generated_h
#error "Target.generated.h already included, missing '#pragma once' in Target.h"
#endif
#define MAZESHOOTER_Target_generated_h

#define MazeShooter_Source_MazeShooter_Target_h_12_RPC_WRAPPERS
#define MazeShooter_Source_MazeShooter_Target_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MazeShooter_Source_MazeShooter_Target_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATarget(); \
	friend struct Z_Construct_UClass_ATarget_Statics; \
public: \
	DECLARE_CLASS(ATarget, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MazeShooter"), NO_API) \
	DECLARE_SERIALIZER(ATarget)


#define MazeShooter_Source_MazeShooter_Target_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATarget(); \
	friend struct Z_Construct_UClass_ATarget_Statics; \
public: \
	DECLARE_CLASS(ATarget, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MazeShooter"), NO_API) \
	DECLARE_SERIALIZER(ATarget)


#define MazeShooter_Source_MazeShooter_Target_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATarget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATarget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATarget(ATarget&&); \
	NO_API ATarget(const ATarget&); \
public:


#define MazeShooter_Source_MazeShooter_Target_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATarget(ATarget&&); \
	NO_API ATarget(const ATarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATarget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATarget)


#define MazeShooter_Source_MazeShooter_Target_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MoveScale() { return STRUCT_OFFSET(ATarget, MoveScale); }


#define MazeShooter_Source_MazeShooter_Target_h_9_PROLOG
#define MazeShooter_Source_MazeShooter_Target_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MazeShooter_Source_MazeShooter_Target_h_12_PRIVATE_PROPERTY_OFFSET \
	MazeShooter_Source_MazeShooter_Target_h_12_RPC_WRAPPERS \
	MazeShooter_Source_MazeShooter_Target_h_12_INCLASS \
	MazeShooter_Source_MazeShooter_Target_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MazeShooter_Source_MazeShooter_Target_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MazeShooter_Source_MazeShooter_Target_h_12_PRIVATE_PROPERTY_OFFSET \
	MazeShooter_Source_MazeShooter_Target_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MazeShooter_Source_MazeShooter_Target_h_12_INCLASS_NO_PURE_DECLS \
	MazeShooter_Source_MazeShooter_Target_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MazeShooter_Source_MazeShooter_Target_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
