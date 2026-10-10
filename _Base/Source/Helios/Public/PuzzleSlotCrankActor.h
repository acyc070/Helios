#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "PuzzleCrankActor.h"
#include "PuzzlePieceEditorDropDown.h"
#include "SlotPuzzlePieceInterface.h"
#include "PuzzleSlotCrankActor.generated.h"

class AActor;
class UPuzzleSlotReceiverComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class HELIOS_API APuzzleSlotCrankActor : public APuzzleCrankActor, public ISlotPuzzlePieceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPuzzlePieceEditorDropDown> mSlotables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> mSlotablesNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAttachmentDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mSpeedAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPuzzlePieceEditorDropDown> mAutoAttachPPs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mAutoInsertCrank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* mRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPuzzleSlotReceiverComponent* mSlotReceiver;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPuzzleSlotReceiverComponent*> mReceivers;
    
public:
    APuzzleSlotCrankActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool HasCrankBP();
    
    UFUNCTION(BlueprintPure)
    float GetHeightRelativeToInserter(AActor* inserter) const;
    
    UFUNCTION(BlueprintCallable)
    void DetachAllCarriables();
    
    UFUNCTION(BlueprintCallable)
    void AttachPickupComponent(AActor* pickupActor, bool instant);
    
    UFUNCTION(BlueprintCallable)
    void AttachCarriable(FPuzzlePieceEditorDropDown carriable, bool instant);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void OnActorHitEvent(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) override PURE_VIRTUAL(OnActorHitEvent,);
    
};

