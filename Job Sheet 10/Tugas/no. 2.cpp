/*
Nama  : Muhammad Firman
NIM   : 23343044
Prodi : Informatika
*/

#include <stdio.h>

struct TanggalLahir {
    int tanggal;
    int bulan;
    int tahun;
};

void tentukanZodiak(struct TanggalLahir tanggalLahir);

int main() {
    struct TanggalLahir tglLahir;

    printf("Tanggal Lahir Anda [tgl-bln-tahun] : ");
    scanf("%d-%d-%d", &tglLahir.tanggal, &tglLahir.bulan, &tglLahir.tahun);

    tentukanZodiak(tglLahir);

    return 0;
}

void tentukanZodiak(struct TanggalLahir tanggalLahir) {
    if ((tanggalLahir.bulan == 3 && tanggalLahir.tanggal >= 21) || (tanggalLahir.bulan == 4 && tanggalLahir.tanggal <= 19)) {
        printf("Zodiak Anda adalah: ARIES\n");
    } else if ((tanggalLahir.bulan == 4 && tanggalLahir.tanggal >= 20) || (tanggalLahir.bulan == 5 && tanggalLahir.tanggal <= 20)) {
        printf("Zodiak Anda adalah: TAURUS\n");
    } else if ((tanggalLahir.bulan == 5 && tanggalLahir.tanggal >= 21) || (tanggalLahir.bulan == 6 && tanggalLahir.tanggal <= 20)) {
        printf("Zodiak Anda adalah: GEMINI\n");
    } else if ((tanggalLahir.bulan == 6 && tanggalLahir.tanggal >= 21) || (tanggalLahir.bulan == 7 && tanggalLahir.tanggal <= 22)) {
        printf("Zodiak Anda adalah: CANCER\n");
    } else if ((tanggalLahir.bulan == 7 && tanggalLahir.tanggal >= 23) || (tanggalLahir.bulan == 8 && tanggalLahir.tanggal <= 22)) {
        printf("Zodiak Anda adalah: LEO\n");
    } else if ((tanggalLahir.bulan == 8 && tanggalLahir.tanggal >= 23) || (tanggalLahir.bulan == 9 && tanggalLahir.tanggal <= 22)) {
        printf("Zodiak Anda adalah: VIRGO\n");
    } else if ((tanggalLahir.bulan == 9 && tanggalLahir.tanggal >= 23) || (tanggalLahir.bulan == 10 && tanggalLahir.tanggal <= 22)) {
        printf("Zodiak Anda adalah: LIBRA\n");
    } else if ((tanggalLahir.bulan == 10 && tanggalLahir.tanggal >= 23) || (tanggalLahir.bulan == 11 && tanggalLahir.tanggal <= 21)) {
        printf("Zodiak Anda adalah: SCORPIO\n");
    } else if ((tanggalLahir.bulan == 11 && tanggalLahir.tanggal >= 22) || (tanggalLahir.bulan == 12 && tanggalLahir.tanggal <= 21)) {
        printf("Zodiak Anda adalah: SAGITTARIUS\n");
    } else if ((tanggalLahir.bulan == 12 && tanggalLahir.tanggal >= 22) || (tanggalLahir.bulan == 1 && tanggalLahir.tanggal <= 19)) {
        printf("Zodiak Anda adalah: CAPRICORN\n");
    } else if ((tanggalLahir.bulan == 1 && tanggalLahir.tanggal >= 20) || (tanggalLahir.bulan == 2 && tanggalLahir.tanggal <= 18)) {
        printf("Zodiak Anda adalah: AQUARIUS\n");
    } else if ((tanggalLahir.bulan == 2 && tanggalLahir.tanggal >= 19) || (tanggalLahir.bulan == 3 && tanggalLahir.tanggal <= 20)) {
        printf("Zodiak Anda adalah: PISCES\n");
    } else {
        printf("Tanggal lahir tidak valid.\n");
    }
}


