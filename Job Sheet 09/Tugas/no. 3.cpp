/*
Nama  : Muhammad Firman
NIM   : 23343044
Prodi : Informatika
*/

#include <stdio.h>

int main() {
    int Lesley = 57082;
    int Layla = Lesley;
    int Balmond = Layla + 1;

    printf("a) Nilai Layla: %d\n", Layla);
    printf("b) Nilai Balmond: %d\n", Balmond);

    Lesley = 57082;
    int *ptrLayla = &Lesley;
    Balmond = *ptrLayla + 1;

    printf("a) Nilai Layla: %d\n", *ptrLayla);
    printf("b) Nilai Balmond: %d\n", Balmond);

    return 0;
}

