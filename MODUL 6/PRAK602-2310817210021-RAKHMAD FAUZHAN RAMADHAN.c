#include <stdio.h>

int main() {
    
    int jumlahRuangan;
    scanf("%d", &jumlahRuangan);

    int zetsuPutih[jumlahRuangan];
    for (int i = 0; i < jumlahRuangan; i++) {
        scanf("%d", &zetsuPutih[i]);
    }

    
        int jumlahSetelahMembelah = zetsuPutih[i] * (i + 1);
        printf("%d ", jumlahSetelahMembelah);
    }

    return 0;
}
