#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterRepulsionComponent.generated.h"

class UChalkboardWrapper;
class UCharacterRepulsionComponent;
class UFlowControlComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UCharacterRepulsionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMaxRepulsionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMaxRepulsionStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mCharactersToRepulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mRepulsionPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UChalkboardWrapper* mCharacterChalkboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFlowControlComponent* mCharacterFlowControlComponent;
    
public:
    UCharacterRepulsionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool Enabled);
    
    UFUNCTION(BlueprintPure)
    bool IsRepulsing() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRepulsionPriority() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxRepulsionStrength() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxRepulsionDistance() const;
    
    UFUNCTION(BlueprintPure)
    bool CanBeRepulsedBy(UCharacterRepulsionComponent* otherRepulsionComponent) const;
    
};

