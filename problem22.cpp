#include <stdio.h>

int main() {
    unsigned long long term = 2, n;

    printf("Enter the maximum value n: ");
    scanf("%llu", &n);

    printf("Series: ");
    while (term <= n) {
        printf("%llu ", term);
        term = term * term;
    }

    return 0;
}

