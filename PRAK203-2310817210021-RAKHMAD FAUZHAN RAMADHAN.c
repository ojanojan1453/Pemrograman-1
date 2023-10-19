#include <stdio.h>

int main() {
    double a, b, i, j, x, y, result;

    printf("Masukkan nilai a, b, i, j, x, y : ");
    
    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &i, &j, &x, &y);

    result = (a - b) * (i / j) - (x + y);

    printf("Hasil: %.3lf\n", result);

    return 0;
}
