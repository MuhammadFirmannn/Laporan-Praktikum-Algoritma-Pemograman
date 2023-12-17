/*
Nama  : Muhammad Firman
NIM   : 23343044
Prodi : Informatika
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char playAgain;
    do {
        srand(time(NULL));
        int nomorKomputer = rand() % 20 + 1;
        int tebakan, percobaan = 0;

        printf("Selamat datang di Game Tebak Nomor!\n");

        do {
            printf("Masukkan tebakan Anda (1-20): ");
            scanf("%d", &tebakan);
            percobaan++;

            if (tebakan < nomorKomputer) {
                printf("Nomor saya lebih besar!\n");
            } else if (tebakan > nomorKomputer) {
                printf("Nomor saya lebih kecil!\n");
            } else {
                printf("Selamat, Anda benar!\n");
                printf("Jumlah percobaan: %d\n", percobaan);
            }

        } while (tebakan != nomorKomputer);

        printf("Apakah Anda ingin bermain lagi? (y/n): ");
        scanf(" %c", &playAgain);

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Terima kasih telah bermain!\n");

    return 0;
}

