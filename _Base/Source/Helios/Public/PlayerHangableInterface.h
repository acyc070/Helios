#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BaseGrabberInterface.h"
#include "FallData.h"
#include "FlowControlAnimNotifyData.h"
#include "JumpThreshold.h"
#include "MovementLogicOverrideInterface.h"
#include "ObjectSelectionSettings.h"
#include "ObjectSelectorInterface.h"
#include "PlayerHangableInterface.generated.h"

class AControlledPawn;
class UCharacterIKControllerComponent;
class UGrabHelper;
class UHangableComponent;
class ULocomotionComponent2;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UPlayerHangableInterface : public UBaseGrabberInterface, public IObjectSelectorInterface, public IMovementLogicOverrideInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FJumpThreshold> mJumpSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mInputCanOverrideAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHangableComponent* mGrabbedHangable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGrabHelper* mGrabbedGrabHelper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    ULocomotionComponent2* mLocomotionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCharacterIKControllerComponent* mCharacterIKControllerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float mJumpOffRegrabTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mVerticalGrabOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mZAdjustment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mCanAutoGrab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIgnoreHangingBlockCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectSelectionSettings mHangableSelectionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IKHandOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mHandIKTranslationStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mHandIKRotationStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mHandIKTranslationWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mHandIKRotationWeight;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float mGrabStartTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform mGrabStartTransform;
    
public:
    UPlayerHangableInterface(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnLandedWhileReleasing(AControlledPawn* Pawn, const FFallData& landData);
    
    UFUNCTION()
    void OnJumpTransitionSucceeded();
    
    UFUNCTION()
    void OnJumpTransitionFailed();
    
    UFUNCTION()
    void OnGrabTransitionFinished();
    
    UFUNCTION()
    void OnGrabTransitionFailed();
    
    UFUNCTION()
    void NotifyHangFinished(const FFlowControlAnimNotifyData& AnimNotify);
    

    // Fix for true pure virtual functions not being implemented
};

