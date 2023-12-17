/*
Nama  : Muhammad Firman
NIM   : 23343044
Prodi : Informatika
*/

#include <stdio.h>

int main(){
    float presensi, praktek, uts, uas, nilai_akhir;
    
    printf("masukkan nilai presensi : ");
    scanf("%f", &presensi);
    
    printf("masukkan nilai praktek : ");
    scanf("%f", &praktek);
    
    printf("masukkan nilai uts : ");
    scanf("%f", &uts);
    
    printf("masukkan nilai uas : ");
    scanf("%f", &uas);

    nilai_akhir = (presensi * 0.1) + (praktek * 0.2) + (uts * 0.3) + (uas * 0.4);

    printf("Nilai akhir Anda adalah: %.2f\n", nilai_akhir);
    
    return 0;
}
