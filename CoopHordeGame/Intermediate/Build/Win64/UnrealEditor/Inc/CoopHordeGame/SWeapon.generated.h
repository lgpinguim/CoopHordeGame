// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPHORDEGAME_SWeapon_generated_h
#error "SWeapon.generated.h already included, missing '#pragma once' in SWeapon.h"
#endif
#define COOPHORDEGAME_SWeapon_generated_h

#define FID_CoopHordeGame_Source_CoopHordeGame_Public_SWeapon_h_14_SPARSE_DATA
#define FID_CoopHordeGame_Source_CoopHordeGame_Public_SWeapon_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFire);


#define FID_CoopHordeGame_Source_CoopHordeGame_Public_SWeapon_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire);


#define FID_CoopHordeGame_Source_CoopHordeGame_Public_SWeapon_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASWeapon(); \
	friend struct Z_Construct_UClass_ASWeapon_Statics; \
public: \
	DECLARE_CLASS(ASWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopHordeGame"), NO_API) \
	DECLARE_SERIALIZER(ASWeapon)


#define FID_CoopHordeGame_Source_CoopHordeGame_Public_SWeapon_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASWeapon(); \
	friend struct Z_Construct_UClass_ASWeapon_Statics; \
public: \
	DECLARE_CLASS(ASWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopHordeGame"), NO_API) \
	DECLARE_SERIALIZER(ASWeapon)


#define FID_CoopHordeGame_Source_CoopHordeGame_Public_SWeapon_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASWeapon(ASWeapon&&); \
	NO_API ASWeapon(const ASWeapon&); \
public:


#define FID_CoopHordeGame_Source_CoopHordeGame_Public_SWeapon_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASWeapon(ASWeapon&&); \
	NO_API ASWeapon(const ASWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASWeapon)


#define FID_CoopHordeGame_Source_CoopHordeGame_Public_SWeapon_h_11_PROLOG
#define FID_CoopHordeGame_Source_CoopHordeGame_Public_SWeapon_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CoopHordeGame_Source_CoopHordeGame_Public_SWeapon_h_14_SPARSE_DATA \
	FID_CoopHordeGame_Source_CoopHordeGame_Public_SWeapon_h_14_RPC_WRAPPERS \
	FID_CoopHordeGame_Source_CoopHordeGame_Public_SWeapon_h_14_INCLASS \
	FID_CoopHordeGame_Source_CoopHordeGame_Public_SWeapon_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CoopHordeGame_Source_CoopHordeGame_Public_SWeapon_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CoopHordeGame_Source_CoopHordeGame_Public_SWeapon_h_14_SPARSE_DATA \
	FID_CoopHordeGame_Source_CoopHordeGame_Public_SWeapon_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CoopHordeGame_Source_CoopHordeGame_Public_SWeapon_h_14_INCLASS_NO_PURE_DECLS \
	FID_CoopHordeGame_Source_CoopHordeGame_Public_SWeapon_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPHORDEGAME_API UClass* StaticClass<class ASWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CoopHordeGame_Source_CoopHordeGame_Public_SWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
