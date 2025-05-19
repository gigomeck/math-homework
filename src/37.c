#include <stdio.h>
int main() {
    int n, i;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        for (i = 1; i <= n / 2; ++i)
            if ((n - i + 1) % 3 != 0) 
                break;
            else
                printf("Even number: %d", n);
    } else {
        for (i = 1; i <= n / 2; ++i)
            if (((n - i + 1) % 3 == 0) || ((n - i + 1) % 5 != 0)) 
                break;
            else
                printf("Odd number: %d", n);
    }
    return 0;
}
