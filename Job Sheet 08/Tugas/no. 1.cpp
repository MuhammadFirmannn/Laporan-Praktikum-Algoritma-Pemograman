/*
Nama  : Muhammad Firman
NIM   : 23343044
Prodi : Informatika
*/

#include <stdio.h>

int perkalian(int a, int b) {
    if (a == 0 || b == 0) {
        return 0;
    } else {
        return a + perkalian(a, b - 1);
    }
}

int main() {
    int bilangan1, bilangan2;
    printf("Masukkan dua bilangan bulat positif: ");
    scanf("%d %d", &bilangan1, &bilangan2);

    int hasil = perkalian(bilangan1, bilangan2);

    printf("Hasil perkalian %d x %d = %d\n", bilangan1, bilangan2, hasil);

    return 0;
}

