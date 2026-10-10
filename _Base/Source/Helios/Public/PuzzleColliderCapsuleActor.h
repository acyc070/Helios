#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "PuzzlePieceActor.h"
#include "PuzzleColliderCapsuleActor.generated.h"

class AActor;
class UCapsuleComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class HELIOS_API APuzzleColliderCapsuleActor : public APuzzlePieceActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool doTriggerWithPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool doTriggerWithPlaypal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool doTriggerWithOthers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* mRootCapsuleComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> mOverlapActors;
    
public:
    APuzzleColliderCapsuleActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void OnCapsuleComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnCapsuleComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintPure)
    TArray<AActor*> GetActorsInCollider() const;
    
};

