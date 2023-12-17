/*
Nama  : Muhammad Firman
NIM   : 23343044
Prodi : Informatika
*/

#include <stdio.h>

int main() {
    float diameter = 12.0; 
    float radius = diameter / 2.0;

    float volume = (4.0 / 3.0) * 3.14159265358979323846 * radius * radius * radius;

    float luasPermukaan = 4.0 * 3.14159265358979323846 * radius * radius;

    printf("Diameter bola: %.2f cm\n", diameter);
    printf("Volume bola: %.2f cm^3\n", volume);
    printf("Luas permukaan bola: %.2f cm^2\n", luasPermukaan);

    return 0;
}

