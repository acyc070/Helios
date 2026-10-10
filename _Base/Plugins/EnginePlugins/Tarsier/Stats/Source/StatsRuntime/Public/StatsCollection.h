#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "StatsCollection.generated.h"

class UEnum;

UCLASS(Blueprintable)
class STATSRUNTIME_API UStatsCollection : public USaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEnum* mEnum;
    
public:
    UStatsCollection();

};

