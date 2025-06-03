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
#define DYWOQC_HAS_ATTRIBUTE
#endif

#endif