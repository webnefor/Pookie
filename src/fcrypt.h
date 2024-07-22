

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
// пароль для самоуничтожжение
// шифр на основе времени
// пускать шифр несколько раз
//




#define DECRYPT(mode) mode


typedef struct {
    FILE *desc;
    char t_bite;
    int *key_crypt;
    int ssid;
} __data;


typedef struct data_args {

    unsigned char * mode;
    unsigned char * salt;
    unsigned char * key;
    unsigned char * file_path;

    int help;

} t_data;

int encrypter(t_data *conf, __data * m_data );
int * password_handler(char *password);
//extern int decrypter(struct *enc);
