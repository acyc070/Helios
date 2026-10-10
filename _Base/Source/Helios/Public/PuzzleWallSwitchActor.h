#pragma once
#include "CoreMinimal.h"
#include "HeliosFloatInterval.h"
#include "PuzzlePieceActor.h"
#include "PuzzleWallSwitchActor.generated.h"

class UBaseGrabberInterface;
class UFlowControlComponent;
class UGrabHelper;
class UHangableComponent;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class HELIOS_API APuzzleWallSwitchActor : public APuzzlePieceActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mInitialProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHeliosFloatInterval mLeverAngleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mDroppingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool doBackToPositionOnRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* mRootSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* mBaseMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* mSwitchMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHangableComponent* mHangableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGrabHelper* mGrabHelper;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFlowControlComponent* mUserFlowControlComponent;
    
public:
    APuzzleWallSwitchActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void OnHangableComponentStartGrab(UHangableComponent* hangable, const UBaseGrabberInterface* grabber);
    
    UFUNCTION()
    void OnHangableComponentEndGrab(UHangableComponent* hangable, const UBaseGrabberInterface* grabber);
    
};

