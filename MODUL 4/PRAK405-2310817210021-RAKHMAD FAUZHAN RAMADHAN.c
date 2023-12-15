#include <stdio.h>

int main() {
int n, k;
printf("Input\n");
scanf("%d %d", &n, &k);

int total = 0;
for (int i = 1; i <= n; i++) {
int barisan = 0;
for (int j = i; j >= 1; j--) {
int nilai = j * k;
barisan += nilai;
printf("(%d * %d) = %d", j, k, nilai);

if (j > 1) {
printf(" + ");
} else {
printf("\n");
}
}
total += barisan;
}

printf("\nOutput\n");
printf("%d\n", total);

return 0;
}
