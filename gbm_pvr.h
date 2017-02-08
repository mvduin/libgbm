#pragma once

#include "gbmint.h"

#ifdef __cplusplus
extern "C" {
#endif

// defined by libpvrGBMWSEGL.so:

struct gbm_device *
gbm_pvr_create_device(int fd);

extern  struct gbm_backend
gbm_backend; // = { "pvr", gbm_pvr_create_device };

#ifdef __cplusplus
}
#endif
