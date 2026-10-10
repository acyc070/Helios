#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RoomVolumesCustomFloatSettings.h"
#include "RoomVolumesCustomVectorSettings.h"
#include "RoomVolumesDefaultTemplate.h"
#include "RoomVolumesTemplateEntry.h"
#include "RoomVolumeProjectSettings.generated.h"

UCLASS(Blueprintable, Config=Game)
class HELIOS_API URoomVolumeProjectSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRoomVolumesDefaultTemplate mDefaultTemplate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRoomVolumesTemplateEntry> mTemplates;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRoomVolumesCustomFloatSettings> mCustomBlendingFloat;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRoomVolumesCustomVectorSettings> mCustomBlendingVector;
    
    URoomVolumeProjectSettings();

};

