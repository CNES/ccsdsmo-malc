#include "common.h"

struct _common_login_profile_list_t {
  unsigned int element_count;
  common_login_profile_t ** content;
};

// default constructor
common_login_profile_list_t * common_login_profile_list_new(unsigned int element_count)
{
  common_login_profile_list_t *self = (common_login_profile_list_t *) calloc(1, sizeof(common_login_profile_list_t));
  if (!self)
    return NULL;
  self->element_count = element_count;
  self->content = (common_login_profile_t **) calloc(element_count, sizeof(common_login_profile_t *));
  if (!self->content && (element_count > 0))
  {
    free(self);
    return NULL;
  }
  return self;
}

// destructor, free the list, its content and its elements
void common_login_profile_list_destroy(common_login_profile_list_t ** self_p)
{
  if (self_p && *self_p)
  {
    for (int i = 0; i < (*self_p)->element_count; i++)
    {
      if ((*self_p)->content[i] != NULL)
        common_login_profile_destroy(&(*self_p)->content[i]);
    }
    free((*self_p)->content);
  }
  free (*self_p);
  (*self_p) = NULL;
}

// fields accessors for composite list common_login_profile_list
unsigned int common_login_profile_list_get_element_count(common_login_profile_list_t * self)
{
  return self->element_count;
}
common_login_profile_t ** common_login_profile_list_get_content(common_login_profile_list_t * self)
{
  return self->content;
}

// encoding functions related to transport malbinary
int common_login_profile_list_add_encoding_length_malbinary(common_login_profile_list_t * self, mal_encoder_t * encoder, void * cursor)
{
  int rc = 0;
  unsigned int list_size = self->element_count;
  rc = mal_encoder_add_list_size_encoding_length(encoder, list_size, cursor);
  if (rc < 0)
    return rc;
  for (int i = 0; i < list_size; i++)
  {
    common_login_profile_t * list_element = self->content[i];
    bool presence_flag = (list_element != NULL);
    rc = mal_encoder_add_presence_flag_encoding_length(encoder, presence_flag, cursor);
    if (rc < 0)
      return rc;
    if (presence_flag)
    {
      rc = common_login_profile_add_encoding_length_malbinary(list_element, encoder, cursor);
      if (rc < 0)
        return rc;
    }
  }
  return rc;
}
int common_login_profile_list_encode_malbinary(common_login_profile_list_t * self, mal_encoder_t * encoder, void * cursor)
{
  int rc = 0;
  unsigned int list_size = self->element_count;
  rc = mal_encoder_encode_list_size(encoder, cursor, list_size);
  if (rc < 0)
    return rc;
  common_login_profile_t ** content = self->content;
  for (int i = 0; i < list_size; i++)
  {
    common_login_profile_t *list_element = content[i];
    bool presence_flag = (list_element != NULL);
    rc = mal_encoder_encode_presence_flag(encoder, cursor, presence_flag);
    if (rc < 0)
      return rc;
    if (presence_flag)
    {
      rc = common_login_profile_encode_malbinary(list_element, encoder, cursor);
      if (rc < 0)
        return rc;
    }
  }
  return rc;
}
int common_login_profile_list_decode_malbinary(common_login_profile_list_t * self, mal_decoder_t * decoder, void * cursor)
{
  int rc = 0;
  unsigned int list_size;
  rc = mal_decoder_decode_list_size(decoder, cursor, &list_size);
  if (rc < 0)
    return rc;
  if (list_size == 0)
  {
    self->element_count = 0;
    self->content = NULL;
    return 0;
  }
  self->content = (common_login_profile_t **) calloc(list_size, sizeof(common_login_profile_t *));
  if (self->content == NULL)
    return -1;
  self->element_count = list_size;
  for (int i = 0; i < list_size; i++)
  {
    bool presence_flag;
    rc = mal_decoder_decode_presence_flag(decoder, cursor, &presence_flag);
    if (rc < 0)
      return rc;
    if (presence_flag)
    {
      self->content[i] = common_login_profile_new();
      if (self->content[i] == NULL) return -1;
      rc = common_login_profile_decode_malbinary(self->content[i], decoder, cursor);
      if (rc < 0)
        return rc;
    }
  }
  return rc;
}

// test function
void common_login_profile_list_test(bool verbose)
{
  printf(" * list of common_login_profile: ");
  if (verbose)
    printf("\n");
  printf("OK\n");
}