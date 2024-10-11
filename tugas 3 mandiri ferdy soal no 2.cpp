#include <stdio.h>

int main() {
    float celsius, fahrenheit, reamur;

    // Input suhu dalam Celcius
    printf("Masukkan suhu dalam Celcius: ");
    scanf("%f", &celsius);

    // Menghitung suhu dalam Fahrenheit dan Reamur
    fahrenheit = (celsius * 9 / 5) + 32; // Rumus konversi Celcius ke Fahrenheit
    reamur = celsius * 4 / 5;            // Rumus konversi Celcius ke Reamur

    // Menampilkan hasil
    printf("Suhu dalam Fahrenheit: %.2f °F\n", fahrenheit);
    printf("Suhu dalam Reamur: %.2f °R\n", reamur);

    return 0;
}

