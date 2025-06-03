#ifndef DYWOQC___CONFIG_H
#define DYWOQC___CONFIG_H

#if defined(__clang__) || defined(__GNUC__)
#define DYWOQC_EXPORTED_FROM_ABI __attribute__((visibility("default")))
#elif defined(_MSC_VER)
#define DYWOQC_EXPORTED_FROM_ABI __declspec(dllexport)
#else
#define DYWOQC_EXPORTED_FROM_ABI
#endif

// attributes
#if defined(__clang__) || defined(__GNUC__)
#define DYWOQC_HAS_ATTRIBUTE(attribute) __has_c_attribute(attribute)
#else
#define DYWOQC_HAS_ATTRIBUTE(attribute)
#endif

#if DYWOQC_HAS_ATTRIBUTE(nodiscard)
#define DYWOQC_NODISCARD [[nodiscard]]
#else
#define DYWOQC_NODISCARD
#endif

#if DYWOQC_HAS_ATTRIBUTE(deprecated)
#define DYWOQC_DEPRECATED [[deprecated]]
#else
#define DYWOQC_DEPRECATED
#endif

#if DYWOQC_HAS_ATTRIBUTE(deprecated)
#define DYWOQC_DEPRECATED_WITH_MESSAGE(message) [[deprecated(message)]]
#else
#define DYWOQC_DEPRECATED_WITH_MESSAGE(message)
#endif

// extern "C++"
#ifdef __cplusplus
#define DYWOQC_EXTERN_CXX_START extern "C++" {
#else
#define DYWOQC_EXTERN_CXX_START
#endif

#ifdef __cplusplus
#define DYWOQC_EXTERN_CXX_END }
#else
#define DYWOQC_EXTERN_CXX_END
#endif

// nullptr, NULL macro
#if defined(__clang__) || defined(__GNUC__)
#define DYWOQC_NULLPTR nullptr
#else
#define DYWOQC_NULLPTR NULL
#endif

#endif