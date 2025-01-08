#include <stdio.h>
#include <stdlib.h>

int main() {
    int angka, jumlah = 1;

    // Meminta input dari pengguna untuk angka faktorial
    printf("Masukkan bilangan untuk faktorial: ");
    scanf("%d", &angka);

    // Menampilkan header untuk faktorial
    printf("%d! = ", angka);

    // Perulangan untuk menghitung faktorial
    for (int i = angka; i > 0; i--) {
        printf("%d", i); // Menampilkan angka faktorial yang sedang dihitung

        // Mengalikan angka dengan jumlah untuk menghitung faktorial
        jumlah *= i;

        // Menambahkan tanda '*' setelah angka kecuali angka terakhir
        if (i > 1)
            printf(" * ");
    }

    // Menampilkan hasil faktorial
    printf(" = %d", jumlah);

    return 0; // Mengakhiri program
}
