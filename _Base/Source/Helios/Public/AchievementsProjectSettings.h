#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AchievementData.h"
#include "AchievementsProjectSettings.generated.h"

UCLASS(Blueprintable, Config=Game)
class HELIOS_API UAchievementsProjectSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAchievementData> AchievementList;
    
    UAchievementsProjectSettings();

};

