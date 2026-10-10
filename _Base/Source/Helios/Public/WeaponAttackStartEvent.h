#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DangerEvent.h"
#include "WeaponAttackStartEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct HELIOS_API FWeaponAttackStartEvent : public FDangerEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mActorUsingWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mAttackDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAttackRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mOptionalActorGettingAttacked;
    
    FWeaponAttackStartEvent();
};

