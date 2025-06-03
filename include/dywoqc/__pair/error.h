#ifndef DYWOQC_PAIR_ERROR_H
#define DYWOQC_PAIR_ERROR_H

#include "../__config.h"
#include "../__error/struct.h" // IWYU pragma: keep

DYWOQC_EXTERN_CXX_START

#define DYWOQC_PAIR_ERROR_ANONYMOUS(value_type)                                                    \
  struct {                                                                                         \
    value_type value;                                                                              \
    dywoqc_error *error;                                                                           \
  }

#define DYWOQC_PAIR_ERROR_TYPEDEF(value_type)                                                      \
  typedef struct {                                                                                 \
    value_type value;                                                                              \
    dywoqc_error *error;                                                                           \
  }

DYWOQC_EXTERN_CXX_END

#endif