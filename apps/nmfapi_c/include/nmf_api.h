/*  =========================================================================
    nmf_api - The gateway API initializes the service objects and implements service accessors

    The MIT License (MIT)
    =========================================================================
*/

#ifndef NMF_API_H_INCLUDED
#define NMF_API_H_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif

//  @warning THE FOLLOWING @INTERFACE BLOCK IS AUTO-GENERATED BY ZPROJECT
//  @warning Please edit the model at "api/nmf_api.api" to make changes.
//  @interface
//  This is a stable class, and may not change except for emergencies. It
//  is provided in stable builds.
//  This class has draft methods, which may change over time. They are not
//  in stable releases, by default. Use --enable-drafts to enable.
//  Create a Gateway API object
NMFAPI_C_EXPORT nmf_api_t *
    nmf_api_new (char *hostname, char *provider_port, char *consumer_port);

//  The destructor
NMFAPI_C_EXPORT void
    nmf_api_destroy (nmf_api_t **self_p);

//  Get the AppsLauncher service
NMFAPI_C_EXPORT sm_appslauncher_service_t *
    nmf_api_get_sm_appslauncher_service (nmf_api_t *self);

//  Get the Parameter service
NMFAPI_C_EXPORT mc_parameter_service_t *
    nmf_api_get_mc_parameter_service (nmf_api_t *self);

//  Self test of this class.
NMFAPI_C_EXPORT void
    nmf_api_test (bool verbose);

#ifdef NMFAPI_C_BUILD_DRAFT_API
//  *** Draft method, for development use, may change without warning ***
//  Get the Common Directory service
NMFAPI_C_EXPORT common_directory_service_t *
    nmf_api_get_common_directory_service (nmf_api_t *self);

#endif // NMFAPI_C_BUILD_DRAFT_API
//  @end

#ifdef __cplusplus
}
#endif

#endif