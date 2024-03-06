#ifndef IO_H
#define IO_H

#include "custom_string.h"
#include "colors.h"
#include <stdio.h>

void set_input_file(FILE *fd);

bool at_eof(void);

String input(char ret_char, size_t max_size);

#endif