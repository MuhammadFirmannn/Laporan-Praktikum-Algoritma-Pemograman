/*
Nama  : Muhammad Firman
NIM   : 23343044
Prodi : Informatika
*/

#include <stdio.h>

int main() {
    int i;

    printf("Deret Bilangan Genap:\n");
    for (i = 0; i <= 50; i += 2) {
        printf("%d ", i);
    }

    printf("\n\n");

    printf("Deret Bilangan Ganjil:\n");
    for (i = 1; i <= 50; i += 2) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}

