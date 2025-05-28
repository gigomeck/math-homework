#include <stdio.h>

int main() {
    int i;
    printf("Enter number of elements: ");
    scanf("%d", &i);

    if (i >= 0) {
        printf("The factorial of %d is %d\n", i, calculateFactorial(i));
    } else {
        printf("Please enter a non-negative integer.\n");
    }

    return 0;
}

int calculateFactorial(int num) {
    int result = 1;
    for (int i = 2; i <= num; ++i) {
        result *= i;
    }
    return result;
}
