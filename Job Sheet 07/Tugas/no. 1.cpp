/*
Nama  : Muhammad Firman
NIM   : 23343044
Prodi : Informatika
*/

#include <stdio.h>

int main() {
    int jumlahMahasiswa = 20;
    int nilaiMahasiswa[jumlahMahasiswa];
    int i;
    float totalNilai = 0.0, rataRata;

    for (i = 0; i < jumlahMahasiswa; i++) {
        printf("Masukkan nilai mahasiswa ke-%d: ", i + 1);
        scanf("%d", &nilaiMahasiswa[i]);
        totalNilai += nilaiMahasiswa[i];
    }

    rataRata = totalNilai / jumlahMahasiswa;

    printf("Rata-rata nilai mahasiswa: %.2f\n", rataRata);

    return 0;
}

