/*
Nama  : Muhammad Firman
NIM   : 23343044
Prodi : Informatika
*/

#include <stdio.h>

int tambah(int a, int b) {
    return a + b;
}

int kurang(int a, int b) {
    return a - b;
}

int kali(int a, int b) {
    return a * b;
}

float bagi(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    } else {
        printf("Error: Pembagian oleh nol tidak diizinkan.\n");
        return 0.0;
    }
}

int main() {
    int bilangan1, bilangan2;

    printf("Masukkan dua bilangan bulat: ");
    scanf("%d %d", &bilangan1, &bilangan2);

    printf("%d + %d = %d\n", bilangan1, bilangan2, tambah(bilangan1, bilangan2));
    printf("%d - %d = %d\n", bilangan1, bilangan2, kurang(bilangan1, bilangan2));
    printf("%d * %d = %d\n", bilangan1, bilangan2, kali(bilangan1, bilangan2));

    if (bilangan2 != 0) {
        printf("%d / %d = %.2f\n", bilangan1, bilangan2, bagi(bilangan1, bilangan2));
    }

    return 0;
}

