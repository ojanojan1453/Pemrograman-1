#include <stdio.h>

char konversi_nilai(int nilai) {
    if (nilai >= 80) {
        return 'A';
    } else if (nilai >= 70 && nilai <= 79) {
        return 'B';
    } else if (nilai >= 60 && nilai <= 69) {
        return 'C';
    } else if (nilai >= 50 && nilai <= 59) {
        return 'D';
    } else {
        return 'E';
    }
}

int main() {
    int nilai;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &nilai);
        printf("%c\n", konversi_nilai(nilai));
    }
    return 0;
}