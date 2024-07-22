
#include <stdio.h>
#include <stdlib.h>

#include <errno.h>

#include <string.h>
#include <stdbool.h>
#include <stdint.h>

#include "fcrypt.h"

#define SALT 0x22222#33
#define HASH 0xc2394482



extern int file_handler(t_data * m_data, __data * b_data);
extern t_data *parse_args(int argc, char *argv[]);
extern void show_help();
