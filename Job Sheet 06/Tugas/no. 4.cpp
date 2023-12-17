/*
Nama  : Muhammad Firman
NIM   : 23343044
Prodi : Informatika
*/

#include <stdio.h>

void tampilkanMenu() {
    printf("ATM\n");
    printf("1) Cek Saldo\n");
    printf("2) Setoran\n");
    printf("3) Penarikan Tunai\n");
    printf("4) Exit\n");
}

int main() {
    char namaAkun[] = "Hattori";
    int noRekening = 123;
    int saldo = 175000;
    int pilihan, jumlahSetoran, jumlahPenarikan;

    do {
        tampilkanMenu();
        printf("Pilih menu (1-4): ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                printf("Saldo saat ini: Rp. %d\n", saldo);
                break;

            case 2:
                printf("Masukkan jumlah setoran: Rp. ");
                scanf("%d", &jumlahSetoran);
                saldo += jumlahSetoran;
                printf("Setoran berhasil. Saldo saat ini: Rp. %d\n", saldo);
                break;

            case 3:
                printf("Masukkan jumlah penarikan: Rp. ");
                scanf("%d", &jumlahPenarikan);
                if (saldo - jumlahPenarikan < 50000) {
                    printf("Penarikan tidak dapat dilakukan. Saldo minimal harus Rp. 50.000\n");
                } else {
                    saldo -= jumlahPenarikan;
                    printf("Penarikan berhasil. Saldo saat ini: Rp. %d\n", saldo);
                }
                break;

            case 4:
                printf("Terima kasih telah menggunakan ATM. Sampai jumpa!\n");
                break;

            default:
                printf("Pilihan tidak valid. Silakan pilih menu 1-4.\n");
                break;
        }

    } while (pilihan != 4);

    return 0;
}

