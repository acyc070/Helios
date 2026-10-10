#pragma once
#include "CoreMinimal.h"
#include "RoomVolumesCustomFloatSettings.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FRoomVolumesCustomFloatSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mCustomName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mCustomDefault;
    
    FRoomVolumesCustomFloatSettings();
};

