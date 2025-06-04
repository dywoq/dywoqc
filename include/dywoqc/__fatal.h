#ifndef _DYWOQC_FATAL_H
#define _DYWOQC_FATAL_H

#include "__config.h"

_DYWOQC_EXTERN_C _DYWOQC_EXPORTED_FROM_ABI void
__dywoqc_fatal_message(const char *__message);

_DYWOQC_EXTERN_C _DYWOQC_EXPORTED_FROM_ABI void __dywoqc_fatal_exit();

_DYWOQC_EXTERN_C _DYWOQC_EXPORTED_FROM_ABI void
__dywoqc_fatal(const char *__message);

#endif