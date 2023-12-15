#include <stdio.h>

void perkalian_matriks(int n, int matriks_a[n][n], int matriks_b[n][n], int matriks_hasil[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriks_hasil[i][j] = 0;
            for (int k = 0; k < n; k++) {
                matriks_hasil[i][j] += matriks_a[i][k] * matriks_b[k][j];
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int matriks_a[n][n], matriks_b[n][n], matriks_hasil[n][n];

    printf("Matriks A\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriks_a[i][j]);
        }
    }

    printf("Matriks B\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriks_b[i][j]);
        }
    }

    perkalian_matriks(n, matriks_a, matriks_b, matriks_hasil);

    printf("Matriks A x B\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriks_hasil[i][j]);
        }
        printf("\n");
    }

    return 0;
}
