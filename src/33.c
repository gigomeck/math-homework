#include <stdio.h>

void main() {
    int i = 0;
    int j = 1;

    while (j <= 5) {
        printf("i = %d, j = %d\n", i, j);
        i++;
        j *= 2;
    }
}
