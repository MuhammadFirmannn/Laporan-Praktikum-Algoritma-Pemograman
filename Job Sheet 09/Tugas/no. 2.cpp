/*
Nama  : Muhammad Firman
NIM   : 23343044
Prodi : Informatika
*/

#include <stdio.h>
#include <string.h>

int main() {
    char name[25];

    printf("Masukan Teks: ");
    scanf("%[^\n]", name);

    int length = strlen(name);
    char* ptr = name + length - 1;

    for (; ptr >= name; ptr--) {
        printf("%c", *ptr);
    }
    printf("\n\n");
    
    return 0;
}
