#include <stdio.h>

int main() {
    int angka;

    // Input bilangan bulat positif
    printf("Masukkan sebuah bilangan bulat positif: ");
    scanf("%d", &angka);

    // Mengecek apakah bilangan tersebut genap atau ganjil
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

