#ifndef _DYWOQC_ERROR_H
#define _DYWOQC_ERROR_H

#include "__config.h"
#include <stdlib.h>

#if _DYWOQC_HAS_BASE_SUPPORT
#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
  dywoqc_error_code_failure = EXIT_FAILURE,
  dywoqc_error_code_success = EXIT_SUCCESS
} dywoqc_error_code;

#define _DYWOQC_ERROR_PAIR_DECLARE(type)                                       \
  typedef struct {                                                             \
    type value;                                                                \
    dywoqc_error_code err;                                                     \
  }

#ifdef __cplusplus
}
#endif
#endif

#endif