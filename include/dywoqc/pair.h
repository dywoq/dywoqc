#ifndef DYWOQC_PAIR_H
#define DYWOQC_PAIR_H

#include "__config.h"
#include <stdint.h>

DYWOQC_EXTERN_CXX_START

#define DYWOQC_PAIR_TYPE_TYPEDEF(first_type, second_type)                                          \
  typedef struct {                                                                                 \
    first_type first;                                                                              \
    second_type second;                                                                            \
  }

#define DYWOQC_PAIR_ANONYMOUS(first_type, second_type)                                             \
  struct {                                                                                         \
    first_type first;                                                                              \
    second_type second;                                                                            \
  }

DYWOQC_EXTERN_CXX_END

#endif