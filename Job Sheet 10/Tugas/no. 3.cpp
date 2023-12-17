/*
Nama  : Muhammad Firman
NIM   : 23343044
Prodi : Informatika
*/

#include <stdio.h>

#define MAX_MAHASISWA 100

struct Mahasiswa {
    char npm[20];
    char nama[50];
    char tanggalLahir[10];
    char alamat[100];
    char noHP[15];
};

void inputData(struct Mahasiswa *mahasiswa);
void tampilkanData(struct Mahasiswa *mahasiswa, int jumlahMahasiswa);

int main() {
    struct Mahasiswa dataMahasiswa[MAX_MAHASISWA];
    char jawab;

    int jumlahMahasiswa = 0;

    do {
        inputData(&dataMahasiswa[jumlahMahasiswa]);
        jumlahMahasiswa++;

        printf("Mau memasukkan data lagi [y/t]? ");
        scanf(" %c", &jawab);
    } while (jawab == 'y' || jawab == 'Y');

    tampilkanData(dataMahasiswa, jumlahMahasiswa);

    return 0;
}

void inputData(struct Mahasiswa *mahasiswa) {
    printf("NPM : ");
    scanf("%s", mahasiswa->npm);

    printf("NAMA : ");
    scanf(" %[^\n]", mahasiswa->nama);

    printf("TGL LAHIR : ");
    scanf("%s", mahasiswa->tanggalLahir);

    printf("ALAMAT : ");
    scanf(" %[^\n]", mahasiswa->alamat);

    printf("HP : ");
    scanf("%s", mahasiswa->noHP);
}

void tampilkanData(struct Mahasiswa *mahasiswa, int jumlahMahasiswa) {
    printf("\nData Mahasiswa:\n");

    for (int i = 0; i < jumlahMahasiswa; i++) {
        printf("%s %s %s %s %s\n", mahasiswa[i].npm, mahasiswa[i].nama, mahasiswa[i].tanggalLahir, mahasiswa[i].alamat, mahasiswa[i].noHP);
    }
}

