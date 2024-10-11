#include <stdio.h>
#include <math.h>

int main() {
    float alas, tinggi, luas, keliling, sisiMiring;

    // Input panjang alas dan tinggi segitiga
    printf("Masukkan panjang alas segitiga (cm): ");
    scanf("%f", &alas);
    printf("Masukkan tinggi segitiga (cm): ");
    scanf("%f", &tinggi);

    // Menghitung luas segitiga
    luas = (alas * tinggi) / 2;

    // Menghitung keliling segitiga
    sisiMiring = sqrt((alas / 2) * (alas / 2) + tinggi * tinggi); // Menghitung sisi miring menggunakan Pythagoras
    keliling = alas + 2 * sisiMiring;

    // Menampilkan hasil
    printf("Luas segitiga: %.2f cm^2\n", luas);
    printf("Keliling segitiga: %.2f cm\n", keliling);

    return 0;
}

