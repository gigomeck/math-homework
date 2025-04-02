#include <stdio.h>

void main() {
    int i;
    printf("Please enter the number of elements: ");
    scanf("%d", &i);

    if (i > 0) {
        for (i = 1; i <= i; i++) {
            printf("*");
        }
        printf("\n");
    } else {
        printf("Invalid input.\n");
    }
}
