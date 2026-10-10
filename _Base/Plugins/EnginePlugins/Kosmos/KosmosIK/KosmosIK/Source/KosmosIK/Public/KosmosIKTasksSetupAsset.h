#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "KosmosIKTasksSetupAsset.generated.h"

class UKosmosIKTaskSetup;

UCLASS(Blueprintable)
class KOSMOSIK_API UKosmosIKTasksSetupAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UKosmosIKTaskSetup*> TaskSetups;
    
    UKosmosIKTasksSetupAsset();

};

