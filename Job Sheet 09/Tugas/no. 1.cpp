/*
Nama  : Muhammad Firman
NIM   : 23343044
Prodi : Informatika
*/

#include <stdio.h>

int main() {
    char str[] = "BORLAND";
    char *ptr = str;

    while (*ptr != '\0') {
        printf("%s\n", ptr);
        ++ptr;
    }

    return 0;
}

