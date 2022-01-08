/*  =========================================================================
    mc_parameter_getvalue_consumer - The request consumer for the getValue operation.

    The MIT License (MIT)
    =========================================================================
*/

#ifndef MC_PARAMETER_GETVALUE_CONSUMER_H_INCLUDED
#define MC_PARAMETER_GETVALUE_CONSUMER_H_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif

//  @warning THE FOLLOWING @INTERFACE BLOCK IS AUTO-GENERATED BY ZPROJECT
//  @warning Please edit the model at "api/mc_parameter_getvalue_consumer.api" to make changes.
//  @interface
//  This is a stable class, and may not change except for emergencies. It
//  is provided in stable builds.
#define MC_PARAMETER_GETVALUE_CONSUMER_URI "mc/parameter/consumer/getValue"  // The consumer URI for the getValue operation

//  Instanciate a consumer object for the getValue operation
NMFAPI_C_EXPORT mc_parameter_getvalue_consumer_t *
    mc_parameter_getvalue_consumer_new (mal_ctx_t *mal_ctx, mal_uri_t *provider_uri);

//  The destructor
NMFAPI_C_EXPORT void
    mc_parameter_getvalue_consumer_destroy (mc_parameter_getvalue_consumer_t **self_p);

//  Clear the response variables
NMFAPI_C_EXPORT void
    mc_parameter_getvalue_consumer_response_clear (mc_parameter_getvalue_consumer_t *self);

//  Lock the mutex
//  A mutex is used to force a synchronous response despite the request being an asynchronous operation
NMFAPI_C_EXPORT void
    mc_parameter_getvalue_consumer_mutex_lock (mc_parameter_getvalue_consumer_t *self);

//  Unlock the mutex
//  A mutex is used to force a synchronous response despite the request being an asynchronous operation
NMFAPI_C_EXPORT void
    mc_parameter_getvalue_consumer_mutex_unlock (mc_parameter_getvalue_consumer_t *self);

//  Create and initialize the actor
NMFAPI_C_EXPORT void
    mc_parameter_getvalue_consumer_actor_init (mc_parameter_getvalue_consumer_t *self);

//  Get response variable for the MAL attributes
NMFAPI_C_EXPORT union mal_attribute_t *
    mc_parameter_getvalue_consumer_get_response_mal_attribute_list (mc_parameter_getvalue_consumer_t *self);

//  Get response variable for the MAL attributes tags
NMFAPI_C_EXPORT unsigned char *
    mc_parameter_getvalue_consumer_get_response_mal_attribute_tag_list (mc_parameter_getvalue_consumer_t *self);

//  Get response variable for number of MAL attributes
NMFAPI_C_EXPORT size_t
    mc_parameter_getvalue_consumer_get_response_element_count (mc_parameter_getvalue_consumer_t *self);

//  Get error code from processing the response
NMFAPI_C_EXPORT int
    mc_parameter_getvalue_consumer_get_response_error_code (mc_parameter_getvalue_consumer_t *self);

//  Get the param inst ids MAL message field
NMFAPI_C_EXPORT long *
    mc_parameter_getvalue_consumer_get_field_param_inst_id_list (mc_parameter_getvalue_consumer_t *self);

//  Set the param inst ids MAL message field
NMFAPI_C_EXPORT void
    mc_parameter_getvalue_consumer_set_field_param_inst_id_list (mc_parameter_getvalue_consumer_t *self, long *param_inst_id_list);

//  Get the size of the param inst ids MAL message field
NMFAPI_C_EXPORT size_t
    mc_parameter_getvalue_consumer_get_field_param_inst_id_list_size (mc_parameter_getvalue_consumer_t *self);

//  Set the size of the param inst ids MAL message field
NMFAPI_C_EXPORT void
    mc_parameter_getvalue_consumer_set_field_param_inst_id_list_size (mc_parameter_getvalue_consumer_t *self, size_t param_inst_id_list_size);

//  @end

#ifdef __cplusplus
}
#endif

#endif