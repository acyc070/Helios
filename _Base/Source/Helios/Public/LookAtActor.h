#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LookAtActor.generated.h"

class ULookAtPoint;

UCLASS(Blueprintable)
class HELIOS_API ALookAtActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULookAtPoint* mLookAtPointComponent;
    
    ALookAtActor(const FObjectInitializer& ObjectInitializer);

};

