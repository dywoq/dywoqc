#include "../include/dywoqc/error.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

DYWOQC_EXPORTED_FROM_ABI void __dywoqc_error_fatal_message(const char *__message) {
  fprintf(stderr, "%s\n", __message);
}

DYWOQC_EXPORTED_FROM_ABI void __dywoqc_error_fatal_exit() { exit(EXIT_FAILURE); }

DYWOQC_EXPORTED_FROM_ABI void __dywoqc_error_fatal(const char *__message) {
  __dywoqc_error_fatal_message(__message);
  __dywoqc_error_fatal_exit();
}

DYWOQC_EXPORTED_FROM_ABI DYWOQC_NODISCARD dywoqc_error *dywoqc_error_create(const char *__message) {
  dywoqc_error *__error = (dywoqc_error *)malloc(sizeof(dywoqc_error));

  if (__error == DYWOQC_NULLPTR)
    __dywoqc_error_fatal(
        "failed to allocate memory for dywoqc_error (source: dywoqc_error_create)");

  __error->message = strdup(__message);
  if (__error->message == DYWOQC_NULLPTR) {
    __dywoqc_error_fatal_message(
        "failed to duplicate error message string for new error (source: dywoqc_error_create)");
    free(__error);
    __dywoqc_error_fatal_exit();
  }

  return __error;
}

DYWOQC_EXPORTED_FROM_ABI void dywoqc_error_exit(const dywoqc_error *__err) {
  fprintf(stderr, "%s", __err->message);
  __dywoqc_error_fatal_exit();
}

DYWOQC_EXPORTED_FROM_ABI void dywoqc_error_free(dywoqc_error *__err) {
  if (__err == DYWOQC_NULLPTR)
    return;

  if (__err->message != DYWOQC_NULLPTR) {
    free((void *)__err->message);
    __err->message = DYWOQC_NULLPTR;
  }

  free(__err);
}
