#include <stdio.h>

int main() {
    // Deklarasi variabel
    char nama[100], nim[15], prodi[50], fakultas[50];
    float nilaiPraktikum, nilaiUTS, nilaiUAS, nilaiAkhir;

    // Meminta input dari pengguna
    printf("Nama : ");
    scanf("%[^\n]s", nama);

    printf("NIM : ");
    scanf(" %s", nim);

    printf("Prodi : ");
    scanf(" %[^\n]s", prodi);

    printf("Fakultas : ");
    scanf(" %[^\n]s", fakultas);

    printf("Nilai Praktikum : ");
    scanf("%f", &nilaiPraktikum);

    printf("Nilai UTS : ");
    scanf("%f", &nilaiUTS);

    printf("Nilai UAS : ");
    scanf("%f", &nilaiUAS);

    // Menghitung nilai akhir
    nilaiAkhir = 0.3 * nilaiPraktikum + 0.3 * nilaiUTS + 0.4 * nilaiUAS;

    // Menampilkan output
    printf("\n===== Output =====\n");
    printf("Nama : %s\n", nama);
    printf("NIM : %s\n", nim);
    printf("Prodi : %s\n", prodi);
    printf("Fakultas : %s\n", fakultas);
    printf("Nilai Praktikum : %.2f\n", nilaiPraktikum);
    printf("Nilai UTS : %.2f\n", nilaiUTS);
    printf("Nilai UAS : %.2f\n", nilaiUAS);
    printf("Nilai Akhir : %.2f\n", nilaiAkhir);

    return 0;
}

