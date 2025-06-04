#ifndef _DYWOQC_ERROR_H
#define _DYWOQC_ERROR_H

#include "__config.h"

#if _DYWOQC_HAS_BASE_SUPPORT
typedef struct {
  const char *message;
} dywoqc_error;

_DYWOQC_EXTERN_C _DYWOQC_EXPORTED_FROM_ABI dywoqc_error *dywoqc_error_initialize(const char *__message);
_DYWOQC_EXTERN_C _DYWOQC_EXPORTED_FROM_ABI void dywoqc_error_free(dywoqc_error *__error);
_DYWOQC_EXTERN_C _DYWOQC_EXPORTED_FROM_ABI dywoqc_error *dywoqc_error_exit(const dywoqc_error *__error);
#endif

#endif