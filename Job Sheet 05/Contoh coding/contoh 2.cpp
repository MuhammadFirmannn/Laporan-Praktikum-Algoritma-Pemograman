/*
Nama  : Muhammad Firman
NIM   : 23343044
Prodi : Informatika
*/

#include <stdio.h>
#include <string.h>

int main(){

// membuat array karakter untuk menyimpan password 
	char password [30];
	printf("==== Program Login ====\n");
	printf("Masukan password: ");
	scanf("%s", &password);

	// percabangan if/esle
	if(strcmp(password, "kopi") == 0){ 
	printf("Selamat datang bos!\n");
	} 
	else {
	printf("Password salah, coba lagi!\n");
	}
	
	printf("Terimakasih sedah menggunakan aplikasi ini");

}
