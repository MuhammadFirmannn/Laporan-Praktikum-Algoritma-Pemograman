/*
Nama  : Muhammad Firman
NIM   : 23343044
Prodi : Informatika
*/

#include <stdio.h>
#include <math.h>

int main() {
    char pilihan;
    float hasil;
    const float PI = 3.14159265358979323846;

    printf("Pilih bentuk geometri:\n");
    printf("a) Luas Permukaan Bola\n");
    printf("b) Luas Permukaan Kubus\n");
    printf("c) Luas Permukaan Balok\n");
    printf("d) Luas Permukaan Tabung\n");

    printf("Masukkan pilihan (a/b/c/d): ");
    scanf(" %c", &pilihan);

    switch (pilihan) {
        case 'a':
            {
                float jariJari;
                printf("Masukkan jari-jari bola: ");
                scanf("%f", &jariJari);
                hasil = 4 * PI * pow(jariJari, 2);
            }
            break;

        case 'b':
            {
                float sisi;
                printf("Masukkan panjang sisi kubus: ");
                scanf("%f", &sisi);
                hasil = 6 * pow(sisi, 2);
            }
            break;

        case 'c':
            {
                float panjang, lebar, tinggi;
                printf("Masukkan panjang balok: ");
                scanf("%f", &panjang);
                printf("Masukkan lebar balok: ");
                scanf("%f", &lebar);
                printf("Masukkan tinggi balok: ");
                scanf("%f", &tinggi);
                hasil = 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);
            }
            break;

        case 'd':
            {
                float jariJari, tinggiTabung;
                printf("Masukkan jari-jari tabung: ");
                scanf("%f", &jariJari);
                printf("Masukkan tinggi tabung: ");
                scanf("%f", &tinggiTabung);
                hasil = 2 * PI * jariJari * (jariJari + tinggiTabung);
            }
            break;

        default:
            printf("Pilihan tidak valid.\n");
            return 1;
    }

    printf("Luas Permukaan: %.2f\n", hasil);

    return 0;
}

