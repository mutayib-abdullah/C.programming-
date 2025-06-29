#include <stdio.h>

int main() {
    int n;
    unsigned long long product = 1; 

    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        product *= i;
    }

    printf("Product of series from 1 to %d is: %llu\n", n, product);

    return 0;
}

