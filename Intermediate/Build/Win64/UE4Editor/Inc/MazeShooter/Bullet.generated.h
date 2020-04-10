// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAZESHOOTER_Bullet_generated_h
#error "Bullet.generated.h already included, missing '#pragma once' in Bullet.h"
#endif
#define MAZESHOOTER_Bullet_generated_h

#define MazeShooter_Source_MazeShooter_Bullet_h_12_RPC_WRAPPERS
#define MazeShooter_Source_MazeShooter_Bullet_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MazeShooter_Source_MazeShooter_Bullet_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABullet(); \
	friend struct Z_Construct_UClass_ABullet_Statics; \
public: \
	DECLARE_CLASS(ABullet, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MazeShooter"), NO_API) \
	DECLARE_SERIALIZER(ABullet)


#define MazeShooter_Source_MazeShooter_Bullet_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABullet(); \
	friend struct Z_Construct_UClass_ABullet_Statics; \
public: \
	DECLARE_CLASS(ABullet, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MazeShooter"), NO_API) \
	DECLARE_SERIALIZER(ABullet)


#define MazeShooter_Source_MazeShooter_Bullet_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABullet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABullet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABullet(ABullet&&); \
	NO_API ABullet(const ABullet&); \
public:


#define MazeShooter_Source_MazeShooter_Bullet_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABullet(ABullet&&); \
	NO_API ABullet(const ABullet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABullet)


#define MazeShooter_Source_MazeShooter_Bullet_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BulletMesh() { return STRUCT_OFFSET(ABullet, BulletMesh); } \
	FORCEINLINE static uint32 __PPO__BulletMovement() { return STRUCT_OFFSET(ABullet, BulletMovement); }


#define MazeShooter_Source_MazeShooter_Bullet_h_9_PROLOG
#define MazeShooter_Source_MazeShooter_Bullet_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MazeShooter_Source_MazeShooter_Bullet_h_12_PRIVATE_PROPERTY_OFFSET \
	MazeShooter_Source_MazeShooter_Bullet_h_12_RPC_WRAPPERS \
	MazeShooter_Source_MazeShooter_Bullet_h_12_INCLASS \
	MazeShooter_Source_MazeShooter_Bullet_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MazeShooter_Source_MazeShooter_Bullet_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MazeShooter_Source_MazeShooter_Bullet_h_12_PRIVATE_PROPERTY_OFFSET \
	MazeShooter_Source_MazeShooter_Bullet_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MazeShooter_Source_MazeShooter_Bullet_h_12_INCLASS_NO_PURE_DECLS \
	MazeShooter_Source_MazeShooter_Bullet_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MazeShooter_Source_MazeShooter_Bullet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
