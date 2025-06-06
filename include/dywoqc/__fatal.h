#ifndef _DYWOQC_FATAL_H
#define _DYWOQC_FATAL_H

#include "__config.h"

#if _DYWOQC_HAS_BASE_SUPPORT
#ifdef __cplusplus
extern "C" {
#endif

_DYWOQC_EXPORTED_FROM_ABI void __dywoqc_fatal_message(const char *__message);

_DYWOQC_EXPORTED_FROM_ABI void __dywoqc_fatal_exit();

_DYWOQC_EXPORTED_FROM_ABI void __dywoqc_fatal(const char *__message);

#ifdef __cplusplus
}
#endif
#endif

#endif