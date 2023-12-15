#include <stdio.h>

int main() {
    float nilai_pertama, nilai_kedua, hasil;

    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &nilai_pertama);
    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &nilai_kedua);

    hasil = nilai_pertama + nilai_kedua;

    printf("Hasil dari penjumlahan nilai pertama %.0f dan nilai kedua %.2f adalah %.2f\n", nilai_pertama, nilai_kedua, hasil);

    return 0;
}
