#include <stdio.h>
#include <string.h>

void dekode_pesan(char kode[], char pesan_diterima[], char pesan_terdekripsi[], int *hitung_bintang, int *hitung_pagar) {
    for (int i = 0; i < strlen(kode) && i < strlen(pesan_diterima); i++) {
        if (kode[i] == pesan_diterima[i]) {
            pesan_terdekripsi[i] = '*';
            (*hitung_bintang)++;
        } else {
            pesan_terdekripsi[i] = '#';
            (*hitung_pagar)++;
        }
    }
}

int main() {
    char kode[1000], pesan_diterima[1000], pesan_terdekripsi[1000];
    int hitung_bintang = 0, hitung_pagar = 0;

    fgets(kode, sizeof(kode), stdin);
    fgets(pesan_diterima, sizeof(pesan_diterima), stdin);

    kode[strcspn(kode, "\n")] = '\0';
    pesan_diterima[strcspn(pesan_diterima, "\n")] = '\0';

    dekode_pesan(kode, pesan_diterima, pesan_terdekripsi, &hitung_bintang, &hitung_pagar);

    if (strlen(kode) != strlen(pesan_diterima)) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
    } else {
        printf("%s\n", pesan_terdekripsi);
        printf("* = %d\n", hitung_bintang);
        printf("# = %d\n", hitung_pagar);

        if (hitung_bintang >= hitung_pagar) {
            printf("Pesan Asli\n");
        } else {
            printf("Pesan Palsu\n");
        }
    }

    return 0;
}

