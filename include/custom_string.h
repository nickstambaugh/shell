#ifndef CUSTOM_STRING_H
#define CUSTOM_STRING_H

#include <stdbool.h>
#include <stddef.h>

//string
typedef struct {
    char *cstr;
    unsigned long long size;
} String;

#define MACRO_STR(cstr) ((String){cstr, sizeof(cstr)-1})

signed long long stng_has_char(String str, char c);

signed long long str_has_str(String str, String c);

String new_string(char* str);

void str_append(String* dest, String end);

void str_free(String str);

bool str_equal(String,String);

size_t str_count(String str, String delim);

#endif