#include <stdio.h>

/* 
Nama   : Muhammad Firman
Nim    : 23343044
Prodi  : Informatika
*/

int main() {
    // Menampilkan pesan pertama
    printf("Hello, siapa nama lengkapmu?\n");

    // Deklarasi variabel untuk menyimpan nama
    int nama[100];

    // Menerima input nama dari pengguna
    scanf("%[^\n]s", nama);

    // Menampilkan pesan selamat datang
    printf("Selamat Datang %s dalam Pemrograman C!\n", nama);

    return 0;
}

