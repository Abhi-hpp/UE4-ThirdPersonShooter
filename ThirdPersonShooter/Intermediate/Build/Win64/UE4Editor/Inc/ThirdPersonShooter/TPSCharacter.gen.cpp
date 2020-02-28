// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonShooter/TPSCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPSCharacter() {}
// Cross Module References
	THIRDPERSONSHOOTER_API UFunction* Z_Construct_UDelegateFunction_ThirdPersonShooter_OnWeaponSwitchSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ThirdPersonShooter();
	THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_ATPSWeapon_NoRegister();
	THIRDPERSONSHOOTER_API UFunction* Z_Construct_UDelegateFunction_ThirdPersonShooter_OnDeathSignature__DelegateSignature();
	THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_ATPSCharacter_NoRegister();
	THIRDPERSONSHOOTER_API UEnum* Z_Construct_UEnum_ThirdPersonShooter_WeaponState();
	THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_ATPSCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	THIRDPERSONSHOOTER_API UFunction* Z_Construct_UFunction_ATPSCharacter_EndFire();
	THIRDPERSONSHOOTER_API UFunction* Z_Construct_UFunction_ATPSCharacter_EndZoom();
	THIRDPERSONSHOOTER_API UFunction* Z_Construct_UFunction_ATPSCharacter_EquipWeaponAtCurrentSlot();
	THIRDPERSONSHOOTER_API UFunction* Z_Construct_UFunction_ATPSCharacter_FinishReload();
	THIRDPERSONSHOOTER_API UFunction* Z_Construct_UFunction_ATPSCharacter_FinishSwitching();
	THIRDPERSONSHOOTER_API UFunction* Z_Construct_UFunction_ATPSCharacter_GetPickupAlpha();
	THIRDPERSONSHOOTER_API UFunction* Z_Construct_UFunction_ATPSCharacter_OnHealthChanged();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
	THIRDPERSONSHOOTER_API UFunction* Z_Construct_UFunction_ATPSCharacter_PlayReloadAnim();
	THIRDPERSONSHOOTER_API UFunction* Z_Construct_UFunction_ATPSCharacter_ReloadAnimStarted();
	THIRDPERSONSHOOTER_API UFunction* Z_Construct_UFunction_ATPSCharacter_StartFire();
	THIRDPERSONSHOOTER_API UFunction* Z_Construct_UFunction_ATPSCharacter_StartZoom();
	THIRDPERSONSHOOTER_API UFunction* Z_Construct_UFunction_ATPSCharacter_TakeCover();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ThirdPersonShooter_OnWeaponSwitchSignature__DelegateSignature_Statics
	{
		struct _Script_ThirdPersonShooter_eventOnWeaponSwitchSignature_Parms
		{
			ATPSWeapon* currentWeapon;
			ATPSWeapon* previousWeapon;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_previousWeapon;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_currentWeapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ThirdPersonShooter_OnWeaponSwitchSignature__DelegateSignature_Statics::NewProp_previousWeapon = { "previousWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ThirdPersonShooter_eventOnWeaponSwitchSignature_Parms, previousWeapon), Z_Construct_UClass_ATPSWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ThirdPersonShooter_OnWeaponSwitchSignature__DelegateSignature_Statics::NewProp_currentWeapon = { "currentWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ThirdPersonShooter_eventOnWeaponSwitchSignature_Parms, currentWeapon), Z_Construct_UClass_ATPSWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ThirdPersonShooter_OnWeaponSwitchSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThirdPersonShooter_OnWeaponSwitchSignature__DelegateSignature_Statics::NewProp_previousWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThirdPersonShooter_OnWeaponSwitchSignature__DelegateSignature_Statics::NewProp_currentWeapon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ThirdPersonShooter_OnWeaponSwitchSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ThirdPersonShooter_OnWeaponSwitchSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ThirdPersonShooter, nullptr, "OnWeaponSwitchSignature__DelegateSignature", sizeof(_Script_ThirdPersonShooter_eventOnWeaponSwitchSignature_Parms), Z_Construct_UDelegateFunction_ThirdPersonShooter_OnWeaponSwitchSignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_ThirdPersonShooter_OnWeaponSwitchSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ThirdPersonShooter_OnWeaponSwitchSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_ThirdPersonShooter_OnWeaponSwitchSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ThirdPersonShooter_OnWeaponSwitchSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ThirdPersonShooter_OnWeaponSwitchSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_ThirdPersonShooter_OnDeathSignature__DelegateSignature_Statics
	{
		struct _Script_ThirdPersonShooter_eventOnDeathSignature_Parms
		{
			ATPSCharacter* actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ThirdPersonShooter_OnDeathSignature__DelegateSignature_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ThirdPersonShooter_eventOnDeathSignature_Parms, actor), Z_Construct_UClass_ATPSCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ThirdPersonShooter_OnDeathSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThirdPersonShooter_OnDeathSignature__DelegateSignature_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ThirdPersonShooter_OnDeathSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ThirdPersonShooter_OnDeathSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ThirdPersonShooter, nullptr, "OnDeathSignature__DelegateSignature", sizeof(_Script_ThirdPersonShooter_eventOnDeathSignature_Parms), Z_Construct_UDelegateFunction_ThirdPersonShooter_OnDeathSignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_ThirdPersonShooter_OnDeathSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ThirdPersonShooter_OnDeathSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_ThirdPersonShooter_OnDeathSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ThirdPersonShooter_OnDeathSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ThirdPersonShooter_OnDeathSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* WeaponState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ThirdPersonShooter_WeaponState, Z_Construct_UPackage__Script_ThirdPersonShooter(), TEXT("WeaponState"));
		}
		return Singleton;
	}
	template<> THIRDPERSONSHOOTER_API UEnum* StaticEnum<WeaponState>()
	{
		return WeaponState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_WeaponState(WeaponState_StaticEnum, TEXT("/Script/ThirdPersonShooter"), TEXT("WeaponState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ThirdPersonShooter_WeaponState_Hash() { return 4164068703U; }
	UEnum* Z_Construct_UEnum_ThirdPersonShooter_WeaponState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ThirdPersonShooter();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("WeaponState"), 0, Get_Z_Construct_UEnum_ThirdPersonShooter_WeaponState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "WeaponState::Idle", (int64)WeaponState::Idle },
				{ "WeaponState::Shooting", (int64)WeaponState::Shooting },
				{ "WeaponState::Reloading", (int64)WeaponState::Reloading },
				{ "WeaponState::Switching", (int64)WeaponState::Switching },
				{ "WeaponState::PickingUp", (int64)WeaponState::PickingUp },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Idle.DisplayName", "Idle" },
				{ "ModuleRelativePath", "TPSCharacter.h" },
				{ "PickingUp.DisplayName", "PickingUp" },
				{ "Reloading.DisplayName", "Reloading" },
				{ "Shooting.DisplayName", "Shooting" },
				{ "Switching.DisplayName", "Switching" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ThirdPersonShooter,
				nullptr,
				"WeaponState",
				"WeaponState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ATPSCharacter::StaticRegisterNativesATPSCharacter()
	{
		UClass* Class = ATPSCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndFire", &ATPSCharacter::execEndFire },
			{ "EndZoom", &ATPSCharacter::execEndZoom },
			{ "EquipWeaponAtCurrentSlot", &ATPSCharacter::execEquipWeaponAtCurrentSlot },
			{ "FinishReload", &ATPSCharacter::execFinishReload },
			{ "FinishSwitching", &ATPSCharacter::execFinishSwitching },
			{ "GetPickupAlpha", &ATPSCharacter::execGetPickupAlpha },
			{ "OnHealthChanged", &ATPSCharacter::execOnHealthChanged },
			{ "PlayReloadAnim", &ATPSCharacter::execPlayReloadAnim },
			{ "ReloadAnimStarted", &ATPSCharacter::execReloadAnimStarted },
			{ "StartFire", &ATPSCharacter::execStartFire },
			{ "StartZoom", &ATPSCharacter::execStartZoom },
			{ "TakeCover", &ATPSCharacter::execTakeCover },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATPSCharacter_EndFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSCharacter_EndFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPSCharacter_EndFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPSCharacter, nullptr, "EndFire", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPSCharacter_EndFire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_EndFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPSCharacter_EndFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATPSCharacter_EndFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATPSCharacter_EndZoom_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSCharacter_EndZoom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPSCharacter_EndZoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPSCharacter, nullptr, "EndZoom", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPSCharacter_EndZoom_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_EndZoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPSCharacter_EndZoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATPSCharacter_EndZoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATPSCharacter_EquipWeaponAtCurrentSlot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSCharacter_EquipWeaponAtCurrentSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPSCharacter_EquipWeaponAtCurrentSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPSCharacter, nullptr, "EquipWeaponAtCurrentSlot", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPSCharacter_EquipWeaponAtCurrentSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_EquipWeaponAtCurrentSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPSCharacter_EquipWeaponAtCurrentSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATPSCharacter_EquipWeaponAtCurrentSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATPSCharacter_FinishReload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSCharacter_FinishReload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPSCharacter_FinishReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPSCharacter, nullptr, "FinishReload", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPSCharacter_FinishReload_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_FinishReload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPSCharacter_FinishReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATPSCharacter_FinishReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATPSCharacter_FinishSwitching_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSCharacter_FinishSwitching_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPSCharacter_FinishSwitching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPSCharacter, nullptr, "FinishSwitching", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPSCharacter_FinishSwitching_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_FinishSwitching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPSCharacter_FinishSwitching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATPSCharacter_FinishSwitching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATPSCharacter_GetPickupAlpha_Statics
	{
		struct TPSCharacter_eventGetPickupAlpha_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATPSCharacter_GetPickupAlpha_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPSCharacter_eventGetPickupAlpha_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATPSCharacter_GetPickupAlpha_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPSCharacter_GetPickupAlpha_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSCharacter_GetPickupAlpha_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPSCharacter_GetPickupAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPSCharacter, nullptr, "GetPickupAlpha", sizeof(TPSCharacter_eventGetPickupAlpha_Parms), Z_Construct_UFunction_ATPSCharacter_GetPickupAlpha_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_GetPickupAlpha_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPSCharacter_GetPickupAlpha_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_GetPickupAlpha_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPSCharacter_GetPickupAlpha()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATPSCharacter_GetPickupAlpha_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATPSCharacter_OnHealthChanged_Statics
	{
		struct TPSCharacter_eventOnHealthChanged_Parms
		{
			UHealthComponent* OwningHealthComp;
			float Health;
			float DeltaHealth;
			const UDamageType* DamageType;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaHealth;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningHealthComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningHealthComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATPSCharacter_OnHealthChanged_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPSCharacter_eventOnHealthChanged_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATPSCharacter_OnHealthChanged_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPSCharacter_eventOnHealthChanged_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSCharacter_OnHealthChanged_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATPSCharacter_OnHealthChanged_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPSCharacter_eventOnHealthChanged_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATPSCharacter_OnHealthChanged_Statics::NewProp_DamageType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_OnHealthChanged_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATPSCharacter_OnHealthChanged_Statics::NewProp_DeltaHealth = { "DeltaHealth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPSCharacter_eventOnHealthChanged_Parms, DeltaHealth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATPSCharacter_OnHealthChanged_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPSCharacter_eventOnHealthChanged_Parms, Health), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSCharacter_OnHealthChanged_Statics::NewProp_OwningHealthComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATPSCharacter_OnHealthChanged_Statics::NewProp_OwningHealthComp = { "OwningHealthComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPSCharacter_eventOnHealthChanged_Parms, OwningHealthComp), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATPSCharacter_OnHealthChanged_Statics::NewProp_OwningHealthComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_OnHealthChanged_Statics::NewProp_OwningHealthComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATPSCharacter_OnHealthChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPSCharacter_OnHealthChanged_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPSCharacter_OnHealthChanged_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPSCharacter_OnHealthChanged_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPSCharacter_OnHealthChanged_Statics::NewProp_DeltaHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPSCharacter_OnHealthChanged_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPSCharacter_OnHealthChanged_Statics::NewProp_OwningHealthComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSCharacter_OnHealthChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPSCharacter_OnHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPSCharacter, nullptr, "OnHealthChanged", sizeof(TPSCharacter_eventOnHealthChanged_Parms), Z_Construct_UFunction_ATPSCharacter_OnHealthChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_OnHealthChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPSCharacter_OnHealthChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_OnHealthChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPSCharacter_OnHealthChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATPSCharacter_OnHealthChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATPSCharacter_PlayReloadAnim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSCharacter_PlayReloadAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPSCharacter_PlayReloadAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPSCharacter, nullptr, "PlayReloadAnim", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPSCharacter_PlayReloadAnim_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_PlayReloadAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPSCharacter_PlayReloadAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATPSCharacter_PlayReloadAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATPSCharacter_ReloadAnimStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSCharacter_ReloadAnimStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPSCharacter_ReloadAnimStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPSCharacter, nullptr, "ReloadAnimStarted", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPSCharacter_ReloadAnimStarted_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_ReloadAnimStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPSCharacter_ReloadAnimStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATPSCharacter_ReloadAnimStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATPSCharacter_StartFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSCharacter_StartFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPSCharacter_StartFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPSCharacter, nullptr, "StartFire", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPSCharacter_StartFire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_StartFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPSCharacter_StartFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATPSCharacter_StartFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATPSCharacter_StartZoom_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSCharacter_StartZoom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPSCharacter_StartZoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPSCharacter, nullptr, "StartZoom", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPSCharacter_StartZoom_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_StartZoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPSCharacter_StartZoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATPSCharacter_StartZoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATPSCharacter_TakeCover_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSCharacter_TakeCover_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPSCharacter_TakeCover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPSCharacter, nullptr, "TakeCover", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPSCharacter_TakeCover_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_TakeCover_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPSCharacter_TakeCover()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATPSCharacter_TakeCover_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATPSCharacter_NoRegister()
	{
		return ATPSCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATPSCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnWeaponSwitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWeaponSwitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDeath_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pickupTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_pickupTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pickupDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_pickupDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pickupBoxHalfSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pickupBoxHalfSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pickableWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pickableWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_applyIk_MetaData[];
#endif
		static void NewProp_applyIk_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_applyIk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_feetOffest_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_feetOffest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ikDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ikDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightFootIkPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightFootIkPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftFootIkPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftFootIkPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandIKRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftHandIKRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandIKLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftHandIKLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayReloadAnimFlag_MetaData[];
#endif
		static void NewProp_bPlayReloadAnimFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayReloadAnimFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deathMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_deathMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_destroyOnDeath_MetaData[];
#endif
		static void NewProp_destroyOnDeath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_destroyOnDeath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDead_MetaData[];
#endif
		static void NewProp_bDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInCover_MetaData[];
#endif
		static void NewProp_bInCover_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInCover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_overlappingCoverVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlappingCoverVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlaySwitchAnim_MetaData[];
#endif
		static void NewProp_bPlaySwitchAnim_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlaySwitchAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentWeaponState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_currentWeaponState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_currentWeaponState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSlotSocketNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeaponSlotSocketNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WeaponSlotSocketNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HandSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StarterWeaponClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StarterWeaponClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StarterWeaponClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAiming_MetaData[];
#endif
		static void NewProp_bIsAiming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAiming;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATPSCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATPSCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATPSCharacter_EndFire, "EndFire" }, // 3879114707
		{ &Z_Construct_UFunction_ATPSCharacter_EndZoom, "EndZoom" }, // 1323913771
		{ &Z_Construct_UFunction_ATPSCharacter_EquipWeaponAtCurrentSlot, "EquipWeaponAtCurrentSlot" }, // 2771424903
		{ &Z_Construct_UFunction_ATPSCharacter_FinishReload, "FinishReload" }, // 1955908230
		{ &Z_Construct_UFunction_ATPSCharacter_FinishSwitching, "FinishSwitching" }, // 4206868273
		{ &Z_Construct_UFunction_ATPSCharacter_GetPickupAlpha, "GetPickupAlpha" }, // 4151545960
		{ &Z_Construct_UFunction_ATPSCharacter_OnHealthChanged, "OnHealthChanged" }, // 4043452612
		{ &Z_Construct_UFunction_ATPSCharacter_PlayReloadAnim, "PlayReloadAnim" }, // 3899029263
		{ &Z_Construct_UFunction_ATPSCharacter_ReloadAnimStarted, "ReloadAnimStarted" }, // 581299050
		{ &Z_Construct_UFunction_ATPSCharacter_StartFire, "StartFire" }, // 3103648094
		{ &Z_Construct_UFunction_ATPSCharacter_StartZoom, "StartZoom" }, // 3367121135
		{ &Z_Construct_UFunction_ATPSCharacter_TakeCover, "TakeCover" }, // 2601732591
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TPSCharacter.h" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_OnWeaponSwitch_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_OnWeaponSwitch = { "OnWeaponSwitch", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSCharacter, OnWeaponSwitch), Z_Construct_UDelegateFunction_ThirdPersonShooter_OnWeaponSwitchSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_OnWeaponSwitch_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_OnWeaponSwitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_OnDeath_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_OnDeath = { "OnDeath", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSCharacter, OnDeath), Z_Construct_UDelegateFunction_ThirdPersonShooter_OnDeathSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_OnDeath_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_OnDeath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_pickupTime_MetaData[] = {
		{ "Category", "Pickup Properties" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_pickupTime = { "pickupTime", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSCharacter, pickupTime), METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_pickupTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_pickupTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_pickupDistance_MetaData[] = {
		{ "Category", "Pickup Properties" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_pickupDistance = { "pickupDistance", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSCharacter, pickupDistance), METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_pickupDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_pickupDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_pickupBoxHalfSize_MetaData[] = {
		{ "Category", "Pickup Properties" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_pickupBoxHalfSize = { "pickupBoxHalfSize", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSCharacter, pickupBoxHalfSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_pickupBoxHalfSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_pickupBoxHalfSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_pickableWeapon_MetaData[] = {
		{ "Category", "Pickup Properties" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
		{ "ToolTip", "Pickup" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_pickableWeapon = { "pickableWeapon", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSCharacter, pickableWeapon), Z_Construct_UClass_ATPSWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_pickableWeapon_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_pickableWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_applyIk_MetaData[] = {
		{ "Category", "IK Properties" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ATPSCharacter_Statics::NewProp_applyIk_SetBit(void* Obj)
	{
		((ATPSCharacter*)Obj)->applyIk = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_applyIk = { "applyIk", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATPSCharacter), &Z_Construct_UClass_ATPSCharacter_Statics::NewProp_applyIk_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_applyIk_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_applyIk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_feetOffest_MetaData[] = {
		{ "Category", "IK Properties" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_feetOffest = { "feetOffest", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSCharacter, feetOffest), METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_feetOffest_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_feetOffest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_ikDistance_MetaData[] = {
		{ "Category", "IK Properties" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_ikDistance = { "ikDistance", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSCharacter, ikDistance), METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_ikDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_ikDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_rightFootIkPos_MetaData[] = {
		{ "Category", "IK Properties" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_rightFootIkPos = { "rightFootIkPos", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSCharacter, rightFootIkPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_rightFootIkPos_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_rightFootIkPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_leftFootIkPos_MetaData[] = {
		{ "Category", "IK Properties" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_leftFootIkPos = { "leftFootIkPos", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSCharacter, leftFootIkPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_leftFootIkPos_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_leftFootIkPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_LeftHandIKRotation_MetaData[] = {
		{ "Category", "IK Properties" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_LeftHandIKRotation = { "LeftHandIKRotation", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSCharacter, LeftHandIKRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_LeftHandIKRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_LeftHandIKRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_LeftHandIKLocation_MetaData[] = {
		{ "Category", "IK Properties" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
		{ "ToolTip", "IK" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_LeftHandIKLocation = { "LeftHandIKLocation", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSCharacter, LeftHandIKLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_LeftHandIKLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_LeftHandIKLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bPlayReloadAnimFlag_MetaData[] = {
		{ "Category", "PlayerProperties" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bPlayReloadAnimFlag_SetBit(void* Obj)
	{
		((ATPSCharacter*)Obj)->bPlayReloadAnimFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bPlayReloadAnimFlag = { "bPlayReloadAnimFlag", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATPSCharacter), &Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bPlayReloadAnimFlag_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bPlayReloadAnimFlag_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bPlayReloadAnimFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_deathMaterial_MetaData[] = {
		{ "Category", "PlayerProperties" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_deathMaterial = { "deathMaterial", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSCharacter, deathMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_deathMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_deathMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_destroyOnDeath_MetaData[] = {
		{ "Category", "PlayerProperties" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ATPSCharacter_Statics::NewProp_destroyOnDeath_SetBit(void* Obj)
	{
		((ATPSCharacter*)Obj)->destroyOnDeath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_destroyOnDeath = { "destroyOnDeath", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATPSCharacter), &Z_Construct_UClass_ATPSCharacter_Statics::NewProp_destroyOnDeath_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_destroyOnDeath_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_destroyOnDeath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bDead_MetaData[] = {
		{ "Category", "PlayerProperties" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bDead_SetBit(void* Obj)
	{
		((ATPSCharacter*)Obj)->bDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bDead = { "bDead", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATPSCharacter), &Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bDead_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_HealthComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
		{ "ToolTip", "Health Params" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_HealthComp = { "HealthComp", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSCharacter, HealthComp), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_HealthComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_HealthComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bInCover_MetaData[] = {
		{ "Category", "CoverProperties" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bInCover_SetBit(void* Obj)
	{
		((ATPSCharacter*)Obj)->bInCover = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bInCover = { "bInCover", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATPSCharacter), &Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bInCover_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bInCover_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bInCover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_overlappingCoverVolume_MetaData[] = {
		{ "Category", "CoverProperties" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_overlappingCoverVolume = { "overlappingCoverVolume", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSCharacter, overlappingCoverVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_overlappingCoverVolume_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_overlappingCoverVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bPlaySwitchAnim_MetaData[] = {
		{ "Category", "WeaponProperties" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bPlaySwitchAnim_SetBit(void* Obj)
	{
		((ATPSCharacter*)Obj)->bPlaySwitchAnim = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bPlaySwitchAnim = { "bPlaySwitchAnim", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATPSCharacter), &Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bPlaySwitchAnim_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bPlaySwitchAnim_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bPlaySwitchAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_currentWeaponState_MetaData[] = {
		{ "Category", "WeaponProperties" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_currentWeaponState = { "currentWeaponState", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSCharacter, currentWeaponState), Z_Construct_UEnum_ThirdPersonShooter_WeaponState, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_currentWeaponState_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_currentWeaponState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_currentWeaponState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_WeaponSlotSocketNames_MetaData[] = {
		{ "Category", "WeaponProperties" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_WeaponSlotSocketNames = { "WeaponSlotSocketNames", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSCharacter, WeaponSlotSocketNames), METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_WeaponSlotSocketNames_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_WeaponSlotSocketNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_WeaponSlotSocketNames_Inner = { "WeaponSlotSocketNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_HandSocketName_MetaData[] = {
		{ "Category", "WeaponProperties" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_HandSocketName = { "HandSocketName", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSCharacter, HandSocketName), METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_HandSocketName_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_HandSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_StarterWeaponClasses_MetaData[] = {
		{ "Category", "WeaponProperties" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_StarterWeaponClasses = { "StarterWeaponClasses", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSCharacter, StarterWeaponClasses), METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_StarterWeaponClasses_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_StarterWeaponClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_StarterWeaponClasses_Inner = { "StarterWeaponClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATPSWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bIsAiming_MetaData[] = {
		{ "Category", "PlayerProperties" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bIsAiming_SetBit(void* Obj)
	{
		((ATPSCharacter*)Obj)->bIsAiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bIsAiming = { "bIsAiming", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATPSCharacter), &Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bIsAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bIsAiming_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bIsAiming_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATPSCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_OnWeaponSwitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_OnDeath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_pickupTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_pickupDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_pickupBoxHalfSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_pickableWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_applyIk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_feetOffest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_ikDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_rightFootIkPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_leftFootIkPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_LeftHandIKRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_LeftHandIKLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bPlayReloadAnimFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_deathMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_destroyOnDeath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_HealthComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bInCover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_overlappingCoverVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bPlaySwitchAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_currentWeaponState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_currentWeaponState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_WeaponSlotSocketNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_WeaponSlotSocketNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_HandSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_StarterWeaponClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_StarterWeaponClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bIsAiming,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATPSCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPSCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATPSCharacter_Statics::ClassParams = {
		&ATPSCharacter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATPSCharacter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATPSCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATPSCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATPSCharacter, 253003308);
	template<> THIRDPERSONSHOOTER_API UClass* StaticClass<ATPSCharacter>()
	{
		return ATPSCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATPSCharacter(Z_Construct_UClass_ATPSCharacter, &ATPSCharacter::StaticClass, TEXT("/Script/ThirdPersonShooter"), TEXT("ATPSCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATPSCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
