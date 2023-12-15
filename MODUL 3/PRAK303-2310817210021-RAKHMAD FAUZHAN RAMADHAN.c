#include <stdio.h>

void cek_bilangan(int N) {
    if (N > 0) {
        printf("positif\n");
    } else if (N < 0) {
        printf("negatif\n");
    } else {
        printf("nol\n");
    }
}

int main() {
    int N;
    for (int i = 0; i < 3; i++) {
        scanf("%d", &N);
        cek_bilangan(N);
    }
    return 0;
}
