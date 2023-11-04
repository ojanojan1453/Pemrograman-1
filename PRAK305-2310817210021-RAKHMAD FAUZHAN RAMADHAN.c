#include <stdio.h>

void konversi_detik(int total_detik) {
    int detik, menit, jam, hari;

    detik = total_detik % 60;
    menit = (total_detik / 60) % 60;
    jam = (total_detik / 3600) % 24;
    hari = total_detik / 86400;

    if (hari > 0) {
        printf("%d hari %02d:%02d:%02d\n", hari, jam, menit, detik);
    } else {
        printf("%02d:%02d:%02d\n", jam, menit, detik);
    }
}

int main() {
    int detik, jumlah_input = 5;

    for (int i = 0; i < jumlah_input; i++) {
        scanf("%d", &detik);
        konversi_detik(detik);
    }

    return 0;
}
