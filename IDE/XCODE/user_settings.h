/* wolfssl options.h
 * generated from configure options
 *
 * Copyright (C) 2006-2015 wolfSSL Inc.
 *
 * This file is part of wolfSSL. (formerly known as CyaSSL)
 *
 */

#ifndef WOLFSSL_OPTIONS_H
#define WOLFSSL_OPTIONS_H

#define IPHONE  /* Needed for Xcode */

#ifdef __cplusplus
extern "C" {
#endif
    
#ifndef WOLFSSL_OPTIONS_IGNORE_SYS
#undef  _POSIX_THREADS
#define _POSIX_THREADS
#endif
    
#undef  DEBUG_WOLFSSL
#define DEBUG_WOLFSSL
    
#undef  HAVE_THREAD_LS
#define HAVE_THREAD_LS
    
#undef  TFM_TIMING_RESISTANT
#define TFM_TIMING_RESISTANT
    
#undef  ECC_TIMING_RESISTANT
#define ECC_TIMING_RESISTANT
    
#undef  WC_RSA_BLINDING
#define WC_RSA_BLINDING
    
#undef  HAVE_AESGCM
#define HAVE_AESGCM
    

    
#undef  WOLFSSL_SHA512
#define WOLFSSL_SHA512
    
#undef  WOLFSSL_SHA384
#define WOLFSSL_SHA384
    
#undef  NO_DSA
#define NO_DSA
    
#undef  HAVE_ECC
#define HAVE_ECC
    
#undef  TFM_ECC256
#define TFM_ECC256
    
#undef  ECC_SHAMIR
#define ECC_SHAMIR
    
#undef  NO_OLD_TLS
#define NO_OLD_TLS
    
#undef  NO_RSA
#define NO_RSA
    
#undef  NO_DH
#define NO_DH
    
#undef  WOLFSSL_BASE64_ENCODE
#define WOLFSSL_BASE64_ENCODE
    
#undef  NO_RC4
#define NO_RC4
    
#undef  NO_MD5
#define NO_MD5
    
#undef  NO_OLD_TLS
#define NO_OLD_TLS
    
#undef  NO_SHA
#define NO_SHA
    
#undef  NO_OLD_TLS
#define NO_OLD_TLS
    
#undef  NO_HC128
#define NO_HC128
    
#undef  NO_RABBIT
#define NO_RABBIT
    
#undef  WOLFSSL_SHA224
#define WOLFSSL_SHA224
    
#undef  WOLFSSL_SHA3
#define WOLFSSL_SHA3
    
#undef  HAVE_HASHDRBG
#define HAVE_HASHDRBG
    
#undef  NO_FILESYSTEM
#define NO_FILESYSTEM
    
#undef  HAVE_TLS_EXTENSIONS
#define HAVE_TLS_EXTENSIONS
    
#undef  HAVE_SUPPORTED_CURVES
#define HAVE_SUPPORTED_CURVES
    
#undef  HAVE_EXTENDED_MASTER
#define HAVE_EXTENDED_MASTER
    
#undef  NO_PSK
#define NO_PSK
    
#undef  NO_MD4
#define NO_MD4
    
#undef  NO_PWDBASED
#define NO_PWDBASED
    
#undef  WOLFCRYPT_ONLY
#define WOLFCRYPT_ONLY
    
#undef  USE_FAST_MATH
#define USE_FAST_MATH
    
#undef  WOLFSSL_X86_64_BUILD
#define WOLFSSL_X86_64_BUILD
    
#undef  WC_NO_ASYNC_THREADING
#define WC_NO_ASYNC_THREADING
    
#undef  NO_DES3
#define NO_DES3
    
#undef  HAVE___UINT128_T
#define HAVE___UINT128_T
    
    /* single precision math */
#if 1
#define WOLFSSL_HAVE_SP_RSA
#define WOLFSSL_HAVE_SP_DH
#define WOLFSSL_HAVE_SP_ECC
#endif
    
    /* ARMv8 - iPhone 8/8Plus and iPhone X */
#ifdef __ARM_FEATURE_CRYPTO
#define WOLFSSL_ARMASM
#endif
    
#ifdef __cplusplus
}
#endif


#endif /* WOLFSSL_OPTIONS_H */
