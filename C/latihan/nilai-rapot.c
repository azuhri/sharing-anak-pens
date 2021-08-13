#include <stdio.h> 

void main() {
    // Studi Kasus :
    // Siswa melakukan 5 kali ulangan harian
    // tentukan nilai rapot (rata2 dari 5 nilai itu)
    
    int banyakUlangan = 5;
    float dataUlangan[banyakUlangan];
    float nilaiRapot;
    char nama[20];
    
    printf("=====PROGRAM MEMBUAT NILAI RAPOT========\n");
    printf("\nNama Siswa: ");
    scanf("%s", nama);

    // Pengisian Nilai
    for(int i = 0; i < banyakUlangan; i++) {
        printf("Masukan nilai ulangan ke-%d: ", i + 1);
        scanf("%f", &dataUlangan[i]);
    }

    nilaiRapot = 0;
    printf("\n==========Rekap Nilai Rapot %s================\n", nama);

    // Kalkulasi Nilai
    for (int i = 0; i < banyakUlangan; i++){
        printf("Hasil Ulangan harian ke-%i: %f\n", i + 1, dataUlangan[i]);
        nilaiRapot += dataUlangan[i];
    }
    
    printf("Nilai Rapot: %.1f", nilaiRapot / banyakUlangan);
    
} 
