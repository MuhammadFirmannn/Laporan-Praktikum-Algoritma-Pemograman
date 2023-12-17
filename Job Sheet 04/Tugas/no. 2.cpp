/*
Nama  : Muhammad Firman
NIM   : 23343044
Prodi : Informatika
*/

#include <stdio.h>

int main() {
    // Deklarasi variabel
    char namaPembeli[50];
    char namaBarang[50];
    float hargabarang, totalHarga;
    int jumlahBarang;

    printf("Masukkan nama pembeli: ");
    scanf("%s", namaPembeli);

    printf("Masukkan nama barang: ");
    scanf("%s", namaBarang);

    printf("Masukkan harga barang : ");
    scanf("%f", &hargabarang);

    printf("Masukkan jumlah barang yang dibeli: ");
    scanf("%d", &jumlahBarang);
 
    totalHarga = hargabarang * jumlahBarang;

    printf("\n===== Struk Pembelian =====\n");
    printf("Nama Pembeli: %s\n", namaPembeli);
    printf("Nama Barang : %s\n", namaBarang);
    printf("Harga barang: %.2f\n", hargabarang);
    printf("Jumlah Barang: %d\n", jumlahBarang);
    printf("Total Harga : %.2f\n", totalHarga);

    return 0;
}

