
#include "fcrypt.h"
//
int decrypter(FILE *descriptor, char t_bite, int key_crypt, int ssid) {
//
//    unsigned char buf[strlen(target)];
//    sprintf(buf, "%s", target);
//
//    for (int i = 0; i < strlen(target); i++)
//    {
//        buf[i] ^= key;
//    }
//
//    printf("Encrypted: [%s]\n",buf);

    return 0;
}



int encrypter(FILE *descriptor, char t_bite, int key_crypt, int ssid) {


    unsigned char temp = t_bite;

    temp^=ssid;

    temp = ~temp;

    

    fseek(descriptor, key_crypt, SEEK_SET);
    fwrite(&temp, sizeof(char), 1, descriptor);
    //    unsigned char * data = *target;
//
//    unsigned char buf[strlen(data)];
//    sprintf(buff, "%s", data);
//
//    for (int i = 0; i < strlen(data); i++)
//    {
//        buff[i] ^= key;
//    }
    return 0;
}

