/*
Nama  : Muhammad Firman
NIM   : 23343044
Prodi : Informatika
*/

#include <stdio.h>

int main() {
    char opsi;
    float bilangan1, bilangan2, hasil;

    printf("Menu Operasi Kalkulator:\n");
    printf("a) Penjumlahan\n");
    printf("b) Pengurangan\n");
    printf("c) Perkalian\n");
    printf("d) Pembagian\n");
    printf("e) Hasil Bagi\n");

    printf("Pilih operasi (a/b/c/d/e): ");
    scanf(" %c", &opsi);

    printf("Masukkan bilangan pertama: ");
    scanf("%f", &bilangan1);

    printf("Masukkan bilangan kedua: ");
    scanf("%f", &bilangan2);

    switch (opsi) {
        case 'a':
            hasil = bilangan1 + bilangan2;
            printf("Hasil penjumlahan: %.2f\n", hasil);
            break;

        case 'b':
            hasil = bilangan1 - bilangan2;
            printf("Hasil pengurangan: %.2f\n", hasil);
            break;

        case 'c':
            hasil = bilangan1 * bilangan2;
            printf("Hasil perkalian: %.2f\n", hasil);
            break;

        case 'd':
            if (bilangan2 != 0) {
                hasil = bilangan1 / bilangan2;
                printf("Hasil pembagian: %.2f\n", hasil);
            } else {
                printf("Error: Pembagian oleh nol tidak diperbolehkan.\n");
            }
            break;

        case 'e':
            if (bilangan2 != 0) {
                int hasilBagi = (int) bilangan1 / (int) bilangan2;
                printf("Hasil bagi (tanpa sisa): %d\n", hasilBagi);
            } else {
                printf("Error: Hasil bagi oleh nol tidak diperbolehkan.\n");
            }
            break;

        default:
            printf("Error: Pilihan operasi tidak valid.\n");
            break;
    }

    return 0;
}

