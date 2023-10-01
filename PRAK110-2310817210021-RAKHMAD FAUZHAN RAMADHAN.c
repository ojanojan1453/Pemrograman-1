#include <stdio.h>
#include <math.h>

int main() {
    // Nilai alas dan tinggi
    double alas = 5;
    double tinggi = 12;

    // Menghitung panjang sisi A, sisi B, dan sisi C
    double sisi_a = tinggi;
    double sisi_b = sqrt(alas * alas + tinggi * tinggi);
    double sisi_c = alas;

    // Menghitung keliling
    double keliling = sisi_a + sisi_b + sisi_c;

    // Menghitung luas
    double luas = 0.5 * alas * tinggi;

    printf("Diketahui :\n");
    printf("Alas = %.0f cm\n", alas);
    printf("Tinggi = %.0f cm\n", tinggi);
    printf("Jawab :\n");
    printf("Sisi A = %.0f cm\n", sisi_a);
    printf("Sisi B = %.0f cm\n", sisi_b);
    printf("Sisi C = %.0f cm\n", sisi_c);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %.0f cm\n", luas);

    return 0;
}

