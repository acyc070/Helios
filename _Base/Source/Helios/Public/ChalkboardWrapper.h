#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ChalkboardSectionKey.h"
#include "ChalkboardValueEventDelegateDelegate.h"
#include "OnChalkboardDataReloadedDelegate.h"
#include "ChalkboardWrapper.generated.h"

UCLASS(Blueprintable, Transient)
class HELIOS_API UChalkboardWrapper : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UClass*> mLastAddedSectionKeyPathToPointerType;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChalkboardDataReloaded mOnChalkboardDataReloaded;
    
public:
    UChalkboardWrapper();

    UFUNCTION(BlueprintCallable)
    void UnbindOnValueRemoved(FChalkboardSectionKey sectionKey, const FChalkboardValueEventDelegate& Callback);
    
    UFUNCTION(BlueprintCallable)
    void UnbindOnValueChanged(FChalkboardSectionKey sectionKey, const FChalkboardValueEventDelegate& Callback);
    
    UFUNCTION(BlueprintCallable)
    void UnbindOnValueAdded(FChalkboardSectionKey sectionKey, const FChalkboardValueEventDelegate& Callback);
    
    UFUNCTION(BlueprintPure)
    bool HasKey_WithSectionKeyParam(FChalkboardSectionKey sectionKey) const;
    
    UFUNCTION(BlueprintPure)
    UObject* GetObject_WithSectionKeyParam(FChalkboardSectionKey sectionKey) const;
    
    UFUNCTION(BlueprintPure)
    UObject* GetObject(FName sectionPath, FName Key) const;
    
    UFUNCTION(BlueprintCallable)
    void BindOnValueRemoved(FChalkboardSectionKey sectionKey, const FChalkboardValueEventDelegate& Callback);
    
    UFUNCTION(BlueprintCallable)
    void BindOnValueChanged(FChalkboardSectionKey sectionKey, const FChalkboardValueEventDelegate& Callback);
    
    UFUNCTION(BlueprintCallable)
    void BindOnValueAdded(FChalkboardSectionKey sectionKey, const FChalkboardValueEventDelegate& Callback);
    
    UFUNCTION(BlueprintCallable)
    void AddObject(FChalkboardSectionKey sectionKey, UObject* Object);
    
};

