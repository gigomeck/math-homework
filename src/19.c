#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if (n > 0) {
        printf("The number %d is positive.\n", n);
    } else {
        printf("The number %d is not positive.\n", n);
    }

    return 0;
}
