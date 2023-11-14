#include <stdio.h>

void generate_crossing_numbers(int num1, int num2) {
    if (num1 > num2) {
        for (int i = num1; i >= num2; i--) {
            printf("%d %d", i, num1 + num2 - i);
            if (i > num2) {
                printf(" - ");
            }
        }
    } else if (num2 > num1) {
        for (int i = num1; i <= num2; i++) {
            printf("%d %d", i, num1 + num2 - i);
            if (i < num2) {
                printf(" - ");
            }
        }
    }
}

int main() {
    int num1, num2;

    printf("Masukkan dua angka dipisahkan oleh spasi: ");
    scanf("%d %d", &num1, &num2);

    generate_crossing_numbers(num1, num2);

    return 0;
}
