/*
Nama  : Muhammad Firman
NIM   : 23343044
Prodi : Informatika
*/

#include <stdio.h>

int main() {
    float kurs = 14250.0;
    float jumlahRupiah;

    printf("Masukkan jumlah uang dalam Rupiah: Rp. ");
    scanf("%f", &jumlahRupiah);

    float jumlahDollar = jumlahRupiah / kurs;

    printf("Jumlah uang dalam Dollar: $ %.2f\n", jumlahDollar);

    return 0;
}

