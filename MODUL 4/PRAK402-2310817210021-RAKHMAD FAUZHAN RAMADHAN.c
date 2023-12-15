#include <stdio.h>

void urutkan_bilangan(int batas) {
for (int i = 1; i <= batas; i += 2) {
    printf("%d ", i);
    }
    printf("\n");

for (int i = (batas % 2 == 0) ? batas : batas - 1; i >= 2; i -= 2) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
int batas;

    printf("Input\n");
    scanf("%d", &batas);

    printf("\nOutput\n");
    urutkan_bilangan(batas);

return 0;
}
