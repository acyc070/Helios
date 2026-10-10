#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DraggableInterface.h"
#include "EGrabReleaseOptions.h"
#include "GrabEventDelegateDelegate.h"
#include "PuzzlePieceActor.h"
#include "PuzzleSimpleDraggableActor.generated.h"

class AControlledPawn;
class UGrabHelper;

UCLASS(Blueprintable)
class HELIOS_API APuzzleSimpleDraggableActor : public APuzzlePieceActor, public IDraggableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresCooperative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseInteracterVelocity;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrabEventDelegate mOnGrabEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mShouldDoEncroachmentCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UGrabHelper*> mGrabHelpers;
    
public:
    APuzzleSimpleDraggableActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ReleaseGrab(EGrabReleaseOptions releaseOption);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnForceApplied(const FVector& InputVector, AControlledPawn* pusher);
    
    UFUNCTION(BlueprintPure)
    int32 GetNumGrabbers() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AControlledPawn*> GetGrabbers() const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool CanGrabBP(AControlledPawn* Pawn) const;
    

    // Fix for true pure virtual functions not being implemented
};

