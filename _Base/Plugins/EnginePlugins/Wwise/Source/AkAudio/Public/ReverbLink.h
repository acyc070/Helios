#pragma once
#include "CoreMinimal.h"
#include "ReverbLink.generated.h"

class AAkAudioVolume;

USTRUCT(BlueprintType)
struct FReverbLink {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AAkAudioVolume> mSendVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AAkAudioVolume> mReceiveVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mReverbLinkVolume;
    
    AKAUDIO_API FReverbLink();
};

