#include <stdio.h>
#include <math.h>

int main() {
    float alas, tinggi, miring;

    // Input sisi alas dan sisi tinggi
    printf("Masukkan panjang sisi alas segitiga (cm): ");
    scanf("%f", &alas);
    printf("Masukkan panjang sisi tinggi segitiga (cm): ");
    scanf("%f", &tinggi);

    // Menghitung sisi miring menggunakan rumus Pythagoras
    miring = sqrt((alas * alas) + (tinggi * tinggi));

    // Menampilkan hasil
    printf("Panjang sisi miring segitiga adalah: %.2f cm\n", miring);

    return 0;
}

