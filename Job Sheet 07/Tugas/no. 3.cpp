/*
Nama  : Muhammad Firman
NIM   : 23343044
Prodi : Informatika
*/

#include <stdio.h>
#include <string.h>

int main() {
    char usernameBenar[] = "user123";
    char passwordBenar[] = "password123";
    char usernameInput[50];
    char passwordInput[50];

    printf("Masukkan username: ");
    scanf("%s", usernameInput);

    printf("Masukkan password: ");
    scanf("%s", passwordInput);

    if (strcmp(usernameInput, usernameBenar) == 0 && strcmp(passwordInput, passwordBenar) == 0) {
        printf("Berhasil login\n");
    } else {
        printf("Password salah\n");
    }

    return 0;
}

