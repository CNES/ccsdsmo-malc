/*  =========================================================================
    nmfapi_c - generated layer of public API

    The MIT License (MIT)

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
    =========================================================================
*/

#ifndef NMFAPI_C_LIBRARY_H_INCLUDED
#define NMFAPI_C_LIBRARY_H_INCLUDED

//  Set up environment for the application

//  External dependencies
#include <czmq.h>
#include <malutil.h>
#include <malattributes.h>
#include <mal.h>
#include <malbinary.h>
#include <malsplitbinary.h>
#include <malzmq.h>
#include <maltcp.h>
#include <malactor.h>
#include <generated_areas.h>

//  NMFAPI_C version macros for compile-time API detection
#define NMFAPI_C_VERSION_MAJOR 1
#define NMFAPI_C_VERSION_MINOR 0
#define NMFAPI_C_VERSION_PATCH 0

#define NMFAPI_C_MAKE_VERSION(major, minor, patch) \
    ((major) * 10000 + (minor) * 100 + (patch))
#define NMFAPI_C_VERSION \
    NMFAPI_C_MAKE_VERSION(NMFAPI_C_VERSION_MAJOR, NMFAPI_C_VERSION_MINOR, NMFAPI_C_VERSION_PATCH)

#if defined (__WINDOWS__)
#   if defined NMFAPI_C_STATIC
#       define NMFAPI_C_EXPORT
#   elif defined NMFAPI_C_INTERNAL_BUILD
#       if defined DLL_EXPORT
#           define NMFAPI_C_EXPORT __declspec(dllexport)
#       else
#           define NMFAPI_C_EXPORT
#       endif
#   elif defined NMFAPI_C_EXPORTS
#       define NMFAPI_C_EXPORT __declspec(dllexport)
#   else
#       define NMFAPI_C_EXPORT __declspec(dllimport)
#   endif
#   define NMFAPI_C_PRIVATE
#elif defined (__CYGWIN__)
#   define NMFAPI_C_EXPORT
#   define NMFAPI_C_PRIVATE
#else
#   if (defined __GNUC__ && __GNUC__ >= 4) || defined __INTEL_COMPILER
#       define NMFAPI_C_PRIVATE __attribute__ ((visibility ("hidden")))
#       define NMFAPI_C_EXPORT __attribute__ ((visibility ("default")))
#   else
#       define NMFAPI_C_PRIVATE
#       define NMFAPI_C_EXPORT
#   endif
#endif

//  Opaque class structures to allow forward references
//  These classes are stable or legacy and built in all releases
typedef struct _nmf_api_t nmf_api_t;
#define NMF_API_T_DEFINED
typedef struct _nmf_api_util_t nmf_api_util_t;
#define NMF_API_UTIL_T_DEFINED
typedef struct _mc_parameter_service_t mc_parameter_service_t;
#define MC_PARAMETER_SERVICE_T_DEFINED
typedef struct _mc_parameter_getvalue_consumer_t mc_parameter_getvalue_consumer_t;
#define MC_PARAMETER_GETVALUE_CONSUMER_T_DEFINED
typedef struct _mc_parameter_setvalue_consumer_t mc_parameter_setvalue_consumer_t;
#define MC_PARAMETER_SETVALUE_CONSUMER_T_DEFINED
typedef struct _mc_parameter_addparameter_consumer_t mc_parameter_addparameter_consumer_t;
#define MC_PARAMETER_ADDPARAMETER_CONSUMER_T_DEFINED
typedef struct _mc_parameter_removeparameter_consumer_t mc_parameter_removeparameter_consumer_t;
#define MC_PARAMETER_REMOVEPARAMETER_CONSUMER_T_DEFINED
typedef struct _mc_parameter_listdefinition_consumer_t mc_parameter_listdefinition_consumer_t;
#define MC_PARAMETER_LISTDEFINITION_CONSUMER_T_DEFINED
typedef struct _sm_appslauncher_service_t sm_appslauncher_service_t;
#define SM_APPSLAUNCHER_SERVICE_T_DEFINED
typedef struct _sm_appslauncher_listapp_consumer_t sm_appslauncher_listapp_consumer_t;
#define SM_APPSLAUNCHER_LISTAPP_CONSUMER_T_DEFINED
//  Draft classes are by default not built in stable releases
#ifdef NMFAPI_C_BUILD_DRAFT_API
typedef struct _common_directory_service_t common_directory_service_t;
#define COMMON_DIRECTORY_SERVICE_T_DEFINED
typedef struct _common_directory_lookupprovider_consumer_t common_directory_lookupprovider_consumer_t;
#define COMMON_DIRECTORY_LOOKUPPROVIDER_CONSUMER_T_DEFINED
#endif // NMFAPI_C_BUILD_DRAFT_API


//  Public classes, each with its own header file
#include "nmf_api.h"
#include "nmf_api_util.h"
#include "mc_parameter_service.h"
#include "mc_parameter_getvalue_consumer.h"
#include "mc_parameter_setvalue_consumer.h"
#include "mc_parameter_addparameter_consumer.h"
#include "mc_parameter_removeparameter_consumer.h"
#include "mc_parameter_listdefinition_consumer.h"
#include "sm_appslauncher_service.h"
#include "sm_appslauncher_listapp_consumer.h"
#ifdef NMFAPI_C_BUILD_DRAFT_API
#include "common_directory_service.h"
#include "common_directory_lookupprovider_consumer.h"
#endif // NMFAPI_C_BUILD_DRAFT_API

#ifdef NMFAPI_C_BUILD_DRAFT_API

#ifdef __cplusplus
extern "C" {
#endif

//  Self test for private classes
NMFAPI_C_EXPORT void
    nmfapi_c_private_selftest (bool verbose, const char *subtest);

#ifdef __cplusplus
}
#endif
#endif // NMFAPI_C_BUILD_DRAFT_API

#endif
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/