/*
Nama  : Muhammad Firman
NIM   : 23343044
Prodi : Informatika
*/

#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("datamahasiswa.txt", "r");

    if (file == NULL) {
        printf("Gagal membuka file!\n");
        return 1;
    }

    char character;
    while ((character = fgetc(file)) != EOF) {
        printf("%c", character);
    }

    fclose(file);

    return 0;
}

