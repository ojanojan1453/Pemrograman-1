#include <stdio.h>

const char* ejaan_bilangan(int n) {
    if (n < 0 || n >= 100) {
        return "Anda Menginput Melebihi Limit Bilangan";
    } else if (n == 0) {
        return "Nol";
    } else if (n < 10) {
        return "Satuan";
    } else if (n < 20) {
        return "Belasan";
    } else {
        return "Puluhan";
    }
}

int main() {
    int bilangan, jumlah_input = 5;

    for (int i = 0; i < jumlah_input; i++) {
        scanf("%d", &bilangan);
        printf("%s\n", ejaan_bilangan(bilangan));
    }

    return 0;
}
