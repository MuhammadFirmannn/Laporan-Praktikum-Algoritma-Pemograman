/*
Nama  : Muhammad Firman
NIM   : 23343044
Prodi : Informatika
*/

#include <stdio.h>

int main(){

	int jawaban;
	
	printf("Berapakah hasil 3+4?\n");
	
	printf("jawab> ");
	scanf("%d", & jawaban);
	
	printf("Jawaban anda: %s\n", (jawaban == 7) ? "Benar" : "Salah");
}
