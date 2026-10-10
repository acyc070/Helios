#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "ESaveDataCategory.h"
#include "HeliosSave.generated.h"

UCLASS(Blueprintable)
class HELIOS_API UHeliosSave : public USaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mUserIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESaveDataCategory mCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool mIsDirty;
    
public:
    UHeliosSave();

};

