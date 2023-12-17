/*
Nama  : Muhammad Firman
NIM   : 23343044
Prodi : Informatika
*/

#include <stdio.h>

enum hari {SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, MINGGU};

int main() {
    enum hari sekarang;
    sekarang = RABU;
    printf("ukuran variabel enum %d byte", sizeof(sekarang));
}
