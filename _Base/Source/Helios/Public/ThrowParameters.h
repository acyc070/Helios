#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ProjectileParameters.h"
#include "ThrowSettings.h"
#include "ThrowParameters.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FThrowParameters {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FProjectileParameters mProjectileParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FThrowSettings mSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector mDirection;
    
public:
    FThrowParameters();
};

