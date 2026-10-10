#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESaveDataCategory.h"
#include "SaveSlotStateEventDelegate.h"
#include "SaveSlot.generated.h"

class UHeliosSave;

UCLASS(Blueprintable)
class HELIOS_API USaveSlot : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveSlotStateEvent mOnSaveStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveSlotStateEvent mOnSaveFinished;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ESaveDataCategory, UHeliosSave*> mSaveData;
    
public:
    USaveSlot();

    UFUNCTION()
    void OnSaveStarted();
    
    UFUNCTION()
    void OnSaveCompleted();
    
};

