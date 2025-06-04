#include "../include/dywoqc/fatal.h"
#include <stdio.h>
#include <stdlib.h>

_DYWOQC_EXTERN_C _DYWOQC_EXPORTED_FROM_ABI void
__dywoqc_fatal_message(const char *__message) {
  fprintf(stderr, "dywoqc_fatal_error: %s", __message);
}

_DYWOQC_EXTERN_C _DYWOQC_EXPORTED_FROM_ABI void
__dywoqc_fatal_exit() {
  exit(EXIT_FAILURE);
}

_DYWOQC_EXTERN_C _DYWOQC_EXPORTED_FROM_ABI void
__dywoqc_fatal(const char *__message) {
  __dywoqc_fatal_message(__message);
  __dywoqc_fatal_exit();
}
