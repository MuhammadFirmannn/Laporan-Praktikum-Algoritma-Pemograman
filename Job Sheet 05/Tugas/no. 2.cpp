/*
Nama  : Muhammad Firman
NIM   : 23343044
Prodi : Informatika
*/

#include <stdio.h>

int main() {
    float totalPembelian, diskon, cashback, totalBayar;

    printf("Masukkan total pembelian (Rp): ");
    scanf("%f", &totalPembelian);

    if (totalPembelian <= 75000) {
        diskon = 0.05 * totalPembelian;
    } else if (totalPembelian <= 125000) {
        diskon = 0.15 * totalPembelian;
    } else {
        diskon = 0.25 * totalPembelian;
        cashback = 5000;
    }

    totalBayar = totalPembelian - diskon + cashback;

    printf("Total Pembelian: Rp %.2f\n", totalPembelian);
    printf("Diskon: Rp %.2f\n", diskon);
    printf("Cashback: Rp %.2f\n", cashback);
    printf("Total Bayar: Rp %.2f\n", totalBayar);

    return 0;
}

