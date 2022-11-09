// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoopHordeGame_init() {}
	COOPHORDEGAME_API UFunction* Z_Construct_UDelegateFunction_CoopHordeGame_OnHealthChangedSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CoopHordeGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CoopHordeGame()
	{
		if (!Z_Registration_Info_UPackage__Script_CoopHordeGame.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_CoopHordeGame_OnHealthChangedSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CoopHordeGame",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD6E290B4,
				0xED603940,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CoopHordeGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CoopHordeGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CoopHordeGame(Z_Construct_UPackage__Script_CoopHordeGame, TEXT("/Script/CoopHordeGame"), Z_Registration_Info_UPackage__Script_CoopHordeGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD6E290B4, 0xED603940));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
