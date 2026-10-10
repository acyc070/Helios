#pragma once
#include "CoreMinimal.h"
#include "LevelProvider.h"
#include "ChalkboardContext.h"
#include "LevelChalkboardContext.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class HELIOS_API ULevelChalkboardContext : public UChalkboardContext {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mUseLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelProvider mLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> mActor;
    
public:
    ULevelChalkboardContext();

};

