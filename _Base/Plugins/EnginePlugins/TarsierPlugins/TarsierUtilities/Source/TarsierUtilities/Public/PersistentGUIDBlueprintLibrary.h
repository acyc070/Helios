#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PersistentGUID.h"
#include "PersistentGUIDBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class TARSIERUTILITIES_API UPersistentGUIDBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPersistentGUIDBlueprintLibrary();

    UFUNCTION(BlueprintPure)
    static FString Conv_PersistentGUIDToString(FPersistentGUID PersistentGUID);
    
    UFUNCTION(BlueprintPure)
    static FName Conv_PersistentGUIDToName(FPersistentGUID PersistentGUID);
    
    UFUNCTION(BlueprintPure)
    static FGuid Conv_PersistentGUIDToGuid(FPersistentGUID PersistentGUID);
    
};

