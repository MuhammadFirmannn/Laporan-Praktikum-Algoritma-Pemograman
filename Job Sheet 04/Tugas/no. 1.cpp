/*
Nama  : Muhammad Firman
NIM   : 23343044
Prodi : Informatika
*/

#include <stdio.h>

int main() {
    int totalDetik, jam, menit, detikSisa;

    printf("Masukkan jumlah waktu dalam detik: ");
    scanf("%d", &totalDetik);

    jam = totalDetik / 3600;
    menit = (totalDetik % 3600) / 60;
    detikSisa = totalDetik % 60;

    printf("Hasil Output: %d Jam, %d Menit, %d Detik\n", jam, menit, detikSisa);

    return 0;
}

