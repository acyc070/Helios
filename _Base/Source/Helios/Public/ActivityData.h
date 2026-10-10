#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ActivityTaskData.h"
#include "ActivityData.generated.h"

UCLASS(Blueprintable)
class HELIOS_API UActivityData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActivityID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActivityTaskData> Tasks;
    
    UActivityData();

};

