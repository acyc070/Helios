#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActorWEventDelegateDelegate.h"
#include "DamageWEventDelegateDelegate.h"
#include "GenericDangerWEventDelegateDelegate.h"
#include "NoiseWEventDelegateDelegate.h"
#include "PawnGestureWEventDelegate.h"
#include "PawnWEventDelegateDelegate.h"
#include "ScreamWEventDelegateDelegate.h"
#include "WeaponAttackDangerWEventDelegateDelegate.h"
#include "WorldEventDelegateDelegate.h"
#include "WorldEventReceiverProxy.h"
#include "WorldEventReceiver.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UWorldEventReceiver : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldEventDelegate OnGenericEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorWEventDelegate OnActorEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPawnWEventDelegate OnPawnEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoiseWEventDelegate OnNoiseEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScreamWEventDelegate OnScreamEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageWEventDelegate OnDamageEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericDangerWEventDelegate OnGenericDangerEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponAttackDangerWEventDelegate OnWeaponAttackDangerEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPawnGestureWEvent OnPawnGestureEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    TArray<FWorldEventReceiverProxy> mReceiverProxies;
    
    UWorldEventReceiver(const FObjectInitializer& ObjectInitializer);

};

