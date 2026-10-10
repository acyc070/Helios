#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlaypalRespawnPoint.generated.h"

class UBillboardComponent;
class USceneComponent;

UCLASS(Blueprintable)
class HELIOS_API APlaypalRespawnPoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* mDefaultSceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* mBillboardComponent;
    
    APlaypalRespawnPoint(const FObjectInitializer& ObjectInitializer);

};

