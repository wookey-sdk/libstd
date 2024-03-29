#ifndef ARCH_TYPES_H
#define ARCH_TYPES_H

#define __IN_SEC_VDSO __attribute__((section(".vdso")))

typedef signed char int8_t;
typedef signed short int16_t;
typedef signed int int32_t;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
/* uint64_t is required to by aligned on 8 bytes to avoid compiler optimizations which may
 * use store/load double opcodes which requires 8 bytes aligned data */
__extension__ typedef unsigned long long int uint64_t __attribute__ ((aligned (8)));
/* fully typed log buffer size */
typedef uint8_t logsize_t;
/* POSIX compliant typing for time_t type */
typedef long time_t;


/* ARMv7M is 32bit wordsize core */
#define __WORDSIZE 32

#define NULL				((void *)0)

/* 32bits targets specific */
typedef uint32_t physaddr_t;

/* Defining 32 bits registers type. registers are volatile content,
 * even when using Frama-C. This should prevent some ToCToU */
typedef volatile uint32_t* register_t;

typedef unsigned int __size_t;
typedef int __ssize_t;

#endif/*!ARCH_TYPES_H*/
