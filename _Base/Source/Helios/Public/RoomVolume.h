#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RoomVolumesCustomFloatSettings.h"
#include "RoomVolumesCustomVectorSettings.h"
#include "RoomVolumesTemplate.h"
#include "RoomVolume.generated.h"

class UTarEditableVolumeComponent;

UCLASS(Blueprintable)
class HELIOS_API ARoomVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FRoomVolumesTemplate mRoomVolumeSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRoomVolumesCustomFloatSettings> mCustomBlendingFloat;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRoomVolumesCustomVectorSettings> mCustomBlendingVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTarEditableVolumeComponent* mRootBoxComponent;
    
    ARoomVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void EndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION()
    void BeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void ApplyRoomVolumeChanges();
    
};

