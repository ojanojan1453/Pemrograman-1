#include <stdio.h>

void sortNumbers(int *a, int *b) {
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int data[3][2] = {
        {36, 12},
        {5, 6},
        {94, 65}
    };

    for (int i = 0; i < 3; i++) {
        sortNumbers(&data[i][0], &data[i][1]);
        printf("%d %d\n", data[i][0], data[i][1]);
    }

    return 0;
}