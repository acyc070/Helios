#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BaseGrabberInterface.h"
#include "ClimbInitialSettings.h"
#include "ClimbTraversalData.h"
#include "EClimbDirection.h"
#include "EClimbIdlePose.h"
#include "EClimbableInitType.h"
#include "EClimbableReleaseType.h"
#include "IkClimbLimbSettings.h"
#include "MovementLogicOverrideInterface.h"
#include "ObjectSelectionSettings.h"
#include "ObjectSelectorInterface.h"
#include "ProjectileParameters.h"
#include "ClimbingInterface.generated.h"

class AActor;
class UAnimMetaData;
class UAnimationOverrideComponent;
class UCharacterIKControllerComponent;
class UClimbableComponent;
class UGrabHelper;
class ULocomotionComponent2;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UClimbingInterface : public UBaseGrabberInterface, public IMovementLogicOverrideInterface, public IObjectSelectorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    ULocomotionComponent2* mLocomotionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAnimationOverrideComponent* mAnimationOverrideComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectSelectionSettings mClimbSelectionSettings;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FIkClimbLimbSettings LimbSettings[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClimbInitialSettings InitialSettingsFromWalking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClimbInitialSettings InitialSettingsFromTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClimbInitialSettings InitialSettingsFromFalling;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval FallVelocitySearchInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallVelocitySearchMultiplier;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval HelperWeightAngleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TopWeightUpwardsFirst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TopWeightUpwardsSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TopWeightSidewaysFirst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TopWeightSidewaysSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpTurnDirectionThresholdAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpOffMaxRotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HandPlacementIKPositionStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HandPlacementIKRotationStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TranslationInterpolationStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TranslationInterpolationStrengthZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationInterpolationStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCorrectTranslationError: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCorrectRotationYawError: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCorrectRotationPitchError: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCorrectRotationRollError: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHorizontalSearchOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseClimbTraversalBlockCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpFromTopTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProjectileParameters mJumpParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveName_IKFixUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UClimbableComponent* mChosenClimbable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EClimbableInitType InitializationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EClimbableReleaseType ReleaseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EClimbDirection ClimbDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EClimbIdlePose IdlePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector ClimbMovementVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector InitialGrabLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector InitialGrabDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector DesiredPlayerStartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float InitialAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float InitialCrouchAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GrabStartTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCharacterIKControllerComponent* mCharacterIKComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsJumpingOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCanReturnToPreviousIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWantReturnToPreviousIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCanRegrab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bMotionBlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bJumpOffTurnRight;
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGrabHelper* mInitialGrabHelpers[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FClimbTraversalData ClimbData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool mUseJumpTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool mIsInInitState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector mOptionalJumpTarget;
    
public:
    UClimbingInterface(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void PostProcessAnimNotifies(AActor* Actor);
    
    UFUNCTION()
    void OnTransitionFinished();
    
    UFUNCTION()
    void NotifyLimbPlaced(AActor* Actor, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData);
    
    UFUNCTION()
    void NotifyFindGrabLocation(AActor* Actor, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData);
    
    UFUNCTION()
    void NotifyExitInitState(AActor* Actor, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData);
    
    UFUNCTION()
    void NotifyEndJumpAnimation(AActor* Actor, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData);
    
    UFUNCTION()
    void NotifyEndExitingToTop(AActor* Actor, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData);
    
    UFUNCTION()
    void NotifyEndExitingToFalling(AActor* Actor, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData);
    
    UFUNCTION()
    void NotifyClimbingInDirection(AActor* Actor, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData);
    
    UFUNCTION()
    void NotifyBeginExitingToTop(AActor* Actor, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData);
    
    UFUNCTION()
    void NotifyBeginExitingToFalling(AActor* Actor, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData);
    

    // Fix for true pure virtual functions not being implemented
};

