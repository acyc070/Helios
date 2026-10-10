#pragma once
#include "CoreMinimal.h"
#include "HeliosMenuWidget.h"
#include "HeliosCreditsScreen.generated.h"

class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class HELIOS_API UHeliosCreditsScreen : public UHeliosMenuWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CreditsList;
    
    UHeliosCreditsScreen();

};

