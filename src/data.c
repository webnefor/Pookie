//
//#include "config.h"
//#include <unistd.h>
//
//
//void show_help() {
//
//    printf("STOP");
//}
//
//
//int * password_handler(char *password) {
//    int str_pass = strlen(password);
//
//    int * pass = (int *)calloc(str_pass * 2, sizeof(char));
//
//    pass[0] = str_pass;
//
//    for (int i = 1; i < str_pass; i++) {
//
//        if ((int)password[i] % 2 == 0)
//            pass[i] = (((int)password[i-1])) << 4 | str_pass >> 9;
//
//        else
//            pass[i] = ( ((int)password[i-1]) * 2 & 0x4421c);
//    }
//
//    return pass;
//}
//
//t_data * parse_args(int argc, char *argv[]) {
//
//    t_data temp_data;
//
//    char *flags[] = \
//    {
//        "-f", "-k", "-m", "-s", "-h"
//    };
//
//    signed char _data[64];
//
//    for (int i = 0; i < argc; i++) {
//
//            if (strcmp(argv[i], flags[0]) == 0)
//                temp_data.file_path  = argv[i + 1];
//
//            if (strcmp(argv[i], flags[1]) == 0)
//                temp_data.key        = argv[i+1];
//
//            if (strcmp(argv[i], flags[2]) == 0)
//                temp_data.mode       = argv[i+1];
//
//            if (strcmp(argv[i], flags[3]) == 0)
//                temp_data.salt       = 1;
//
//            if (strcmp(argv[i], flags[4]) == 0)
//                temp_data.help       = 1;
//
//        }
//
//
//
//    return &temp_data;
//}
//
//int file_handler(t_data * m_data, __data * b_data) {
//
//    FILE *file;
//
//    char c;
//
//    char new_byte = '0';
//    long position = 0;
//
//    printf("%s\n", m_data->file_path);
////
//
//    file = fopen(m_data->file_path, "r+b");
////
//
//    if (file == NULL) {
//        perror("Ошибка при открытии файла");
//        fclose(file);
//        return 1;
//    }
//
//
////
//////    // Перемещение указателя файла к нужной позиции
////    fseek(file, 0, SEEK_SET);
////
//////    // Запись нового байта в указанную позицию
////    fwrite(&new_byte, sizeof(char), 1, file);
////
//    for (int i = 0, ci = 1; ((c = fgetc(file)) != EOF || NULL);ci++, i++) {
//
//        fseek(file, i, SEEK_SET);
//
//        c ^= -(~b_data->key_crypt[ci]) * 0x033c332 ;
//
//        c = ~c >> b_data->key_crypt[-1];
//        if (ci == b_data->key_crypt[0]-1)
//            ci = 0;
//
//        fwrite(&c, sizeof(char), 1, file);
//    }
//
////    encrypter(b_data, m_data);
//
//    fclose(file);
//
//    return 0;
//}


