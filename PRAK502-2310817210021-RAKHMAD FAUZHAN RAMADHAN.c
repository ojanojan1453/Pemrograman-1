#include <stdio.h>
#include <math.h>

int mutlak(int angka) {
    return (angka < 0) ? -angka : angka;
}

int hitung(int nilai1, int nilai2) {
    return mutlak(nilai1 - nilai2);
}

int main() {
    int a, b, c, d;
    scanf("%d", &a);
    scanf("%d", &c);
    scanf("%d", &b);
    scanf("%d", &d);

    int Hasil = hitung(a, b) + hitung(c, d);
    printf("%d\n", mutlak(Hasil));

    return 0;
}
