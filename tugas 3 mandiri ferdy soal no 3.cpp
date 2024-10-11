#include <stdio.h>
#include <math.h>

int main() {
    float alas, tinggi, miring;

    printf("Masukkan panjang sisi alas segitiga (cm): ");
    scanf("%f", &alas);
    printf("Masukkan panjang sisi tinggi segitiga (cm): ");
    scanf("%f", &tinggi);

    miring = sqrt((alas * alas) + (tinggi * tinggi));

    printf("Panjang sisi miring segitiga adalah: %.2f cm\n", miring);

    return 0;
}

