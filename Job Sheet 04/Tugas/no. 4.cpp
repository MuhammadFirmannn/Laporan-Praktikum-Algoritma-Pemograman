/*
Nama  : Muhammad Firman
NIM   : 23343044
Prodi : Informatika
*/

#include <stdio.h>

int main() {
    int tarifPertama = 15000;

    int durasiTontonan = 3;

    int biayaTotal = 0;

    biayaTotal += tarifPertama;

    if (durasiTontonan > 1) {
        int tarifBerikutnya = tarifPertama / 2; 
        biayaTotal += tarifBerikutnya * (durasiTontonan - 1);
    }

    printf("Biaya total untuk menonton selama %d jam: Rp %d\n", durasiTontonan, biayaTotal);

    return 0;
}

