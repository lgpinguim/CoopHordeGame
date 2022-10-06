// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopHordeGame/Public/SProjectileWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSProjectileWeapon() {}
// Cross Module References
	COOPHORDEGAME_API UClass* Z_Construct_UClass_ASProjectileWeapon_NoRegister();
	COOPHORDEGAME_API UClass* Z_Construct_UClass_ASProjectileWeapon();
	COOPHORDEGAME_API UClass* Z_Construct_UClass_ASWeapon();
	UPackage* Z_Construct_UPackage__Script_CoopHordeGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ASProjectileWeapon::StaticRegisterNativesASProjectileWeapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASProjectileWeapon);
	UClass* Z_Construct_UClass_ASProjectileWeapon_NoRegister()
	{
		return ASProjectileWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ASProjectileWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASProjectileWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopHordeGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASProjectileWeapon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SProjectileWeapon.h" },
		{ "ModuleRelativePath", "Public/SProjectileWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASProjectileWeapon_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "ProjectileWeapon" },
		{ "ModuleRelativePath", "Public/SProjectileWeapon.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASProjectileWeapon_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASProjectileWeapon, ProjectileClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASProjectileWeapon_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASProjectileWeapon_Statics::NewProp_ProjectileClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASProjectileWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASProjectileWeapon_Statics::NewProp_ProjectileClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASProjectileWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASProjectileWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASProjectileWeapon_Statics::ClassParams = {
		&ASProjectileWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASProjectileWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASProjectileWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASProjectileWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASProjectileWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASProjectileWeapon()
	{
		if (!Z_Registration_Info_UClass_ASProjectileWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASProjectileWeapon.OuterSingleton, Z_Construct_UClass_ASProjectileWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASProjectileWeapon.OuterSingleton;
	}
	template<> COOPHORDEGAME_API UClass* StaticClass<ASProjectileWeapon>()
	{
		return ASProjectileWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASProjectileWeapon);
	struct Z_CompiledInDeferFile_FID_CoopHordeGame_Source_CoopHordeGame_Public_SProjectileWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CoopHordeGame_Source_CoopHordeGame_Public_SProjectileWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASProjectileWeapon, ASProjectileWeapon::StaticClass, TEXT("ASProjectileWeapon"), &Z_Registration_Info_UClass_ASProjectileWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASProjectileWeapon), 2972358936U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CoopHordeGame_Source_CoopHordeGame_Public_SProjectileWeapon_h_1575989215(TEXT("/Script/CoopHordeGame"),
		Z_CompiledInDeferFile_FID_CoopHordeGame_Source_CoopHordeGame_Public_SProjectileWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CoopHordeGame_Source_CoopHordeGame_Public_SProjectileWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
