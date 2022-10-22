// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MIDDLETEST_MiddleTestCharacter_generated_h
#error "MiddleTestCharacter.generated.h already included, missing '#pragma once' in MiddleTestCharacter.h"
#endif
#define MIDDLETEST_MiddleTestCharacter_generated_h

#define MiddleTest_Source_MiddleTest_MiddleTestCharacter_h_12_SPARSE_DATA
#define MiddleTest_Source_MiddleTest_MiddleTestCharacter_h_12_RPC_WRAPPERS
#define MiddleTest_Source_MiddleTest_MiddleTestCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MiddleTest_Source_MiddleTest_MiddleTestCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMiddleTestCharacter(); \
	friend struct Z_Construct_UClass_AMiddleTestCharacter_Statics; \
public: \
	DECLARE_CLASS(AMiddleTestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MiddleTest"), NO_API) \
	DECLARE_SERIALIZER(AMiddleTestCharacter)


#define MiddleTest_Source_MiddleTest_MiddleTestCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMiddleTestCharacter(); \
	friend struct Z_Construct_UClass_AMiddleTestCharacter_Statics; \
public: \
	DECLARE_CLASS(AMiddleTestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MiddleTest"), NO_API) \
	DECLARE_SERIALIZER(AMiddleTestCharacter)


#define MiddleTest_Source_MiddleTest_MiddleTestCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMiddleTestCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMiddleTestCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMiddleTestCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMiddleTestCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMiddleTestCharacter(AMiddleTestCharacter&&); \
	NO_API AMiddleTestCharacter(const AMiddleTestCharacter&); \
public:


#define MiddleTest_Source_MiddleTest_MiddleTestCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMiddleTestCharacter(AMiddleTestCharacter&&); \
	NO_API AMiddleTestCharacter(const AMiddleTestCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMiddleTestCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMiddleTestCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMiddleTestCharacter)


#define MiddleTest_Source_MiddleTest_MiddleTestCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMiddleTestCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AMiddleTestCharacter, FollowCamera); }


#define MiddleTest_Source_MiddleTest_MiddleTestCharacter_h_9_PROLOG
#define MiddleTest_Source_MiddleTest_MiddleTestCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MiddleTest_Source_MiddleTest_MiddleTestCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	MiddleTest_Source_MiddleTest_MiddleTestCharacter_h_12_SPARSE_DATA \
	MiddleTest_Source_MiddleTest_MiddleTestCharacter_h_12_RPC_WRAPPERS \
	MiddleTest_Source_MiddleTest_MiddleTestCharacter_h_12_INCLASS \
	MiddleTest_Source_MiddleTest_MiddleTestCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MiddleTest_Source_MiddleTest_MiddleTestCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MiddleTest_Source_MiddleTest_MiddleTestCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	MiddleTest_Source_MiddleTest_MiddleTestCharacter_h_12_SPARSE_DATA \
	MiddleTest_Source_MiddleTest_MiddleTestCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MiddleTest_Source_MiddleTest_MiddleTestCharacter_h_12_INCLASS_NO_PURE_DECLS \
	MiddleTest_Source_MiddleTest_MiddleTestCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MIDDLETEST_API UClass* StaticClass<class AMiddleTestCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MiddleTest_Source_MiddleTest_MiddleTestCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
