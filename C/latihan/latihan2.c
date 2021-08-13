#include <stdio.h>

typedef enum {false, true} bool;
void main() {
    // type data  :
    // integer (int); -> angka 
    // string (string); -> kata
    // boolean (boolean); -> option ( true/false )
    // character (char); -> 'A' / 'B'
    // float (float); -> pecahan
    // double (double); -> pecahan banyak

    //Cara Deklarasi Variable
    // int angka;
    // angka = 10;

    // int angka2 = 20;
    // printf("angka -> %d\n", angka);
    // printf("angka -> %i", angka2);

    // char namaMahasiswa[25] = "Azis Zuhri Pratomo";
    // char prodi[20] = "Teknik Informatika";
    // char kelas[10] = "IT A";
    
    // printf("Nama : %s\n", namaMahasiswa);
    // printf("Prodi: %s\n", prodi);
    // printf("Kelas: %s", kelas);

    // operator aritmatika / kalkulasi
    // + -> penjumlahan
    // - -> pengurangan 
    // * -> perkalian 
    // / -> pembagian
    // % -> modulu ( hasil bagi )
    
    // int angka_1 = 10;
    // int angka_2 = 20;

    // int penjumlahan = angka_1 + angka_2;
    // int pengurangan = angka_2 - angka_1;
    // int perkalian = angka_1 * angka_2;
    // int modulus = angka_2 % angka_1;

    // printf("Penjumlahan : %d\n", penjumlahan);
    // printf("Pengurangan : %d\n", pengurangan);
    // printf("Perkalian : %d\n", perkalian);
    // printf("Modulus : %d\n", modulus);

    // operator logika 
    // || -> OR  -> false | false = false | false | true = true 
    // && -> AND -> true | true = true -> false | true = false 

    // Operator Pembading
    // > -> lebih dari 
    // >= -> lebih dari sama dengan
    // < -> kurang dari 
    // <= -> kurang dari sama dengan
    // == -> sama dengan
    // != -> tidak sama dengan 

    // int batasUmur = 18;

    // // If statements
    // if(batasUmur >= 18) { // false
    //     printf("Anda sudah cukup umur!, silahkan menonton channel yt kimi hime");
    // } else {
    //     printf("Anda belum cukup umur!, Anda dilarang menonton!");
    // }

    // int usia;
    // bool nembak = false;
    // char option;

    // printf("Masukan umur Anda: ");
    // scanf("%d", &usia);

    // printf("Mau nembak (y/n)?: ");
    // scanf(" %c", &option);

    // if(option == 'y') {
    //     nembak = true;
    // } else if( option == 'n') {
    //     nembak = false;
    // } else {
    //     nembak = false;
    // }

    // switch (option){
    // case 'n':
    //     nembak = false;
    //     break;
    // case 'y':
    //     nembak = true;
    //     break;
    // default:
    //     nembak = false;
    //     break;
    // }

    // if(usia >= 17 || nembak) { //true dan false = true;
    //     printf("\nSIM Anda Berhasil di cetak");
    // } else {
    //     printf("\nMaaf Anda tidak bisa membaut SIM");
    // }

    // Looping :
    // for
    // while
    // do while

    // Program kalkulator sederhana
    // int banyakPengulangan = 0;
    // int pengulangan = 1;

    // int a,b,c,d,f,g,h,i,j,k;

    // for( int i = 1; i <= banyakPengulangan; i*=2 ) {       
    //         printf("Angka %d\n", i);
    // }

    // while(pengulangan <= banyakPengulangan) {
    //     printf("Angka %d\n", pengulangan);
    //     pengulangan++;
    // }

    // do {
    //      printf("Angka %d\n", pengulangan);
    //      pengulangan++;
    // } while (pengulangan <= banyakPengulangan);

    // Kalkulator sederhana

    float angka1, angka2, hasil, angka_lanjutan;
    char operator, cobaLagi;
    int i = 0;
    bool try = true;
    hasil = 0;
    
    while (try) {
        if(i == 0) {
            printf("========== KALKULATOR SEDERHANA ===============");
            printf("\nMasukan Angka 1: ");
            scanf("%f", &angka1);

            printf("\nOperator: ");
            scanf(" %c", &operator);

            printf("\nMasukan Angka 2: ");
            scanf("%f", &angka2);

            switch (operator){
            case '+':
                hasil += angka1 + angka2;
                break;
            case '-':
                hasil += angka1 - angka2;
                break;
            case '*':
                hasil += angka1 * angka2;
                break;
            case '/':
                hasil += angka1 / angka2;
                break;
            default:
                hasil = 0;
                break;
            }

        } else {
            printf("\nOperator: ");
            scanf(" %c", &operator);

            printf("\nMasukan Angka lanjutan: ");
            scanf("%f", &angka_lanjutan);


            switch (operator){
            case '+':
                hasil += angka_lanjutan;
                break;
            case '-':
                hasil -= angka_lanjutan;
                break;
            case '*':
                hasil *= angka_lanjutan;
                break;
            case '/':
                hasil /= angka_lanjutan;
                break;
            default:
                hasil = 0;
                break;
            }
        }
        printf("Mau lanjut (y/n): ");
        scanf(" %c", &cobaLagi);

        if(cobaLagi == 'y') {
            try = true;
            i++;
        } else {
            try = false;
        }
    }

    if(operator != '+' && operator != '-' && operator != '*' && operator != '/' && hasil == 0) {
        printf("%s", "Maaf operator tidak valid!");
    } else {    
        printf("Hasil: %.2f", hasil);
    }
    
    // Logika Sekarang :
    // 1. Masukan Angka 1
    // 2. Masukan operator
    // 3. Masukan Angka 2
    // 4. Hasil keluar

    // Logika Ekspetasi lanjutan :
    // 1. Masukan Angka 1
    // 2. Masukan operator
    // 3. Masukan Angka 2
    // 4. Lanjut kalkulasi -> y/n
    // 5. Kalo n -> berarti hasil keluar
    // 6. Kalo y -> berarti ulang lagi dari no.1
    // x. Hasil keluar
} 

