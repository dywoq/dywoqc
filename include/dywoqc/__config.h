#ifndef _DYWOQC__CONFIG_H
#define _DYWOQC__CONFIG_H

// exporting
#if defined(__clang__) || defined(__GNUC__)
#  define _DYWOQC_EXPORTED_FROM_ABI __attribute__((visibility("default")))
#elif defined(_MSC_VER)
#  define _DYWOQC_EXPORTED_FROM_ABI __declspec(dllexport)
#else
#  define _DYWOQC_EXPORTED_FROM_ABI
#endif

// attributes
#if defined(__clang__) || defined(__GNUC__)
#  define _DYWOQC_HAS_ATTRIBUTE(attribute) __has_c_attribute(attribute)
#else
#  define _DYWOQC_HAS_ATTRIBUTE(attribute)
#endif

#if _DYWOQC_HAS_ATTRIBUTE(nodiscard)
#  define _DYWOQC_NODISCARD [[nodiscard]]
#else
#  define _DYWOQC_NODISCARD
#endif

#if _DYWOQC_HAS_ATTRIBUTE(deprecated)
#  define _DYWOQC_DEPRECATED(message) [[deprecated(message)]]
#else
#  define _DYWOQC_DEPRECATED(message)
#endif

#if defined(__cplusplus)
#  define _DYWOQC_EXTERN_C extern "C"
#else
#  define _DYWOQC_EXTERN_C
#endif

#endif