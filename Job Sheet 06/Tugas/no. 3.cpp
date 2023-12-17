/*
Nama  : Muhammad Firman
NIM   : 23343044
Prodi : Informatika
*/

#include <stdio.h>

int main() {
    int i, j, n;

    printf("Masukkan jumlah baris: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        int nilai = i;
        for (j = 1; j <= i; j++) {
            printf("%d ", nilai);
            nilai += i;
        }
        printf("\n");
    }

    return 0;
}

