#include <stdio.h>

void main() {     
    // Database Mahasiswa --> Input data pake scanf
//    char nama_mahasiswa[20];
//    char prodi[20]; 
//    char kampus[20]; 
//    int umur; 

//    printf("Nama Mahasiswa: ");
//    scanf("%s", nama_mahasiswa);
   
//    printf("Nama kampus: ");
//    scanf("%s", kampus);

//    printf("Program studi: ");
//    scanf("%s", prodi);

//    printf("Umur: ");
//    scanf("%d", &umur);
 
//    printf("Namanya %s , kuliah di %s , prodinya adalah %s, umurnya %d", nama_mahasiswa, kampus, prodi, umur);

    // program kasir sederhana
    float jumlahHarga = 0.0;
    int lagi = 1;
    while (lagi > 0) 
    {
        printf("Daftar barang : \n");
        printf("1. Penghapus --> Rp 2.000 \n");
        printf("2. Pensil --> Rp. 3.000 \n");
        printf("3. Penggaris --> Rp 3.000 \n");
        printf("4. Pulpen -> 4.000 \n");
        int pilihan;
        printf("Mau beli yang mana?: ");
        scanf("%d", &pilihan);
        
        int jumlahBarang;
        printf("Jumlahnya berapa: ");
        scanf(" %d", &jumlahBarang);

        float diskon = 10.0 / 100.0; //d iskon 10%
        float potongan;

        if(pilihan == 1) {
            if(jumlahBarang >= 3) {
                jumlahHarga += 2000;
                jumlahHarga *= jumlahBarang;
                potongan = jumlahHarga * diskon;
                jumlahHarga -= potongan;
            } else {
                jumlahHarga += 2000;
                jumlahHarga *= jumlahBarang;
            }
        }

        if(pilihan == 2) {
             if(jumlahBarang >= 3) {
                jumlahHarga += 3000; 
                jumlahHarga *= jumlahBarang;
                potongan = jumlahHarga * diskon;
                jumlahHarga -= potongan;
            } else {
                jumlahHarga += 3000;
                jumlahHarga *= jumlahBarang;
            }
        }

        if(pilihan == 3) {
            if(jumlahBarang >= 3) {
                jumlahHarga += 3000;
                jumlahHarga *= jumlahBarang;
                potongan = jumlahHarga * diskon;
                jumlahHarga -= potongan;
            } else {
                jumlahHarga += 3000;
                jumlahHarga *= jumlahBarang;
            }
        }

        if(pilihan == 4) {
             if(jumlahBarang >= 3) {
                jumlahHarga += 4000;
                jumlahHarga *= jumlahBarang;
                potongan = jumlahHarga * diskon;
                jumlahHarga -= potongan;
            } else {
                jumlahHarga += 4000;
                jumlahHarga *= jumlahBarang;
            }
        }

        printf("Mau beli lagi: (1 =yes , 0=no)");
        scanf("%d", &lagi);
    }

    printf("Total yang harus kamu bayar adalah: %.2f", jumlahHarga);
} 

