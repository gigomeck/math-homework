#include <stdio.h>

void main() {
    int i;
    printf("Enter the number of rows: ");
    scanf("%d", &i);

    if (i <= 0) {
        printf("Number of rows must be positive.\n");
    } else {
        for (i = 1; i <= i * 2 - 1; i += 2) {
            printf("* ");
        }
    }

    printf("\n");
}
