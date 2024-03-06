#include "../include/custom_string.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void str_free(String str) {
    free(str.cstr);
}

char *strdup(char *str, unsigned long long *ret_size);