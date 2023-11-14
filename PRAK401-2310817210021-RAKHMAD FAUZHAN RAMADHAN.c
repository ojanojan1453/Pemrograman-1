#include <stdio.h>

void urutan(int kelipatan, char simbol) {
for (int i = 1; i <= 50; i++) {
if (i % kelipatan == 0) {
printf("%c ", simbol);
} else {
printf("%d ", i);
}
}
}

int main() {
int kelipatan;
char simbol;

scanf("%d %c", &kelipatan, &simbol);

urutan(kelipatan, simbol);

return 0;
}
