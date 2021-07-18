#include <stdio.h> 
#include <stdlib.h> 

int main() { 
    
    // Belajar if else 

    // Satu condition
    // int age;
    // char name[20];

    // printf("Nama kamu siapa?: ");
    // scanf(" %s", name);

    // printf("Umur kamu berapa?: ");
    // scanf(" %d", &age);

    // one condition
    // if(age >= 18) {
    //     printf("%s kamu sudah dewasa", name);
    // }

    // two condition
    // if(age >= 18) {
    //     printf("%s kamu sudah dewasa", name);
    // } else {
    //     printf("%s kamu masih kecil", name);
    // }


    // More than one condition
    // int nilai;
    // char name[15];

    // printf("Masukan nama kamu: ");
    // scanf(" %s", name);

    // printf("Masukan nilai kamu: ");
    // scanf(" %d", &nilai);

    // Gerbang Logika
    // && -> AND
    // || -> OR

    // if(nilai > 90) {
    //     printf("%s kamu dapat nilai A+", name);
    // } else if( nilai <= 90 && nilai >= 80) {
    //     printf("%s kamu dapat nilai A", name);
    // } else if( nilai < 80 && nilai >= 70) {
    //     printf("%s kamu dapat nilai B", name);
    // } else if( nilai < 70 && nilai >= 60) {
    //     printf("%s kamu dapat nilai C", name);
    // } else if( nilai < 60 ) {
    //     printf("%s kamu dapat nilai D, harus remedial", name);
    // }

    // Short meta of if else
    // int cekGolonganUmur;
    // char hasil;

    // printf("Masukan umur anak anda: ");
    // scanf("%d", &cekGolonganUmur);

    // (cekGolonganUmur < 5) ? printf("Anak anda masih balita") : printf("Anak Anda sudah besar");

    // Belajar switch case 
    char tipeBahasa;

    printf("Daftar Bahasa: \n");
    printf(" \t-indonesia \n");
    printf(" \t-jepang \n");
    printf(" \t-perancis \n");
    printf(" \t-german \n");
    printf(" \t-inggris \n");

    printf("Piliha bahasa: ( cth: indonesia )");
    scanf("%c", tipeBahasa);

    // tipeBahasa = "indonesia";

    switch (tipeBahasa){
        case 'i':
            printf("Selamat Pagi!");
            break;
        case 'j':
            printf("ohayou onii chan!");
            break;
        case 'p':
            printf("bonjour!");
            break;
        case 'g':
            printf("guten Morgen");
            break;
        default:
            printf("Good morning!");
            break;
    }





}   

