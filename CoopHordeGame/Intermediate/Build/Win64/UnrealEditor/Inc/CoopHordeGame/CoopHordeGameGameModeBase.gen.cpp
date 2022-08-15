// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopHordeGame/CoopHordeGameGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoopHordeGameGameModeBase() {}
// Cross Module References
	COOPHORDEGAME_API UClass* Z_Construct_UClass_ACoopHordeGameGameModeBase_NoRegister();
	COOPHORDEGAME_API UClass* Z_Construct_UClass_ACoopHordeGameGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CoopHordeGame();
// End Cross Module References
	void ACoopHordeGameGameModeBase::StaticRegisterNativesACoopHordeGameGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACoopHordeGameGameModeBase);
	UClass* Z_Construct_UClass_ACoopHordeGameGameModeBase_NoRegister()
	{
		return ACoopHordeGameGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACoopHordeGameGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACoopHordeGameGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopHordeGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoopHordeGameGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CoopHordeGameGameModeBase.h" },
		{ "ModuleRelativePath", "CoopHordeGameGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACoopHordeGameGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoopHordeGameGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoopHordeGameGameModeBase_Statics::ClassParams = {
		&ACoopHordeGameGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACoopHordeGameGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACoopHordeGameGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACoopHordeGameGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ACoopHordeGameGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoopHordeGameGameModeBase.OuterSingleton, Z_Construct_UClass_ACoopHordeGameGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACoopHordeGameGameModeBase.OuterSingleton;
	}
	template<> COOPHORDEGAME_API UClass* StaticClass<ACoopHordeGameGameModeBase>()
	{
		return ACoopHordeGameGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACoopHordeGameGameModeBase);
	struct Z_CompiledInDeferFile_FID_CoopHordeGame_Source_CoopHordeGame_CoopHordeGameGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CoopHordeGame_Source_CoopHordeGame_CoopHordeGameGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACoopHordeGameGameModeBase, ACoopHordeGameGameModeBase::StaticClass, TEXT("ACoopHordeGameGameModeBase"), &Z_Registration_Info_UClass_ACoopHordeGameGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoopHordeGameGameModeBase), 427781948U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CoopHordeGame_Source_CoopHordeGame_CoopHordeGameGameModeBase_h_2304110020(TEXT("/Script/CoopHordeGame"),
		Z_CompiledInDeferFile_FID_CoopHordeGame_Source_CoopHordeGame_CoopHordeGameGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CoopHordeGame_Source_CoopHordeGame_CoopHordeGameGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
