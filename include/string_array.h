#ifndef STR_ARRAY_H
#define STR_ARRAY_H

#include "custom_string.h"

typedef struct {
    String *array;
    size_t size;
} Stg_Array;

#define STR_ARRAY_STACK_ALLOC(str_arr, str_size)             \
    String STR_ARRAY_STACK_ALLOC_SIZE_##str_arr[str_size]; \
    str_arr.arr = STR_ARRAY_STACK_ALLOC_SIZE_##str_arr; \
    str_arr.size = str_size;

void str_arr_free(Stg_Array array);

Stg_Array str_split(String str, String delim);

void str_split_as_view(Stg_Array* array, String str, String delim);

String str_arr_join(Stg_Array array, char seperator);

Stg_Array str_arr_add(Stg_Array, String);

void str_arr_replace(Stg_Array, size_t idx, String new_str);


#endif