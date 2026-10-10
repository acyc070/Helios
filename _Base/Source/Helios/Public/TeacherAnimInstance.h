#pragma once
#include "CoreMinimal.h"
#include "AIAnimInstance.h"
#include "TeacherAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class HELIOS_API UTeacherAnimInstance : public UAIAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mWantsHighInvestigate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mHightInvestigateHeight;
    
public:
    UTeacherAnimInstance();

};

