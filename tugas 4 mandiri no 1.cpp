#include <stdio.h>

int main() {
    int angka;

    printf("Masukkan sebuah bilangan bulat positif: ");
    scanf("%d", &angka);

    if (angka > 0) {
        if (angka % 2 == 0) {
            printf("GENAP\n");
        } else {
            printf("GANJIL\n");
        }
    } else {
        printf("Input harus bilangan bulat positif!\n");
    }

    return 0;
}

