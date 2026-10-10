#pragma once
#include "CoreMinimal.h"
#include "Engine/Scene.h"
#include "RoomVolumeFogSettings.h"
#include "RoomVolumesTemplate.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FRoomVolumesTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bEnableFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float mAlphaSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FPostProcessSettings mPostProcessSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FRoomVolumeFogSettings mFogSettings;
    
    FRoomVolumesTemplate();
};

