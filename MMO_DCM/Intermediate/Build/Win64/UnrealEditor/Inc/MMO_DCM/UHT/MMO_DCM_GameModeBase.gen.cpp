// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MMO_DCM/MMO_DCM_GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMO_DCM_GameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MMO_DCM_API UClass* Z_Construct_UClass_AMMO_DCM_GameModeBase();
MMO_DCM_API UClass* Z_Construct_UClass_AMMO_DCM_GameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_MMO_DCM();
// End Cross Module References

// Begin Class AMMO_DCM_GameModeBase
void AMMO_DCM_GameModeBase::StaticRegisterNativesAMMO_DCM_GameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMMO_DCM_GameModeBase);
UClass* Z_Construct_UClass_AMMO_DCM_GameModeBase_NoRegister()
{
	return AMMO_DCM_GameModeBase::StaticClass();
}
struct Z_Construct_UClass_AMMO_DCM_GameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MMO_DCM_GameModeBase.h" },
		{ "ModuleRelativePath", "MMO_DCM_GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMMO_DCM_GameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMMO_DCM_GameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MMO_DCM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMMO_DCM_GameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMMO_DCM_GameModeBase_Statics::ClassParams = {
	&AMMO_DCM_GameModeBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMMO_DCM_GameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AMMO_DCM_GameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMMO_DCM_GameModeBase()
{
	if (!Z_Registration_Info_UClass_AMMO_DCM_GameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMMO_DCM_GameModeBase.OuterSingleton, Z_Construct_UClass_AMMO_DCM_GameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMMO_DCM_GameModeBase.OuterSingleton;
}
template<> MMO_DCM_API UClass* StaticClass<AMMO_DCM_GameModeBase>()
{
	return AMMO_DCM_GameModeBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMMO_DCM_GameModeBase);
AMMO_DCM_GameModeBase::~AMMO_DCM_GameModeBase() {}
// End Class AMMO_DCM_GameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_MMO_DCM_MMO_DCM_Source_MMO_DCM_MMO_DCM_GameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMMO_DCM_GameModeBase, AMMO_DCM_GameModeBase::StaticClass, TEXT("AMMO_DCM_GameModeBase"), &Z_Registration_Info_UClass_AMMO_DCM_GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMMO_DCM_GameModeBase), 764038815U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_MMO_DCM_MMO_DCM_Source_MMO_DCM_MMO_DCM_GameModeBase_h_4098085607(TEXT("/Script/MMO_DCM"),
	Z_CompiledInDeferFile_FID_Projects_MMO_DCM_MMO_DCM_Source_MMO_DCM_MMO_DCM_GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_MMO_DCM_MMO_DCM_Source_MMO_DCM_MMO_DCM_GameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
