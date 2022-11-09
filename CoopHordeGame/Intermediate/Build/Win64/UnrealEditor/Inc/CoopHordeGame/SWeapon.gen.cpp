// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopHordeGame/Public/SWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSWeapon() {}
// Cross Module References
	COOPHORDEGAME_API UScriptStruct* Z_Construct_UScriptStruct_FHitScanTrace();
	UPackage* Z_Construct_UPackage__Script_CoopHordeGame();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	COOPHORDEGAME_API UClass* Z_Construct_UClass_ASWeapon_NoRegister();
	COOPHORDEGAME_API UClass* Z_Construct_UClass_ASWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HitScanTrace;
class UScriptStruct* FHitScanTrace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HitScanTrace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HitScanTrace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHitScanTrace, Z_Construct_UPackage__Script_CoopHordeGame(), TEXT("HitScanTrace"));
	}
	return Z_Registration_Info_UScriptStruct_HitScanTrace.OuterSingleton;
}
template<> COOPHORDEGAME_API UScriptStruct* StaticStruct<FHitScanTrace>()
{
	return FHitScanTrace::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHitScanTrace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SurfaceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceTo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceTo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShootsFired_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_ShootsFired;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitScanTrace_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//Contains information of a single hitscan weapon linetrace\n" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
		{ "ToolTip", "Contains information of a single hitscan weapon linetrace" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHitScanTrace>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_SurfaceType_MetaData[] = {
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_SurfaceType = { "SurfaceType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitScanTrace, SurfaceType), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_SurfaceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_SurfaceType_MetaData)) }; // 455643187
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_TraceTo_MetaData[] = {
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_TraceTo = { "TraceTo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitScanTrace, TraceTo), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_TraceTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_TraceTo_MetaData)) }; // 1408259225
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_ShootsFired_MetaData[] = {
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_ShootsFired = { "ShootsFired", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitScanTrace, ShootsFired), METADATA_PARAMS(Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_ShootsFired_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_ShootsFired_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHitScanTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_SurfaceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_TraceTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_ShootsFired,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHitScanTrace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CoopHordeGame,
		nullptr,
		&NewStructOps,
		"HitScanTrace",
		sizeof(FHitScanTrace),
		alignof(FHitScanTrace),
		Z_Construct_UScriptStruct_FHitScanTrace_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanTrace_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHitScanTrace_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanTrace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHitScanTrace()
	{
		if (!Z_Registration_Info_UScriptStruct_HitScanTrace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HitScanTrace.InnerSingleton, Z_Construct_UScriptStruct_FHitScanTrace_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HitScanTrace.InnerSingleton;
	}
	DEFINE_FUNCTION(ASWeapon::execOnRep_HitScanTrace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_HitScanTrace();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASWeapon::execServerFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerFire_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerFire_Validate"));
			return;
		}
		P_THIS->ServerFire_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASWeapon::execStopFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASWeapon::execStartFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartFire();
		P_NATIVE_END;
	}
	static FName NAME_ASWeapon_ServerFire = FName(TEXT("ServerFire"));
	void ASWeapon::ServerFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASWeapon_ServerFire),NULL);
	}
	void ASWeapon::StaticRegisterNativesASWeapon()
	{
		UClass* Class = ASWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_HitScanTrace", &ASWeapon::execOnRep_HitScanTrace },
			{ "ServerFire", &ASWeapon::execServerFire },
			{ "StartFire", &ASWeapon::execStartFire },
			{ "StopFire", &ASWeapon::execStopFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASWeapon_OnRep_HitScanTrace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASWeapon_OnRep_HitScanTrace_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASWeapon_OnRep_HitScanTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASWeapon, nullptr, "OnRep_HitScanTrace", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASWeapon_OnRep_HitScanTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASWeapon_OnRep_HitScanTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASWeapon_OnRep_HitScanTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASWeapon_OnRep_HitScanTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASWeapon_ServerFire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASWeapon_ServerFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASWeapon_ServerFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASWeapon, nullptr, "ServerFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASWeapon_ServerFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASWeapon_ServerFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASWeapon_ServerFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASWeapon_ServerFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASWeapon_StartFire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASWeapon_StartFire_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASWeapon_StartFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASWeapon, nullptr, "StartFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASWeapon_StartFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASWeapon_StartFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASWeapon_StartFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASWeapon_StartFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASWeapon_StopFire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASWeapon_StopFire_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASWeapon_StopFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASWeapon, nullptr, "StopFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASWeapon_StopFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASWeapon_StopFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASWeapon_StopFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASWeapon_StopFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASWeapon);
	UClass* Z_Construct_UClass_ASWeapon_NoRegister()
	{
		return ASWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ASWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DamageType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MuzzleSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TracerTargetName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TracerTargetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FleshImpactEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FleshImpactEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultImpactEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultImpactEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TracerEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TracerEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireCamShake_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_FireCamShake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VulnerableDamageMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VulnerableDamageMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimerHandle_TimeBetweenShots_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimerHandle_TimeBetweenShots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RateOfFire_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RateOfFire;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitScanTrace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitScanTrace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopHordeGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASWeapon_OnRep_HitScanTrace, "OnRep_HitScanTrace" }, // 114907338
		{ &Z_Construct_UFunction_ASWeapon_ServerFire, "ServerFire" }, // 890723522
		{ &Z_Construct_UFunction_ASWeapon_StartFire, "StartFire" }, // 3184204921
		{ &Z_Construct_UFunction_ASWeapon_StopFire, "StopFire" }, // 2884790597
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SWeapon.h" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, MeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_DamageType_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, DamageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_DamageType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_MuzzleSocketName_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_MuzzleSocketName = { "MuzzleSocketName", nullptr, (EPropertyFlags)0x0020080000030015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, MuzzleSocketName), METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_MuzzleSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_MuzzleSocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_TracerTargetName_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_TracerTargetName = { "TracerTargetName", nullptr, (EPropertyFlags)0x0020080000030015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, TracerTargetName), METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_TracerTargetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_TracerTargetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_MuzzleEffect_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_MuzzleEffect = { "MuzzleEffect", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, MuzzleEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_MuzzleEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_MuzzleEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_FleshImpactEffect_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_FleshImpactEffect = { "FleshImpactEffect", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, FleshImpactEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_FleshImpactEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_FleshImpactEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_DefaultImpactEffect_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_DefaultImpactEffect = { "DefaultImpactEffect", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, DefaultImpactEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_DefaultImpactEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_DefaultImpactEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_TracerEffect_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_TracerEffect = { "TracerEffect", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, TracerEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_TracerEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_TracerEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_FireCamShake_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_FireCamShake = { "FireCamShake", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, FireCamShake), Z_Construct_UClass_UCameraShakeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_FireCamShake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_FireCamShake_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_BaseDamage_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, BaseDamage), METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_BaseDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_BaseDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_VulnerableDamageMultiplier_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_VulnerableDamageMultiplier = { "VulnerableDamageMultiplier", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, VulnerableDamageMultiplier), METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_VulnerableDamageMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_VulnerableDamageMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_TimerHandle_TimeBetweenShots_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_TimerHandle_TimeBetweenShots = { "TimerHandle_TimeBetweenShots", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, TimerHandle_TimeBetweenShots), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_TimerHandle_TimeBetweenShots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_TimerHandle_TimeBetweenShots_MetaData)) }; // 589591453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_RateOfFire_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/*RPM - Bullets per minute fired by the weapon */" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
		{ "ToolTip", "RPM - Bullets per minute fired by the weapon" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_RateOfFire = { "RateOfFire", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, RateOfFire), METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_RateOfFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_RateOfFire_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_HitScanTrace_MetaData[] = {
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_HitScanTrace = { "HitScanTrace", "OnRep_HitScanTrace", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, HitScanTrace), Z_Construct_UScriptStruct_FHitScanTrace, METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_HitScanTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_HitScanTrace_MetaData)) }; // 2348240972
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_DamageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_MuzzleSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_TracerTargetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_MuzzleEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_FleshImpactEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_DefaultImpactEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_TracerEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_FireCamShake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_BaseDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_VulnerableDamageMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_TimerHandle_TimeBetweenShots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_RateOfFire,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_HitScanTrace,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASWeapon_Statics::ClassParams = {
		&ASWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASWeapon()
	{
		if (!Z_Registration_Info_UClass_ASWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASWeapon.OuterSingleton, Z_Construct_UClass_ASWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASWeapon.OuterSingleton;
	}
	template<> COOPHORDEGAME_API UClass* StaticClass<ASWeapon>()
	{
		return ASWeapon::StaticClass();
	}

	void ASWeapon::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_HitScanTrace(TEXT("HitScanTrace"));

		const bool bIsValid = true
			&& Name_HitScanTrace == ClassReps[(int32)ENetFields_Private::HitScanTrace].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASWeapon"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASWeapon);
	struct Z_CompiledInDeferFile_FID_CoopHordeGame_Source_CoopHordeGame_Public_SWeapon_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CoopHordeGame_Source_CoopHordeGame_Public_SWeapon_h_Statics::ScriptStructInfo[] = {
		{ FHitScanTrace::StaticStruct, Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewStructOps, TEXT("HitScanTrace"), &Z_Registration_Info_UScriptStruct_HitScanTrace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHitScanTrace), 2348240972U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CoopHordeGame_Source_CoopHordeGame_Public_SWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASWeapon, ASWeapon::StaticClass, TEXT("ASWeapon"), &Z_Registration_Info_UClass_ASWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASWeapon), 683933516U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CoopHordeGame_Source_CoopHordeGame_Public_SWeapon_h_2016401354(TEXT("/Script/CoopHordeGame"),
		Z_CompiledInDeferFile_FID_CoopHordeGame_Source_CoopHordeGame_Public_SWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CoopHordeGame_Source_CoopHordeGame_Public_SWeapon_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_CoopHordeGame_Source_CoopHordeGame_Public_SWeapon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CoopHordeGame_Source_CoopHordeGame_Public_SWeapon_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
