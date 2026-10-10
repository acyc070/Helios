#pragma once
#include "CoreMinimal.h"
#include "DebugMenuLevel.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct KOSMOSGAMEPLUGIN_API FDebugMenuLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> Level;
    
    FDebugMenuLevel();
};

