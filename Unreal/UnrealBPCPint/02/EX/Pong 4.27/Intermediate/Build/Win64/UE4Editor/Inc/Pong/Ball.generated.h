// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PONG_Ball_generated_h
#error "Ball.generated.h already included, missing '#pragma once' in Ball.h"
#endif
#define PONG_Ball_generated_h

#define Pong_4_27_Source_Pong_Ball_h_12_SPARSE_DATA
#define Pong_4_27_Source_Pong_Ball_h_12_RPC_WRAPPERS
#define Pong_4_27_Source_Pong_Ball_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Pong_4_27_Source_Pong_Ball_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABall(); \
	friend struct Z_Construct_UClass_ABall_Statics; \
public: \
	DECLARE_CLASS(ABall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pong"), NO_API) \
	DECLARE_SERIALIZER(ABall)


#define Pong_4_27_Source_Pong_Ball_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABall(); \
	friend struct Z_Construct_UClass_ABall_Statics; \
public: \
	DECLARE_CLASS(ABall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pong"), NO_API) \
	DECLARE_SERIALIZER(ABall)


#define Pong_4_27_Source_Pong_Ball_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABall(ABall&&); \
	NO_API ABall(const ABall&); \
public:


#define Pong_4_27_Source_Pong_Ball_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABall(ABall&&); \
	NO_API ABall(const ABall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABall)


#define Pong_4_27_Source_Pong_Ball_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Sphere() { return STRUCT_OFFSET(ABall, Sphere); } \
	FORCEINLINE static uint32 __PPO__Sprite() { return STRUCT_OFFSET(ABall, Sprite); }


#define Pong_4_27_Source_Pong_Ball_h_9_PROLOG
#define Pong_4_27_Source_Pong_Ball_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pong_4_27_Source_Pong_Ball_h_12_PRIVATE_PROPERTY_OFFSET \
	Pong_4_27_Source_Pong_Ball_h_12_SPARSE_DATA \
	Pong_4_27_Source_Pong_Ball_h_12_RPC_WRAPPERS \
	Pong_4_27_Source_Pong_Ball_h_12_INCLASS \
	Pong_4_27_Source_Pong_Ball_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pong_4_27_Source_Pong_Ball_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pong_4_27_Source_Pong_Ball_h_12_PRIVATE_PROPERTY_OFFSET \
	Pong_4_27_Source_Pong_Ball_h_12_SPARSE_DATA \
	Pong_4_27_Source_Pong_Ball_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Pong_4_27_Source_Pong_Ball_h_12_INCLASS_NO_PURE_DECLS \
	Pong_4_27_Source_Pong_Ball_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PONG_API UClass* StaticClass<class ABall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pong_4_27_Source_Pong_Ball_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
