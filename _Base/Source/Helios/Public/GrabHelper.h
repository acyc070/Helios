#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "Chaos/ChaosEngineInterface.h"
#include "EGrabHelperShape.h"
#include "GrabChangedSignatureDelegate.h"
#include "GrabEventDelegateDelegate.h"
#include "GrabHelper.generated.h"

class UWorld;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UGrabHelper : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGrabHelperShape GrabHelperShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPhysicalSurface> mPhysicalSurfaceOverride;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrabEventDelegate mOnGrabEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrabChangedSignature mOnGrabChangedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mCanBeGrabbedAlways;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AIPriorityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mAllowClimbUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool mOccupied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsPassive;
    
public:
    UGrabHelper(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnWorldReloaded(UWorld* World);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPassiveHelper() const;
    
    UFUNCTION(BlueprintPure)
    bool CanStartGrab() const;
    
    UFUNCTION(BlueprintPure)
    bool CanContinueGrab() const;
    
};

