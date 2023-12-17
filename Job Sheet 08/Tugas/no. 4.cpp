/*
Nama  : Muhammad Firman
NIM   : 23343044
Prodi : Informatika
*/

#include <stdio.h>

double potong(double totalPembelian);

int main() {
    double totalPembelian;

    printf("Program Hitung Potongan\n");
    printf("Total Pembelian (Rp.) : ");
    scanf("%lf", &totalPembelian);

    double besarDiskon = potong(totalPembelian);
    double totalBayar = totalPembelian - besarDiskon;

    printf("Besar Diskon : %.2lf\n", besarDiskon);
    printf("Besar Yang Harus Dibayarkan : %.2lf\n", totalBayar);

    return 0;
}

double potong(double totalPembelian) {
    if (totalPembelian < 1000000) {
        return 0.0;
    } else if (totalPembelian >= 1000000 && totalPembelian < 3000000) {
        return 0.2 * totalPembelian;
    } else {
        return 0.35 * totalPembelian;
    }
}

