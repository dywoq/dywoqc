#include "../include/dywoqc/error.h"
#include "../include/dywoqc/__fatal.h"
#include <stdio.h>
#include <stdlib.h>

_DYWOQC_EXTERN_C _DYWOQC_EXPORTED_FROM_ABI dywoqc_error *
dywoqc_error_initialize(const char *__message) {
  dywoqc_error *__error = (dywoqc_error *)malloc(sizeof(dywoqc_error *));
  if (__error == _DYWOQC_NULLPTR)
    __dywoqc_fatal("failed to allocate dywoqc_error instance "
                   "(source: dywoqc_error_initialize)");
  __error->message = __message;
  return __error;
}

_DYWOQC_EXTERN_C _DYWOQC_EXPORTED_FROM_ABI void
dywoqc_error_free(dywoqc_error *__error) {
  if (__error == _DYWOQC_NULLPTR)
    return;
  free(__error);
  __error = nullptr;
}

_DYWOQC_EXTERN_C _DYWOQC_EXPORTED_FROM_ABI dywoqc_error *
dywoqc_error_exit(const dywoqc_error *__error) {
  fprintf(stderr, "%s", __error->message);
  exit(EXIT_FAILURE);
}