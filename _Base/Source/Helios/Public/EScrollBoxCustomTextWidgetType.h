#pragma once
#include "CoreMinimal.h"
#include "EScrollBoxCustomTextWidgetType.generated.h"

UENUM()
enum class EScrollBoxCustomTextWidgetType : int32 {
    TextBlock,
    CenteredTextBlock,
    RightAlignedTextBlock,
    Bullet_1,
    Bullet_2,
    Bullet_3,
    RightBullet_1,
    RightBullet_2,
    RightBullet_3,
    CustomBullet_1,
    CustomBullet_2,
    RightCustomBullet_1,
};

