#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "MarketingProjectSettings.generated.h"

class APawn;
class APlayerController;

UCLASS(Blueprintable, Config=Game)
class HELIOS_API UMarketingProjectSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APlayerController> PlayerController;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APawn> Pawn;
    
    UMarketingProjectSettings();

};

