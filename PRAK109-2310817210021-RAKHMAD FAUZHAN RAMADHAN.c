#include <stdio.h>

int main() {
    
    double jumlah_pasukan_yu_zhong = 958730.0;
    
    int jumlah_pahlawan = 5;

    double jumlah_pasukan_per_pahlawan = jumlah_pasukan_yu_zhong / jumlah_pahlawan;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %.2lf\n", jumlah_pasukan_yu_zhong);
    printf("Jumlah pahlawan = %d\n", jumlah_pahlawan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %.0lf pasukan\n", jumlah_pasukan_per_pahlawan);

    return 0;
}
