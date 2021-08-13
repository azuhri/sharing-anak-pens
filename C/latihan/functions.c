#include <stdio.h>
#include <stdlib.h>

void myName(char myName[50], char age[10]) {
    printf("Hallo nama saya %s dan usia saya %s", myName, age);
}

double luasBangun(int sisi1, int sisi2) {
    printf("ini luas persegi");
    return sisi1 * sisi2;
}

int kalkulatorSederhana(int angka1, char operator ,int angka2) {
    if(operator == '+') {
        return angka1 + angka2;
    } else if(operator == '-') {
        return angka1 - angka2;
    } else if (operator == '*') {
        return angka1 * angka2;
    } else if(operator == '/') {
        return angka1 / angka2;
    } else {
        return 0;
    }
}

int exponent(int angka, int pangkat) {
    int hasil = 1;
    for(int i = 0; i < pangkat; i++) {
        hasil *= angka;
    }
    return hasil;
}

void main() {
    printf("Fungsi kalkulator sederhana\n");
    printf("%d\n", kalkulatorSederhana(25,'-',10));
    printf("Fungsi exponent sederhana\n");
    printf("%d", exponent(16,3));
} 

