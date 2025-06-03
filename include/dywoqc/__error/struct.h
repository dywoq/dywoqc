#ifndef DYWOQC_ERROR_STRUCT_H
#define DYWOQC_ERROR_STRUCT_H

#include "../__config.h"

DYWOQC_EXTERN_CXX_START

typedef struct {
  const char *message;
} dywoqc_error;
DYWOQC_EXPORTED_FROM_ABI DYWOQC_NODISCARD dywoqc_error *dywoqc_error_create(const char *__message);
DYWOQC_EXPORTED_FROM_ABI void dywoqc_error_exit(const dywoqc_error *__err);
DYWOQC_EXPORTED_FROM_ABI void dywoqc_error_free(dywoqc_error *__err);

DYWOQC_EXTERN_CXX_END

#endif