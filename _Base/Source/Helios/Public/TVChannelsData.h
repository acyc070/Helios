#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TVChannelsData.generated.h"

class UAkAudioEvent;
class UMaterialInterface;
class UTexture;

USTRUCT(BlueprintType)
struct HELIOS_API FTVChannelsData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* mChannelMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* mChannelTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* mChannelAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool emmitsLight;
    
    FTVChannelsData();
};

