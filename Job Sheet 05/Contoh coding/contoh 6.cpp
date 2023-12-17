/*
Nama  : Muhammad Firman
NIM   : 23343044
Prodi : Informatika
*/

#include <stdio.h>
#include <string.h>

int main(){

char username [30], password[30];

	printf("=== Welcome to Awesome Program ===\n");
	printf("Username: ");
	scanf("%s", &username);
	printf("Password: ");
	scanf("%s", &password);
	
	if(strcmp(username, "firman") == 0){
		
		if(strcmp(password, "sugoi") == 0){
		printf("Selamat datang bos!\n");
	
			} else {
				printf("Password salah, coba lagi!\n");
	
		}
	} else {
		printf("Anda belum terdaftar\n");
	
	}


}
