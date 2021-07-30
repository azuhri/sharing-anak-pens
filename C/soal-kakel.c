#include <stdio.h>


int main(){
    
    float a,t,p,l,s;
    float phi=3.14, r;
    float LP, LPP, LS, LL;
    int pilih;
    int firstChoice;

    float VPS, VB, VK, VTB, tinggiPrismaSegita;

    int try = 1;
    
    while(try == 1) {      
        puts("== MENU MENGHITUNG BANGUN ==");
        printf("Menu hitung : \n");
        printf("1. Luas\n"
                "2. Volume\n"
                "\n Pilihan : "
        );
        scanf("%d",&firstChoice);

        if(firstChoice == 1) {

            // Block Kode Luas
            puts("== MENU MENGHITUNG LUAS BANGUN ==");
            printf("1. Segitiga\n"
                "2. Persegi\n"
                "3. Persegi panjang\n"
                "4. Lingkaran\n"
                "Masukkan pilihan : ");
            scanf("%d", &pilih);
            
            if(pilih == 1) {
                    puts("--------------------------------------------------");
                    printf("-- Program Menghitung Luas Segitiga --\n");
                    printf("\n Alas   = ");
                    scanf("%f",&a);
                    printf("\n Tinggi = ");
                    scanf("%f",&t);
                    
                    LS=a*t/2;
                    printf("\n Luas   = %g\n",LS);
            } else if(pilih == 2) {
                    puts("--------------------------------------------------");
                    printf("-- Program Menghitung Luas Persegi --\n");
                    printf("Masukkan panjang sisi persegi : ");
                    scanf("%f", &s);
                    
                    LP = s * s;
                    
                    printf("Luas persegi adalah %g\n", LP);
            } else if(pilih == 3) {
                    puts("--------------------------------------------------");
                    printf("-- Program Menghitung Luas Persegi Panjang --\n");
                    printf ("masukkan panjang : ");
                    scanf  ("%f", &p);
                    printf ("masukkan lebar : ");
                    scanf  ("%f", &l);
                
                    LPP = p * l;
                
                    printf("luas persegi panjang adalah %f\n", LPP);
            } else {
                puts("--------------------------------------------------");
                printf("-- Program Menghitung Luas Lingkaran --\n");
                printf ("masukkan jari-jari lingkaran : ");
                scanf  ("%f", &r);
                
                LL = phi * r * r;
                
                printf("luas lingkaran adalah %g", LL);
            }
        } else if(firstChoice == 2) {
            // Block Kode Volume
            puts("== MENU MENGHITUNG VOLUME BANGUN ==");
            printf("1. Prisma segitiga\n"
                "2. Balok\n"
                "3. Kubus\n"
                "4. Tabung\n"
                "Masukkan pilihan : ");
            scanf("%d", &pilih);
            
            if(pilih == 1) {
                    puts("--------------------------------------------------");
                    printf("-- Program Menghitung Volume Segitiga --\n");
                    printf("\n Alas   = ");
                    scanf("%f",&a);
                    printf("\n Tinggi = ");
                    scanf("%f",&t);
                    printf("\n Tinggi Prisma Segita = ");
                    scanf("%f",&tinggiPrismaSegita);
                    LS=a*t/2;
                    VPS= LS * tinggiPrismaSegita; 
                    
                    printf("\n Volume Prisma Segita adalah %g\n",VPS);
            } else if(pilih == 2) {
                    puts("--------------------------------------------------");
                    printf("-- Program Menghitung Volume Balok --\n");
                    printf ("masukkan panjang : ");
                    scanf  ("%f", &p);
                    printf ("masukkan lebar : ");
                    scanf  ("%f", &l);
                    printf ("masukkan tinggi balok : ");
                    scanf  ("%f", &t);
                
                    VB = p * l * t;
                
                    printf("Volume Balok adalah %f\n", VB);
            } else if(pilih == 3) {
                    puts("--------------------------------------------------");
                    printf("-- Program Menghitung Volume Balok --\n");
                    printf("Masukan Sisi: ");
                    scanf("%f",&s);
                    VK = s * s * s;
                
                    printf("volume kubus adalah %f\n", VK);
            } else {
                puts("--------------------------------------------------");
                printf("-- Program Menghitung Luas Lingkaran --\n");
                printf ("masukkan jari-jari lingkaran : ");
                scanf  ("%f", &r);
                printf("Tinggi Tabung = ");
                scanf("%f", &t);
                
                VTB = phi * r * r * t;
                
                printf("luas lingkaran adalah %g", VTB);
            }
        } else {
            printf("Maaf inputan tidak terbaca system!");
        }

        printf("\nMau coba lagi ? (1= yes, 0=no)");
        scanf("%d", &try);
    }


    // switch(pilih){
    //     case 1 : 
    //         puts("--------------------------------------------------");
    //         printf("-- Program Menghitung Luas Segitiga --\n");
    //         printf("\n Alas   = ");
    //         scanf("%f",&a);
    //         printf("\n Tinggi = ");
    //         scanf("%f",&t);
            
    //         LS=a*t/2;
    //         printf("\n Luas   = %g\n",LS);
        
    //     break;
    //     case 2 :
    //         puts("--------------------------------------------------");
    //         printf("-- Program Menghitung Luas Persegi --\n");
    //         printf("Masukkan panjang sisi persegi : ");
    //         scanf("%f", &s);
            
    //         LP = s * s;
            
    //         printf("Luas persegi adalah %g\n", LP);
    
    //     break;
    //     case 3 :
    //         puts("--------------------------------------------------");
    //         printf("-- Program Menghitung Luas Persegi Panjang --\n");
    //         printf ("masukkan panjang : ");
    //         scanf  ("%f", &p);
    //         printf ("masukkan lebar : ");
    //         scanf  ("%f", &l);
        
    //         LPP = p * l;
        
    //     printf("luas persegi panjang adalah %f\n", LPP);
    //     break; 
    //     case 4 :
    //         puts("--------------------------------------------------");
    //         printf("-- Program Menghitung Luas Lingkaran --\n");
    //         printf ("masukkan jari-jari lingkaran : ");
    //         scanf  ("%f", &r);
            
    //         LL = phi * r * r;
        
    //     printf("luas lingkaran adalah %g", LL);
    //     break;
    //     default :
    //         puts("Pilihan yang Anda masukkan tidak ada di menu");
    //     break;
    // }
}