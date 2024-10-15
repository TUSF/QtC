#pragma once

#include "widget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct QtC_BoxLayout QtC_BoxLayout;

typedef enum QtC_BoxLayout_Direction {
    QtC_BoxLayout_Direction_LeftToRight = 0,
    QtC_BoxLayout_Direction_RightToLeft = 1,
    QtC_BoxLayout_Direction_TopToBottom = 2,
    QtC_BoxLayout_Direction_BottomToTop = 3,
} QtC_BoxLayout_Direction;

QtC_BoxLayout* QtC_BoxLayout_create(
    QtC_BoxLayout_Direction direction,
    void* parent
);

#ifdef __cplusplus
}
#endif
