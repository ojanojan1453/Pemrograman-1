#include <stdio.h>

int main() {
    int a = 4;
    int b = 8;
    int c = 3;

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);

    int hasil_sama_dengan = (a = b) ? 0 : 1;
    int hasil_lebih_besar = (b > c) ? 1 : 0;
    int hasil_tidak_sama_dengan = (a != c) ? 1 : 0;
    
    printf("Apakah a sama dengan b ? jawabannya adalah %d\n", hasil_sama_dengan);
    printf("Apakah b lebih besar dari c ? jawabannya adalah %d\n", hasil_lebih_besar);
    printf("Apakah a tidak sama dengan c ? jawabannya adalah %d\n", hasil_tidak_sama_dengan);

    return 0;
}
