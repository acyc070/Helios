#pragma once
#include "CoreMinimal.h"
#include "PuzzlePieceActor.h"
#include "PuzzleCarryableActor.generated.h"

class UPickupComponent;
class USceneComponent;

UCLASS(Blueprintable, Deprecated, NotPlaceable)
class HELIOS_API ADEPRECATED_PuzzleCarryableActor : public APuzzlePieceActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mEjectSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mEjectDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* mRootSceneComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPickupComponent* mNewPickupComponent;
    
public:
    ADEPRECATED_PuzzleCarryableActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void DetachFromSlot(bool eject);
    
};

