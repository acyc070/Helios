#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFallType.h"
#include "ObjectMaterialData.h"
#include "FallData.generated.h"

USTRUCT(BlueprintType)
struct FFallData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFallType mFallType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool mIsSoftLanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector mLandingVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float mFallHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FObjectMaterialData mLandMaterialData;
    
    HELIOS_API FFallData();
};

