#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    double r, h, volume, luas, keliling;
    char input[100];

    printf("Masukkan jari-jari (dan tinggi, jika format mendatar): ");
    fgets(input, sizeof(input), stdin);

    if (strchr(input, ' ') == NULL) {  
        sscanf(input, "%lf", &r);
        printf("tinggi: ");
        scanf("%lf", &h);

        volume = ceil(M_PI * r * r * h);
        luas = ceil(2 * M_PI * r * r + 2 * M_PI * r * h);
        keliling = ceil(2 * M_PI * r);
    } else {  
        sscanf(input, "%lf %lf", &r, &h);

        volume = M_PI * r * r * h;
        luas = 2 * M_PI * r * r + 2 * M_PI * r * h;
        keliling = 2 * M_PI * r;
    }

    printf("Volume = %0.2lf\n", volume);
    printf("Luas = %0.2lf\n", luas);
    printf("Keliling = %0.2lf\n", keliling);

    return 0;
}
