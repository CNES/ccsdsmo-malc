/*  =========================================================================
    mc_parameter_listdefinition_consumer - The request consumer for the listDefinition operation.

    The MIT License (MIT)
    =========================================================================
*/

#ifndef MC_PARAMETER_LISTDEFINITION_CONSUMER_H_INCLUDED
#define MC_PARAMETER_LISTDEFINITION_CONSUMER_H_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif

//  @warning THE FOLLOWING @INTERFACE BLOCK IS AUTO-GENERATED BY ZPROJECT
//  @warning Please edit the model at "api/mc_parameter_listdefinition_consumer.api" to make changes.
//  @interface
//  This is a stable class, and may not change except for emergencies. It
//  is provided in stable builds.
#define MC_PARAMETER_LISTDEFINITION_CONSUMER_URI "mc/parameter/consumer/listDefinition"  // The consumer URI for the listDefinition operation

//  Instanciate a consumer object for the listDefinition operation
NMFAPI_C_EXPORT mc_parameter_listdefinition_consumer_t *
    mc_parameter_listdefinition_consumer_new (mal_ctx_t *mal_ctx, mal_uri_t *provider_uri);

//  The destructor
NMFAPI_C_EXPORT void
    mc_parameter_listdefinition_consumer_destroy (mc_parameter_listdefinition_consumer_t **self_p);

//  Clear the response variables
NMFAPI_C_EXPORT void
    mc_parameter_listdefinition_consumer_response_clear (mc_parameter_listdefinition_consumer_t *self);

//  Lock the mutex
//  A mutex is used to force a synchronous response despite the request being an asynchronous operation
NMFAPI_C_EXPORT void
    mc_parameter_listdefinition_consumer_mutex_lock (mc_parameter_listdefinition_consumer_t *self);

//  Unlock the mutex
//  A mutex is used to force a synchronous response despite the request being an asynchronous operation
NMFAPI_C_EXPORT void
    mc_parameter_listdefinition_consumer_mutex_unlock (mc_parameter_listdefinition_consumer_t *self);

//  Create and initialize the actor
NMFAPI_C_EXPORT void
    mc_parameter_listdefinition_consumer_actor_init (mc_parameter_listdefinition_consumer_t *self);

//  Get response variable for the identity ids
NMFAPI_C_EXPORT long *
    mc_parameter_listdefinition_consumer_get_response_identity_id_list (mc_parameter_listdefinition_consumer_t *self);

//  Get response variable for the definition ids
NMFAPI_C_EXPORT long *
    mc_parameter_listdefinition_consumer_get_response_definition_id_list (mc_parameter_listdefinition_consumer_t *self);

//  Get response variable for number of elements
NMFAPI_C_EXPORT size_t
    mc_parameter_listdefinition_consumer_get_response_element_count (mc_parameter_listdefinition_consumer_t *self);

//  Get error code from processing the response
NMFAPI_C_EXPORT int
    mc_parameter_listdefinition_consumer_get_response_error_code (mc_parameter_listdefinition_consumer_t *self);

//  Get the param names MAL message field
NMFAPI_C_EXPORT char **
    mc_parameter_listdefinition_consumer_get_field_param_name_list (mc_parameter_listdefinition_consumer_t *self);

//  Set the param names MAL message field
NMFAPI_C_EXPORT void
    mc_parameter_listdefinition_consumer_set_field_param_name_list (mc_parameter_listdefinition_consumer_t *self, char **param_names);

//  Get the size of the param names MAL message field
NMFAPI_C_EXPORT size_t
    mc_parameter_listdefinition_consumer_get_field_param_name_list_size (mc_parameter_listdefinition_consumer_t *self);

//  Set the size of the param names MAL message field
NMFAPI_C_EXPORT void
    mc_parameter_listdefinition_consumer_set_field_param_name_list_size (mc_parameter_listdefinition_consumer_t *self, size_t param_names_size);

//  @end

#ifdef __cplusplus
}
#endif

#endif