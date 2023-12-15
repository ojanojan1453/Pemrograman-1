#include <stdio.h>

int main() {
int choice;
float num1, num2, result;

do {
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &choice);

if (choice >= 1 && choice <= 4) {
            printf("Masukkan nilai pertama : ");
            scanf("%f", &num1);
            printf("Masukkan nilai kedua : ");
            scanf("%f", &num2);

            switch (choice) {
                case 1:
                    result = num1 + num2;
                    printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", num1, num2, result);
                    break;
                case 2:
                    result = num1 - num2;
                    printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", num1, num2, result);
                    break;
                case 3:
                    result = num1 * num2;
                    printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n", num1, num2, result);
                    break;
                case 4:
                    if (num2 != 0) {
                        result = num1 / num2;
                        printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n", num1, num2, result);
                    } else {
                        printf("Error: Pembagian dengan nol tidak diizinkan\n");
                    }
                    break;
            }
        } else if (choice == 5) {
            printf("Terimakasih, telah menggunakan kalkulator Rakhmad Fauzhan Ramadhan\n");
            break;
        } else {
            printf("Input anda salah, silahkan coba lagi\n");
        }
    } while (1);

    return 0;
}
