#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DebugMenuLevel.h"
#include "DebugMenuLevelList.generated.h"

UCLASS(Blueprintable)
class KOSMOSGAMEPLUGIN_API UDebugMenuLevelList : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDebugMenuLevel> LevelList;
    
public:
    UDebugMenuLevelList();

};

