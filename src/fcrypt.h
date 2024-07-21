

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>

//
//
// самоуничтожение
// хеш
// соль
//
//
//

#define DECRYPT(mode) mode


extern int encrypter(FILE *descriptor, char t_bite, int key_crypt, int ssid);

extern int decrypter(FILE *descriptor, char t_bite, int key_crypt, int ssid);
