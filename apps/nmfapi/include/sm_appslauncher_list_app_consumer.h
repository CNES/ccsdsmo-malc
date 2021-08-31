/*  =========================================================================
    sm_appslauncher_list_app_consumer - The request consumer for the listApp operation

    The MIT License (MIT)
    =========================================================================
*/

#ifndef SM_APPSLAUNCHER_LIST_APP_CONSUMER_H_INCLUDED
#define SM_APPSLAUNCHER_LIST_APP_CONSUMER_H_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif

//  @warning THE FOLLOWING @INTERFACE BLOCK IS AUTO-GENERATED BY ZPROJECT
//  @warning Please edit the model at "api/sm_appslauncher_list_app_consumer.api" to make changes.
//  @interface
//  This API is a draft, and may change without notice.
#ifdef NMFAPI_BUILD_DRAFT_API
#define SM_APPSLAUNCHER_LIST_APP_CONSUMER_URI "sm/appslauncher/listApp/consumer"  // The consumer URI for the listApp operation
#define SM_APPSLAUNCHER_LIST_APP_CONSUMER_MAX_APPS_COUNT 250  // The maximum number of installed apps

//  *** Draft method, for development use, may change without warning ***
//  Create a consumer object for the listApp operation
NMFAPI_EXPORT sm_appslauncher_list_app_consumer_t *
    sm_appslauncher_list_app_consumer_new (mal_ctx_t *mal_ctx, mal_uri_t *provider_uri);

//  *** Draft method, for development use, may change without warning ***
//  The destructor
NMFAPI_EXPORT void
    sm_appslauncher_list_app_consumer_destroy (sm_appslauncher_list_app_consumer_t **self_p);

//  *** Draft method, for development use, may change without warning ***
//  Set the log level
NMFAPI_EXPORT void
    sm_appslauncher_list_app_consumer_set_log_level (sm_appslauncher_list_app_consumer_t *self, int level);

//  *** Draft method, for development use, may change without warning ***
//  Get the app names MAL message field
NMFAPI_EXPORT char **
    sm_appslauncher_list_app_consumer_get_field_app_names (sm_appslauncher_list_app_consumer_t *self);

//  *** Draft method, for development use, may change without warning ***
//  Set the app names MAL message field
NMFAPI_EXPORT void
    sm_appslauncher_list_app_consumer_set_field_app_names (sm_appslauncher_list_app_consumer_t *self, char **app_names);

//  *** Draft method, for development use, may change without warning ***
//  Get the size of the app names MAL message field
NMFAPI_EXPORT size_t
    sm_appslauncher_list_app_consumer_get_field_app_names_size (sm_appslauncher_list_app_consumer_t *self);

//  *** Draft method, for development use, may change without warning ***
//  Set the size of the app names MAL message field
NMFAPI_EXPORT void
    sm_appslauncher_list_app_consumer_set_field_app_names_size (sm_appslauncher_list_app_consumer_t *self, size_t app_names_size);

//  *** Draft method, for development use, may change without warning ***
//  Get the category MAL message field
NMFAPI_EXPORT char *
    sm_appslauncher_list_app_consumer_get_field_category (sm_appslauncher_list_app_consumer_t *self);

//  *** Draft method, for development use, may change without warning ***
//  Set the category MAL message field
NMFAPI_EXPORT void
    sm_appslauncher_list_app_consumer_set_field_category (sm_appslauncher_list_app_consumer_t *self, char *category);

//  *** Draft method, for development use, may change without warning ***
//  Get response variable for appsInstIds
NMFAPI_EXPORT long *
    sm_appslauncher_list_app_consumer_get_response_apps_inst_ids (sm_appslauncher_list_app_consumer_t *self);

//  *** Draft method, for development use, may change without warning ***
//  Get response variable for running apps
NMFAPI_EXPORT bool *
    sm_appslauncher_list_app_consumer_get_response_apps_running (sm_appslauncher_list_app_consumer_t *self);

//  *** Draft method, for development use, may change without warning ***
//  Get response variable for number of apps
NMFAPI_EXPORT size_t
    sm_appslauncher_list_app_consumer_get_response_apps_count (sm_appslauncher_list_app_consumer_t *self);

//  *** Draft method, for development use, may change without warning ***
//  Lock the mutex
//  A mutex is used to force a synchronous response despite the request being an asynchronous operation
NMFAPI_EXPORT void
    sm_appslauncher_list_app_consumer_mutex_lock (sm_appslauncher_list_app_consumer_t *self);

//  *** Draft method, for development use, may change without warning ***
//  Unlock the mutex
//  A mutex is used to force a synchronous response despite the request being an asynchronous operation
NMFAPI_EXPORT void
    sm_appslauncher_list_app_consumer_mutex_unlock (sm_appslauncher_list_app_consumer_t *self);

//  *** Draft method, for development use, may change without warning ***
//  Initialize the consumer actor
NMFAPI_EXPORT void
    sm_appslauncher_list_app_consumer_actor_init (sm_appslauncher_list_app_consumer_t *self);

#endif // NMFAPI_BUILD_DRAFT_API
//  @end

#ifdef __cplusplus
}
#endif

#endif
