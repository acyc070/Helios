#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "PuzzlePieceActor.h"
#include "PuzzleColliderBoxActor.generated.h"

class AActor;
class UBoxComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class HELIOS_API APuzzleColliderBoxActor : public APuzzlePieceActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool doTriggerWithPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool doTriggerWithPlaypal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool doTriggerWithOthers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* mRootBoxComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> mOverlapActors;
    
public:
    APuzzleColliderBoxActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void OnBoxComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnBoxComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintPure)
    TArray<AActor*> GetActorsInCollider() const;
    
};

