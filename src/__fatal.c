#include "../include/dywoqc/__fatal.h"
#include <stdio.h>
#include <stdlib.h>

void
__dywoqc_fatal_message(const char *__message) {
  fprintf(stderr, "dywoqc_fatal_error: %s", __message);
}

void
__dywoqc_fatal_exit() {
  exit(EXIT_FAILURE);
}

void
__dywoqc_fatal(const char *__message) {
  __dywoqc_fatal_message(__message);
  __dywoqc_fatal_exit();
}
