/*
Nama  : Muhammad Firman
NIM   : 23343044
Prodi : Informatika
*/

#include <stdio.h>

int main() {
    float celsius, kelvin, fahrenheit, reamur;

    printf("Input Suhu (Celsius) = ");
    scanf("%f", &celsius);

    kelvin = celsius + 273.15;
    fahrenheit = (celsius * 1.8) + 32;
    reamur = celsius * 0.8;

    printf("Suhu dalam Kelvin = %.2f\n", kelvin);
    printf("Suhu dalam Fahrenheit = %.2f\n", fahrenheit);
    printf("Suhu dalam Reamur = %.2f\n", reamur);

    return 0;
}

