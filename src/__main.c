
#include "config.h"
// 0x01 0x02 0x03 0x04


int main(int argc, char *argv[]) {

//    int *p_arr = password_handler("12345678");

//    for (int i = 1; i != 5; i++)
//         printf("sum [%i]\n", (p_arr[0]));

//    int pass[128];
//
//    char *password = "dsdsa23141./az?)(862_3231_42fdmlkmflsdmflksdmflsmdfs3d";
//
//    char str[28] = "iebaltvoymamasuka";
//
//    for (int i = 0; i < strlen(password) ;i++) {
//
//        if ((int)password[i] % 2 == 0) {
//            pass[i] = (((int)password[i]));
//        }
//        else {
//            pass[i] = ( ((int)password[i]) * 2 & 0x4421c);
//        }
//
//    }
//
//    printf("summ %d\n", pass[0]);
//    printf("kesy %s\n",str);
//    for (int i = 0, c_i = 0; i < strlen(str); c_i++, i++) {
//
//        str[i] ^= pass[c_i];
//
//        str[i] = ~str[i] + 1;
//        if (c_i >= strlen(password))
//            c_i = 0;
//
//    }
//
//    printf("key %s\n",str);
//
//    for (int i = 0, c_i = 0; i < strlen(str); c_i++, i++) {
//
//        str[i] ^= pass[c_i];
//
//        str[i] = ~str[i] + 1;
//
//        if (c_i >= strlen(password)) {
//            c_i = 0;
//        }
//
//    }
//
//    printf("key %s\n",str);

//
//    for (int i = 0, c_i = 0; i < strlen(str); c_i++, i++) {
//
//        str[i] ^= 104;
//
//        if (c_i >= strlen(password)) {
//            c_i = 0;
//        }
//
//    }


//    printf("start [%s]\n", str);

//    for (int i = 0, c_i = 0; i < strlen(str); c_i++, i++) {
//
//        str[i] ^= pass[c_i];
//
//        if (c_i >= strlen(password)) {
//            c_i = 0;
//        }
//
//    }
//
//    printf("end [%s]\n", str);


//    if (argc < 4) {
//        show_help();
//        return -EXIT_FAILURE;
//    }

//    a ^= 21;
//    a = a / sizeof(a*21);
//    printf("sum [%c]\n", a);

//    a ^= 21;

//    a = (a + sizeof(a*21));


//    uint8_t a = 1000;
//    a >>= 3;
//    a*=45 << 2;
////    a ^= a<<100;
//
//    a = (-(~a) << 3) & (a);

//    printf("sum [%i]\n", a);

//    a = ((a<<3));
//
//    a = (a / 45) >> 2;


//    printf("sum [%d]\n", (a));


//// =====================
//
//    a ^= 0xc222231;
//
//    a = (a ^ 0xc23991 | (~a));
//
//    printf("sum [%c]\n", a);

    t_data *list_data;

    __data event_data;

    list_data = parse_args(argc, argv);

    char src[256];

    sprintf(src, "%s",list_data->key);

    event_data.key_crypt = password_handler(src);


//    printf("[%s]\n", list_data->key);

    printf("%s\n",list_data->file_path);

    file_handler(list_data, &event_data);



//    d(list_data);
//    printf("%s\na",list_data->file_path);
//    printf("%i\n", list_data->mode);
//    printf("%s\n", list_data->key);

//    printf("%i\n", ssid.key_crypt);



//
//    char *f_path = list_data->file_path;
//
//    file_handler(f_path);
//    show_help();
//    parse_args(argc, argv);

//    char *t = "pizda_america";
//
//    char buff[5];
//
//    crypt(&t, 4321, buff);
//
//    printf("Crypted: [%s]\n", buff);
//
//    encrypt(&buff, 4321);
    return 0;
}


