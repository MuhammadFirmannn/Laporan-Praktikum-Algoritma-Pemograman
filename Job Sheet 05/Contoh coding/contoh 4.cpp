/*
Nama  : Muhammad Firman
NIM   : 23343044
Prodi : Informatika
*/

#include <stdio.h>

int main(){

	char grade;
	
	printf("Inputkan grade: "); 
	scanf("%c", &grade);
	
	switch (grade) {
	
	case 'A':
	printf("Luar biasa!\n");
	break;
	
	case 'B':
	case 'C':
	printf("Bagus!\n");
	break;
	
	case 'D':
	printf("Anda lulus\n");
	break;
	
	case 'E':
	case 'F':
	printf("Anda remidi\n");
	break;
	
	default:
	printf("Grade Salah!\n");
	
	}

}
