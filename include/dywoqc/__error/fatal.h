#ifndef DYWOQC_ERROR_FATAL_H
#define DYWOQC_ERROR_FATAL_H

#include "../__config.h"

DYWOQC_EXTERN_CXX_START

DYWOQC_EXPORTED_FROM_ABI void __dywoqc_error_fatal(const char *__message);
DYWOQC_EXPORTED_FROM_ABI void __dywoqc_error_fatal_message(const char *__message);
DYWOQC_EXPORTED_FROM_ABI void __dywoqc_error_fatal_exit();

DYWOQC_EXTERN_CXX_END

#endif