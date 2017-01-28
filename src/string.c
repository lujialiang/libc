/*
 * string.c
 *
 *
 * Copyright (C) 2017  Bryant Moscon - bmoscon@gmail.com
 * 
 * Please see the LICENSE file for the terms and conditions associated with 
 * the use of this software.
 *
 */

#include <string.h>


void *memchr(const void *str, const int c, const size_t len)
{
    const unsigned char *ptr = str;
    const unsigned char ch = c;
    for (size_t i = 0; i < len; ++i, ++ptr) {
        if (*ptr == ch) {
            return (unsigned char *)(ptr);
        }
    }
    return (NULL);
}


int memcmp(const void *a, const void *b, size_t len)
{
    const unsigned char *ptr = a;
    const unsigned char *ptr2 = b;
    for (size_t i = 0; i < len; ++i, ++ptr, ++ptr2) {
        if (*ptr != *ptr2) {
            return (*ptr - *ptr2);
        }
    }
    return (0);
}


void *memcpy(void *to, const void *from, const size_t len)
{
    const unsigned char *ptr = from;
    unsigned char *dest = to;
    for (size_t i = 0; i < len; ++i, ++ptr, ++dest) {
        *dest = *ptr;
    }

    return (dest);
}