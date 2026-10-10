#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AkAuxSender.generated.h"

class UAkAuxBus;
class UAkComponent;

UCLASS(Blueprintable)
class AKAUDIO_API AAkAuxSender : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAuxBus* mAuxBus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mSendLevel;
    
    AAkAuxSender(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetListeners(TArray<UAkComponent*> inListeners);
    
    UFUNCTION(BlueprintCallable)
    void Activate(bool Inactive);
    
};

