#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HelComponentReference.generated.h"

class AActor;
class UActorComponent;

USTRUCT(BlueprintType)
struct FHelComponentReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mComponentProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UActorComponent> mClassToFind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorComponent* mCachedComponent;
    
    HELIOS_API FHelComponentReference();
};

