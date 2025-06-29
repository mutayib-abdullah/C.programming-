#include <stdio.h>

int main() {
    int a = 0, b = 1, next = 0, n;

    printf("Enter the maximum value n: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    if (n >= 0) printf("%d ", a);
    if (n >= 1) printf("%d ", b);

    next = a + b;
    while (next <= n) {
        printf("%d ", next);
        a = b;
        b = next;
        next = a + b;
    }

    return 0;
}

