#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


void main() {
    // Code...     
//    int sesi = 0;
//    while(sesi <= 1000) {
//        printf("%d\n", sesi);
//        sesi++;
//    }

    // int bilangan;
    // printf("Masukan bilangan: ");
    // scanf("%d", &bilangan);
    // if(bilangan % 2 == 0) {
    //     printf("%d adalah bilangan genap!", bilangan);
    // } else {
    //     printf("%d adalah bilangan ganjil", bilangan);
    // }

    // char nama[10];
    // char salam[100] = "";

    // puts("Nama kamu siapa?: ");
    // gets(nama);

    // strcat(salam, "Hallo ");
    // strcat(salam, nama);
    // strcat(salam, " , selamat datang");

    // puts(salam);

    int n;
    int baris = 0;
    int bilangan = 2; // Bilangan pertama

    printf("n berapa: ");
    scanf("%d", &n);


    while (baris < n)
    {
        if(bilangan % 2 == 0) {
            if(bilangan % 4 != 0) {
                printf("%d \n", bilangan);
                baris++;
            }
        }
        bilangan++; 
    }
    

} 

