/*  =========================================================================
    nmf_api_util - class description

    The MIT License (MIT)
    =========================================================================
*/

#ifndef NMF_API_UTIL_H_INCLUDED
#define NMF_API_UTIL_H_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif

//  Create a URI string
mal_uri_t *
nmfapi_util_create_uri(const char* protocol, const char *hostname, const char *port, const char *id);

//  Create a mal message for a request transaction
mal_message_t *
nmfapi_util_create_mal_message(mal_encoder_t *encoder, void *cursor);

//  Intiialize maltcp context and start listening socket
int
nmfapi_util_init_maltcp_ctx(char *hostname, char *port, mal_ctx_t **mal_ctx);

//  Initialize a MAL Attribute given the raw value and attribute tag
int
nmfapi_util_init_mal_attribute(char *rawvalue, unsigned char tag, union mal_attribute_t *attribute);

#ifdef __cplusplus
}
#endif

#endif