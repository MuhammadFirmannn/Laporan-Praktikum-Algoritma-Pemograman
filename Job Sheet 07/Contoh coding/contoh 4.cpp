/*
Nama  : Muhammad Firman
NIM   : 23343044
Prodi : Informatika
*/

#include <stdio.h>
int main(){

	// membuat array
	int nilai[5] = {33, 22, 11, 44, 21};
	
	// mengambil banyaknya isi array
	int length = sizeof(nilai) / sizeof(*nilai);
	
	printf("Banyaknya isi array nilai: %d", length);

}
