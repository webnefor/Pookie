
#include <stdio.h>
#include <stdlib.h>

#include <errno.h>

#include <string.h>
#include <stdbool.h>
#include <stdint.h>

#include "fcrypt.h"

#define SALT 0x22222#33
#define HASH 0xc2394482


typedef struct data_args {

    unsigned char * mode;
    unsigned char * salt;
    unsigned char * key;
    unsigned char * file_path;
    int help;

} t_data;

extern int file_handler(char *path_to);
extern t_data *parse_args(int argc, char *argv[]);
extern void show_help();
