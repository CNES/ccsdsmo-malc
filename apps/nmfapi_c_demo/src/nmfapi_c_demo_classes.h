/*  =========================================================================
    nmfapi_c_demo_classes - private header file

    The MIT License (MIT)
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
    =========================================================================
*/

#ifndef NMFAPI_C_DEMO_CLASSES_H_INCLUDED
#define NMFAPI_C_DEMO_CLASSES_H_INCLUDED

//  Platform definitions, must come first
#include "platform.h"

//  Asserts check the invariants of methods. If they're not
//  fulfilled the program should fail fast. Therefore enforce them!
#ifdef NDEBUG
  #undef NDEBUG
  #include <assert.h>
  #define NDEBUG
#else
  #include <assert.h>
#endif

//  External API
#include "../include/nmfapi_c_demo.h"

//  Private external dependencies

//  Opaque class structures to allow forward references

//  Extra headers

//  Internal API


//  *** To avoid double-definitions, only define if building without draft ***
#ifndef NMFAPI_C_DEMO_BUILD_DRAFT_API

//  Self test for private classes
NMFAPI_C_DEMO_PRIVATE void
    nmfapi_c_demo_private_selftest (bool verbose, const char *subtest);

#endif // NMFAPI_C_DEMO_BUILD_DRAFT_API

#endif