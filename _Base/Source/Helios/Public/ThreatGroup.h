#pragma once
#include "CoreMinimal.h"
#include "CharacterThreatSettings.h"
#include "EPawnType.h"
#include "EThreatLevel.h"
#include "ThreatGroup.generated.h"

class AControlledPawn;

USTRUCT(BlueprintType)
struct FThreatGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPawnType mPawnType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EThreatLevel mThreatLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AControlledPawn> mHighestThreatInGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mNumberOfThreats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterThreatSettings mCharacterThreatSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mInsideActiveAudioVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mDistanceToPlayer;
    
    HELIOS_API FThreatGroup();
};

