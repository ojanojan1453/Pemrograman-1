#include <stdio.h>

void buatMatriks(int baris, int kolom, int matriks[baris][kolom], int elemen[]) {
    int index = 0;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            matriks[i][j] = elemen[index++];
        }
    }
}

void tampilkanMatriks(int baris, int kolom, int matriks[baris][kolom]) {
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int baris, kolom;
    scanf("%d %d", &baris, &kolom);

    int elemen[baris * kolom];
    for (int i = 0; i < baris * kolom; i++) {
        scanf("%d", &elemen[i]);
    }

    int matriks[baris][kolom];
    buatMatriks(baris, kolom, matriks, elemen);
    tampilkanMatriks(baris, kolom, matriks);

    return 0;
}
