/*
Nama  : Muhammad Firman
NIM   : 23343044
Prodi : Informatika
*/

#include <stdio.h>

int main() {
    int banyakMahasiswa, i;

    printf("Input banyak mahasiswa: ");
    scanf("%d", &banyakMahasiswa);

    char namaMahasiswa[banyakMahasiswa][50];

    for (i = 0; i < banyakMahasiswa; i++) {
        printf("Input nama mahasiswa %d: ", i + 1);
        scanf("%s", namaMahasiswa[i]);
    }

    printf("Nama mahasiswa:\n");

    for (i = 0; i < banyakMahasiswa; i++) {
        printf("Nama mahasiswa ke-%d: %s\n", i + 1, namaMahasiswa[i]);
    }

    return 0;
}

