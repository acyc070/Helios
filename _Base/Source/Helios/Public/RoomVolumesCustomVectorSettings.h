#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RoomVolumesCustomVectorSettings.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FRoomVolumesCustomVectorSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mCustomName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mCustomDefault;
    
    FRoomVolumesCustomVectorSettings();
};

