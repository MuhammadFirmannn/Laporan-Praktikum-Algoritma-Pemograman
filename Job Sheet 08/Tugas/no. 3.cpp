/*
Nama  : Muhammad Firman
NIM   : 23343044
Prodi : Informatika
*/

#include <stdio.h>

#define PI 3.14159265358979323846

double luas(double radius);
double keliling(double radius);

int main() {
    double jariJari;

    printf("Masukkan jari-jari lingkaran: ");
    scanf("%lf", &jariJari);

    double hasilLuas = luas(jariJari);
    double hasilKeliling = keliling(jariJari);

    printf("Luas lingkaran: %.2lf\n", hasilLuas);
    printf("Keliling lingkaran: %.2lf\n", hasilKeliling);

    return 0;
}

double luas(double radius) {
    return PI * radius * radius;
}

double keliling(double radius) {
    return 2 * PI * radius;
}

