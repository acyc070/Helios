#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Chaos/ChaosEngineInterface.h"
#include "ClimbableBaseComponent.h"
#include "ELedgeExitOnTopTypes.h"
#include "LedgeSpline.h"
#include "GrabbableLedgeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UGrabbableLedgeComponent : public UClimbableBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPhysicalSurface> mPhysicalSurfaceOverride;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLedgeSpline mLedgeSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mLedgeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mLedgeEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mAllowClimbUpOnTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIgnoreBlockingCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELedgeExitOnTopTypes mExitOnTopType;
    
public:
    UGrabbableLedgeComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetLedgeEnabled(bool Enabled);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsLedgeEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool GetClosestPointOnLedge(const FVector& Location, bool mustBeClimbable, float minimumDistanceToEdge, FVector& outClosestPoint, FVector& outLedgeForward) const;
    
};

