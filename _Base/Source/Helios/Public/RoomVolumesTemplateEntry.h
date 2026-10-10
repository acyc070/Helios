#pragma once
#include "CoreMinimal.h"
#include "RoomVolumesTemplate.h"
#include "RoomVolumesTemplateEntry.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FRoomVolumesTemplateEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString mTemplateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString mTemplateDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRoomVolumesTemplate mRoomVolumeSettings;
    
    FRoomVolumesTemplateEntry();
};

