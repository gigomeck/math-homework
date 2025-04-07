#include <stdio.h>

int main() {
    int i;
    printf("Enter number of elements: ");
    scanf("%d", &i);
    
    if (i <= 0) {
        printf("Error: Number must be positive.\n");
        return 1;
    }
    
    for (i = 1; i <= i * i; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            continue;
        } else {
            printf("%d ", i);
        }
    }
    
    return 0;
}
