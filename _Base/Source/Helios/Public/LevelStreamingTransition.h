#pragma once
#include "CoreMinimal.h"
#include "Transition.h"
#include "LevelStreamingTransition.generated.h"

class ULevelStreaming;

UCLASS(Abstract, Blueprintable)
class ULevelStreamingTransition : public UTransition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelStreaming* mManagedLevel;
    
public:
    ULevelStreamingTransition();

protected:
    UFUNCTION()
    void OnLevelUnloaded();
    
    UFUNCTION()
    void OnLevelRemovedFromWorld();
    
    UFUNCTION()
    void OnLevelLoaded();
    
    UFUNCTION()
    void OnLevelAddedToWorld();
    
};

