/*  =========================================================================
    common_directory_service - The Directory service allows service providers to publish information about which services
they provide and consumersto discover service provider address and capability information

    The MIT License (MIT)
    =========================================================================
*/

#ifndef COMMON_DIRECTORY_SERVICE_H_INCLUDED
#define COMMON_DIRECTORY_SERVICE_H_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif

//  @warning THE FOLLOWING @INTERFACE BLOCK IS AUTO-GENERATED BY ZPROJECT
//  @warning Please edit the model at "api/common_directory_service.api" to make changes.
//  @interface
//  This is a draft class, and may change without notice. It is disabled in
//  stable builds by default. If you use this in applications, please ask
//  for it to be pushed to stable state. Use --enable-drafts to enable.
#ifdef NMFAPI_C_BUILD_DRAFT_API
//  *** Draft method, for development use, may change without warning ***
//  Create a Directory service object
NMFAPI_C_EXPORT common_directory_service_t *
    common_directory_service_new (char *hostname, char *provider_port, char *consumer_port);

//  *** Draft method, for development use, may change without warning ***
//  The destructor
NMFAPI_C_EXPORT void
    common_directory_service_destroy (common_directory_service_t **self_p);

//  *** Draft method, for development use, may change without warning ***
//  The lookup operation allows a service consumer to query the directory service to return a list of
//  service providers that match the requested criteria. If no match is found, then an empty list is returned
NMFAPI_C_EXPORT int
    common_directory_service_lookup_provider (common_directory_service_t *self, common_directory_servicefilter_t *service_filter, common_directory_providersummary_list_t *response_provider_summary_list);

//  *** Draft method, for development use, may change without warning ***
//  The lookup operation allows a service consumer to query the directory service to return a list of
//  service providers that match the requested criteria. If no match is found, then an empty list is returned
NMFAPI_C_EXPORT int
    common_directory_service_lookup_provider_all (common_directory_service_t *self, common_directory_providersummary_list_t *response_provider_summary_list);

//  *** Draft method, for development use, may change without warning ***
//  The lookup operation allows a service consumer to query the directory service to return a list of
//  service providers that match the requested criteria. If no match is found, then an empty list is returned
NMFAPI_C_EXPORT int
    common_directory_service_lookup_provider_all_uri (common_directory_service_t *self, long **response_provider_id_list, char ***response_provider_uri_list, size_t *response_element_count);

#endif // NMFAPI_C_BUILD_DRAFT_API
//  @end

#ifdef __cplusplus
}
#endif

#endif
