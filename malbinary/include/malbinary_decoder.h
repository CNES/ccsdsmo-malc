/*
 * The MIT License (MIT)
 * 
 * Copyright (c) 2016 - 2017 CNES
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef __MALBINARY_DECODER_H_INCLUDED__
#define __MALBINARY_DECODER_H_INCLUDED__

#include "clog.h"

#ifdef __cplusplus
extern "C" {
#endif

mal_decoder_t *malbinary_decoder_new(bool varint_supported);
void  malbinary_decoder_cursor_reset(void *cursor,
    char *bytes, unsigned int length, unsigned int offset);
void malbinary_init_decode_functions(mal_decoder_t *decoder);

void malbinary_decoder_set_log_level(mal_decoder_t *self, int level);
clog_logger_t malbinary_decoder_get_logger(mal_decoder_t *self);

char malbinary_read(void *cursor);

short malbinary_read16(void *cursor);

int malbinary_read32(void *cursor);

long malbinary_read64(void *cursor);

int malbinary_decoder_decode_string(mal_decoder_t *self, void *cursor, mal_string_t **result);

int malbinary_decoder_decode_presence_flag(mal_decoder_t *self,
    void *cursor, bool *result);

int malbinary_decoder_decode_short_form(mal_decoder_t *self, void *cursor, long *result);

int malbinary_decoder_decode_small_enum(mal_decoder_t *self, void *cursor, int *result);

int malbinary_decoder_decode_medium_enum(mal_decoder_t *self, void *cursor, int *result);

int malbinary_decoder_decode_large_enum(mal_decoder_t *self, void *cursor, int *result);

int malbinary_decoder_decode_integer(mal_decoder_t *self, void *cursor, mal_integer_t *result);

int malbinary_decoder_decode_list_size(mal_decoder_t *self, void *cursor, unsigned int *result);

int malbinary_decoder_decode_uri(mal_decoder_t *self, void *cursor, mal_uri_t **result);

int malbinary_decoder_decode_blob(mal_decoder_t *self, void *cursor, mal_blob_t **result);

int malbinary_decoder_decode_time(mal_decoder_t *self, void *cursor, mal_time_t *result);

int malbinary_decoder_decode_uinteger(mal_decoder_t *self, void *cursor, mal_uinteger_t *result);

int malbinary_decoder_decode_identifier(mal_decoder_t *self, void *cursor, mal_identifier_t **result);

int malbinary_decoder_decode_uoctet(mal_decoder_t *self, void *cursor, mal_uoctet_t *result);

int malbinary_decoder_decode_long(mal_decoder_t *self, void *cursor, mal_long_t *result);

int malbinary_decoder_decode_ushort(mal_decoder_t *self, void *cursor, mal_ushort_t *result);

int malbinary_decoder_decode_boolean(mal_decoder_t *self, void *cursor, mal_boolean_t *result);

short malbinary_read16(void *cursor);

int malbinary_read32(void *cursor);

long malbinary_read64(void *cursor);

int malbinary_decoder_decode_duration(mal_decoder_t *self, void *cursor, mal_duration_t *result);

int malbinary_decoder_decode_float(mal_decoder_t *self, void *cursor, mal_float_t *result);

int malbinary_decoder_decode_double(mal_decoder_t *self, void *cursor, mal_double_t *result);

int malbinary_decoder_decode_octet(mal_decoder_t *self, void *cursor, mal_octet_t *result);

int malbinary_decoder_decode_short(mal_decoder_t *self, void *cursor, mal_short_t *result);

int malbinary_decoder_decode_ulong(mal_decoder_t *self, void *cursor, mal_ulong_t *result);

int malbinary_decoder_decode_finetime(mal_decoder_t *self, void *cursor, mal_finetime_t *result);

int malbinary_decoder_decode_attribute(mal_decoder_t *decoder, void *cursor,
    unsigned char attribute_tag, union mal_attribute_t *self);

int malbinary_decoder_decode_attribute_tag(mal_decoder_t *self, void *cursor, unsigned char *result);

/*
 * Test
 */
 
void malbinary_decoder_test(bool verbose);

#ifdef __cplusplus
}
#endif

#endif
