#pragma once
#include "CoreMinimal.h"
#include "RoomVolumesTemplate.h"
#include "RoomVolumesDefaultTemplate.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FRoomVolumesDefaultTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRoomVolumesTemplate mRoomVolumeSettings;
    
    FRoomVolumesDefaultTemplate();
};

