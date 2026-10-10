#pragma once
#include "CoreMinimal.h"
#include "EOnGrabPrototypePiece.h"
#include "GrabbableEntityInterface.h"
#include "PuzzlePieceActor.h"
#include "PrototypePuzzlePieceActor.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class HELIOS_API APrototypePuzzlePieceActor : public APuzzlePieceActor, public IGrabbableEntityInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mInitialProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOnGrabPrototypePiece OnGrabAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool doResetOnRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* mRootSceneComponent;
    
    APrototypePuzzlePieceActor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

