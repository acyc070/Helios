#pragma once
#include "CoreMinimal.h"
#include "EDoctorStethoscopeAnimEnum.generated.h"

UENUM()
enum class EDoctorStethoscopeAnimEnum : uint8 {
    DStethoscope_Start,
    DStethoscope_Loop,
    DStethoscope_Stop,
    DStethoscope_React,
};

