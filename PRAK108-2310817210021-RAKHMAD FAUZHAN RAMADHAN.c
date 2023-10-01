#include <stdio.h>

int main() {
   
    int jumlah_putaran = 5;

    float jarak_tempuh = 14.0;

    float keliling_taman = jarak_tempuh / jumlah_putaran;

    float jari_jari_taman = keliling_taman / (2 * 3.14159);

    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", jumlah_putaran);
    printf("Jarak tempuh Pak Dengklek = %.2f Kilometer\n", jarak_tempuh);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", jari_jari_taman);

    return 0;
}
