#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    double A, B, C, luas, keliling;
    char input[100];

    printf("Masukkan nilai A (dan B jika format mendatar): ");
    fgets(input, sizeof(input), stdin);

    if (strchr(input, ' ') == NULL) {  
        sscanf(input, "%lf", &A);
        printf("B= ");
        scanf("%lf", &B);
    } else {  
        sscanf(input, "%lf %lf", &A, &B);
    }

    C = sqrt(B*B - A*A);  

    luas = 0.5 * A * C;  
    keliling = A + B + C;  

    printf("C(sisi alas)?\n");
    printf("Alas = %.0lf cm\n", C);
    printf("Tinggi = %.0lf cm\n", A);
    printf("Keliling = %.0lf cm\n", keliling);
    printf("Luas = %.0lf cm^2\n", luas);

    return 0;
}
