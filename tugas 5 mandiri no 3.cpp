#include <stdio.h>

int main() {
    int jamMasuk, jamKeluar, lama, biaya;

    printf("Masukkan jam masuk: ");
    scanf("%d", &jamMasuk);
    printf("Masukkan jam keluar: ");
    scanf("%d", &jamKeluar);

    if (jamKeluar >= jamMasuk) {
        lama = jamKeluar - jamMasuk;
    } else {
        lama = (12 - jamMasuk) + jamKeluar;
    }

    if (lama <= 2) {
        biaya = 2000;
    } else {
        biaya = 2000 + (lama - 2) * 500;
    }

    printf("Lama parkir %d jam, Biaya = %d\n", lama, biaya);
    return 0;
}
