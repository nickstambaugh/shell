#ifndef CMD_H
#define CMD_H

#include <stdbool.h>
#include "string_array.h"

typedef struct cmd_return(*cmd_func)(Stg_Array);

struct internal_cmd {
    String name;
    cmd_func func;
};

struct cmd_return {
    bool success;
    int func_return;
    String str;
};

#define DEFAULT_CMD_RETURN ((struct cmd_return){false, 1, str_new(NULL)})
#define CMD_RETURN_SUCCESS ((struct cmd_return){true, 0, str_new(NULL)})

struct internal_cmd internal_cmd_new(String, cmd_func);

void add_internal_cmd(struct internal_cmd);

struct internal_cmd * find_internal_cmd(String name);

struct internal_cmd *get_internal_cmd_list(void);

size_t get_internal_cmd_list_size(void);

void load_external_commands(void);

void capture_system_call(struct cmd_return *ret, String command);


#endif