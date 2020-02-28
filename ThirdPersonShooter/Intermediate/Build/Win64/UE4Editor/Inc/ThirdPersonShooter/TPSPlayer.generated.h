// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THIRDPERSONSHOOTER_TPSPlayer_generated_h
#error "TPSPlayer.generated.h already included, missing '#pragma once' in TPSPlayer.h"
#endif
#define THIRDPERSONSHOOTER_TPSPlayer_generated_h

#define ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_18_RPC_WRAPPERS
#define ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATPSPlayer(); \
	friend struct Z_Construct_UClass_ATPSPlayer_Statics; \
public: \
	DECLARE_CLASS(ATPSPlayer, ATPSCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ThirdPersonShooter"), NO_API) \
	DECLARE_SERIALIZER(ATPSPlayer)


#define ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_18_INCLASS \
private: \
	static void StaticRegisterNativesATPSPlayer(); \
	friend struct Z_Construct_UClass_ATPSPlayer_Statics; \
public: \
	DECLARE_CLASS(ATPSPlayer, ATPSCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ThirdPersonShooter"), NO_API) \
	DECLARE_SERIALIZER(ATPSPlayer)


#define ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATPSPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATPSPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPSPlayer(ATPSPlayer&&); \
	NO_API ATPSPlayer(const ATPSPlayer&); \
public:


#define ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPSPlayer(ATPSPlayer&&); \
	NO_API ATPSPlayer(const ATPSPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATPSPlayer)


#define ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraComp() { return STRUCT_OFFSET(ATPSPlayer, CameraComp); } \
	FORCEINLINE static uint32 __PPO__SpringArmComp() { return STRUCT_OFFSET(ATPSPlayer, SpringArmComp); } \
	FORCEINLINE static uint32 __PPO__defaultFOV() { return STRUCT_OFFSET(ATPSPlayer, defaultFOV); } \
	FORCEINLINE static uint32 __PPO__zoomedFOV() { return STRUCT_OFFSET(ATPSPlayer, zoomedFOV); }


#define ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_15_PROLOG
#define ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_18_PRIVATE_PROPERTY_OFFSET \
	ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_18_RPC_WRAPPERS \
	ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_18_INCLASS \
	ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_18_PRIVATE_PROPERTY_OFFSET \
	ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_18_INCLASS_NO_PURE_DECLS \
	ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THIRDPERSONSHOOTER_API UClass* StaticClass<class ATPSPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS