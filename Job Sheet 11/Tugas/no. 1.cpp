/*
Nama  : Muhammad Firman
NIM   : 23343044
Prodi : Informatika
*/

#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("datamahasiswa.txt", "w");

    if (file == NULL) {
        printf("Gagal membuka file!\n");
        return 1;
    }

    int jumlahMahasiswa;
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlahMahasiswa);

    for (int i = 1; i <= jumlahMahasiswa; ++i) {
        fprintf(file, "Data Mahasiswa ke-%d\n", i);
        
        char nama[100], nim[20], jurusan[50], programStudi[50];
        
        printf("Masukkan Nama Mahasiswa ke-%d: ", i);
        scanf(" %[^\n]s", nama);

        printf("Masukkan NIM Mahasiswa ke-%d: ", i);
        scanf(" %[^\n]s", nim);

        printf("Masukkan Jurusan Mahasiswa ke-%d: ", i);
        scanf(" %[^\n]s", jurusan);

        printf("Masukkan Program Studi Mahasiswa ke-%d: ", i);
        scanf(" %[^\n]s", programStudi);

        fprintf(file, "Nama: %s\n", nama);
        fprintf(file, "NIM: %s\n", nim);
        fprintf(file, "Jurusan: %s\n", jurusan);
        fprintf(file, "Program Studi: %s\n\n", programStudi);
    }

    fclose(file);
    printf("Data mahasiswa telah disimpan ke dalam file datamahasiswa.txt\n");

    return 0;
}

