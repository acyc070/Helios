#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LatentAIOrderHolder.generated.h"

class UAIScriptedOrder;

UCLASS(Blueprintable)
class ULatentAIOrderHolder : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAIScriptedOrder* mOrder;
    
public:
    ULatentAIOrderHolder();

};

