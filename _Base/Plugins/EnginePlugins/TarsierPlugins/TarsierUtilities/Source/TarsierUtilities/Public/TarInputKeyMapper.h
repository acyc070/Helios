#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/PlayerInput.h"
#include "InputCoreTypes.h"
#include "EHeliosInputScheme.h"
#include "TarInputActionKeyMapping.h"
#include "TarInputAxisKeyMapping.h"
#include "TarInputKeyMapper.generated.h"

class APlayerController;
class UDataTable;
class UInputSettings;

UCLASS(Blueprintable)
class TARSIERUTILITIES_API UTarInputKeyMapper : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ForbiddenKeysToBind;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInputSettings* EngineInputSettings;
    
public:
    UTarInputKeyMapper();

    UFUNCTION(BlueprintCallable)
    void SaveMappings();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAxisMapping(FTarInputAxisKeyMapping Mapping);
    
    UFUNCTION(BlueprintCallable)
    void RemoveActionMapping(FTarInputActionKeyMapping Mapping);
    
    UFUNCTION(BlueprintCallable)
    bool RemapToScheme(EHeliosInputScheme NewScheme);
    
    UFUNCTION(BlueprintCallable)
    bool RemapAxis(FTarInputAxisKeyMapping oldMapping, FTarInputAxisKeyMapping newMapping);
    
    UFUNCTION(BlueprintCallable)
    bool RemapAction(FTarInputActionKeyMapping oldMapping, FTarInputActionKeyMapping newMapping);
    
    UFUNCTION(BlueprintPure)
    bool KeyHasPriority(const FKey& Key, bool PrioritizeGamepadKey) const;
    
    UFUNCTION(BlueprintPure)
    bool IsKeyForbiddenToBind(const FKey& Key) const;
    
    UFUNCTION(BlueprintCallable)
    void InvertAxis(const FName AxisName, APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    bool GetInvertAxis(const FName AxisName, APlayerController* PlayerController);
    
    UFUNCTION(BlueprintPure)
    TArray<FInputAxisKeyMapping> GetAllDefaultAxisMappings() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FInputActionKeyMapping> GetAllDefaultActionMappings() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FTarInputAxisKeyMapping> GetAllAxisMappings(bool sortArray) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FTarInputActionKeyMapping> GetAllActionMappings(bool sortArray) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddAxisMapping(FTarInputAxisKeyMapping Mapping);
    
    UFUNCTION(BlueprintCallable)
    bool AddActionMapping(FTarInputActionKeyMapping Mapping);
    
};

