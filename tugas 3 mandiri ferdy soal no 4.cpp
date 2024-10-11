#include <stdio.h>

int main() {
    int bilangan;

    // Input bilangan bulat positif
    printf("Masukkan bilangan bulat positif: ");
    scanf("%d", &bilangan);

    // Memeriksa apakah bilangan valid
    if (bilangan < 0) {
        printf("Silakan masukkan bilangan bulat positif.\n");
        return 1; // Keluar dari program jika bilangan tidak positif
    }

    // Memeriksa dan menampilkan keterangan ganjil atau genap
    if (bilangan % 2 == 0) {
        printf("GENAP\n");
    } else {
        printf("GANJIL\n");
    }

    return 0;
}

