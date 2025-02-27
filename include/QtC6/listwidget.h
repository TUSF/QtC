#pragma once

#include "private/widget_defs.h"
#include "private/common.h"
#include "string.h"

#ifdef __cplusplus
extern "C" {
#endif

QtC_COMMON_DECLS(ListWidget);

QtC_ListWidget* QtC_ListWidget_create(
    QtC_Widget* parent
);

void QtC_ListWidget_addItemString(
    QtC_ListWidget* self,
    const QtC_String* item
);

#ifdef __cplusplus
}
#endif
