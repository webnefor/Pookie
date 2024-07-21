
#include "config.h"
#include <unistd.h>
void show_help() {

    printf("STOP");
}

t_data * parse_args(int argc, char *argv[]) {

    t_data temp_data;

    char *flags[] = \
    {
        "-f", "-k", "-m", "-s", "-h"
    };

    signed char _data[64];

    for (int i = 0; i < argc; i++) {

            if (strcmp(argv[i], flags[0]) == 0)
                temp_data.file_path  = argv[i + 1];

            if (strcmp(argv[i], flags[1]) == 0)
                temp_data.key        = argv[i+1];

            if (strcmp(argv[i], flags[2]) == 0)
                temp_data.mode       = argv[i+1];

            if (strcmp(argv[i], flags[3]) == 0)
                temp_data.salt       = 1;

            if (strcmp(argv[i], flags[4]) == 0)
                temp_data.help       = 1;

        }

    return &temp_data;
}


int file_handler(char *filename) {

//    printf("%s", p_path);

    FILE *file;
    char c;

    char new_byte = 'd';
    long position = 0; // Позиция байта, который нужно перезаписать

    file = fopen(filename, "r+b");

    if (file == NULL) {
        perror("Ошибка при открытии файла");
        return 1;
    }

//    // Перемещение указателя файла к нужной позиции
//    fseek(file, position, SEEK_SET);

//    // Запись нового байта в указанную позицию
//    fwrite(&new_byte, sizeof(char), 1, file);
    printf("%i\n", file);
    for (int i = 0; ((c = fgetc(file)) != EOF);i++) {
        encrypter(file,c, i, 4432);
    }

    fclose(file);



    return 0;
}