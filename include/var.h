#ifndef VAR_H
#define VAR_H

#include "custom_string.h"

typedef struct {
    String name;
    String value;
} Var;

int read_variable(String inp);

void paste_variables(char prefix, String* string);

void free_var(void);

#endif