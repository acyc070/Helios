#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HeliosActor.generated.h"

class UObjectPropertiesComponent;

UCLASS(Blueprintable)
class HELIOS_API AHeliosActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UObjectPropertiesComponent* mObjectProperties;
    
    AHeliosActor(const FObjectInitializer& ObjectInitializer);

};

