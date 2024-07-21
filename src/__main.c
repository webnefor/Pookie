
#include "config.h"


int main(int argc, char *argv[]) {

//    if (argc < 4) {
//        show_help();
//        return -EXIT_FAILURE;
//    }

    t_data *list_data = parse_args(argc, argv);


    printf("%s\n", list_data->file_path);
    printf("%i\n", list_data->mode);
    printf("%s\n", list_data->key);

    char *f_path = list_data->file_path;

    file_handler(f_path);
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


