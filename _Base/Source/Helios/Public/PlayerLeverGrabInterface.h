#pragma once
#include "CoreMinimal.h"
#include "BaseGrabberInterface.h"
#include "GrabHandIKSettings.h"
#include "MovementLogicOverrideInterface.h"
#include "ObjectSelectionSettings.h"
#include "ObjectSelectorInterface.h"
#include "ReachParameters.h"
#include "PlayerLeverGrabInterface.generated.h"

class UGrabHelper;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UPlayerLeverGrabInterface : public UBaseGrabberInterface, public IObjectSelectorInterface, public IMovementLogicOverrideInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectSelectionSettings mObjectSelectionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mCanAutoGrab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrabHandIKSettings mCrankRightHandIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrabHandIKSettings mCrankLeftHandIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReachParameters mTransitionReachParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mLerpTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGrabHelper* mGrabbedGrabHelper;
    
public:
    UPlayerLeverGrabInterface(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

