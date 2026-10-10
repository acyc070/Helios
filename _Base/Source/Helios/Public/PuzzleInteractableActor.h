#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GrabEventDelegateDelegate.h"
#include "GrabbableLeverInterface.h"
#include "InteractablePPBeingUsedSignatureDelegate.h"
#include "PuzzlePieceActor.h"
#include "PuzzleInteractableActor.generated.h"

class AControlledPawn;
class USceneComponent;

UCLASS(Blueprintable)
class HELIOS_API APuzzleInteractableActor : public APuzzlePieceActor, public IGrabbableLeverInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGrabbableFromFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGrabbableFromBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutomaticInteraction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractablePPBeingUsedSignature OnInteractablePPBeingUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* PuzzlePieceRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* FrontPlayerPositionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* BackPlayerPositionComponent;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrabEventDelegate mOnGrabEvent;
    
public:
    APuzzleInteractableActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveInteractablePPBeingUsed(AControlledPawn* Pawn, FVector inputFromController, FVector inputFromCameraView, FVector inputFromGrabberForward);
    
    UFUNCTION(BlueprintPure)
    int32 GetNumGrabbers() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AControlledPawn*> GetGrabbers() const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool CanGrabBP(AControlledPawn* Pawn) const;
    

    // Fix for true pure virtual functions not being implemented
};

