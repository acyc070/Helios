#pragma once
#include "CoreMinimal.h"
#include "ChalkboardSectionKey.h"
#include "ChalkboardValueEventDelegateDelegate.generated.h"

class UChalkboardWrapper;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FChalkboardValueEventDelegate, UChalkboardWrapper*, chalkboard, FChalkboardSectionKey, sectionKey);

