#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "ChalkboardSectionKey.h"
#include "TypeInfo.h"
#include "ChalkboardBlueprintsLibrary.generated.h"

class UChalkboardWrapper;

UCLASS(Blueprintable)
class HELIOS_API UChalkboardBlueprintsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UChalkboardBlueprintsLibrary();

    UFUNCTION(BlueprintPure)
    static FString ToString(const FChalkboardSectionKey& sectionKey);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveChalkboardValue(UChalkboardWrapper* chalkboard, FChalkboardSectionKey sectionKey);
    
    UFUNCTION(BlueprintPure)
    static FTypeInfo MakeTypeInfo(FTypeInfo Type);
    
    UFUNCTION(BlueprintPure)
    static FChalkboardSectionKey MakeChalkboardSectionKeyFromName(FName sectionKeyPath, FTypeInfo Type);
    
    UFUNCTION(BlueprintPure)
    static FChalkboardSectionKey MakeChalkboardSectionKey(FChalkboardSectionKey Value);
    
    UFUNCTION(BlueprintPure)
    static bool HasChalkboardValue(UChalkboardWrapper* chalkboard, FChalkboardSectionKey sectionKey);
    
    UFUNCTION(BlueprintPure)
    static void GetChalkboardValue(UChalkboardWrapper* chalkboard, FChalkboardSectionKey sectionKey, FGenericStruct& Value, bool& hasValue);
    
    UFUNCTION(BlueprintPure)
    static bool Equals(const FChalkboardSectionKey& sectionKey1, const FChalkboardSectionKey& sectionKey2);
    
    UFUNCTION(BlueprintPure)
    static void BreakChalkboardSectionKey(FChalkboardSectionKey sectionKey, FName& sectionKeyPath, FTypeInfo& Type);
    
    UFUNCTION(BlueprintCallable)
    static void AddChalkboardValue(UChalkboardWrapper* chalkboard, FChalkboardSectionKey sectionKey, int32 Value);
    
};

