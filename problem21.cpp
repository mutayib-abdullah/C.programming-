#include <stdio.h>

int main() {
    int n, term = 2;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Series: ");
    while (term <= n) {
        printf("%d ", term);
        term *= 2;
    }

    return 0;
}

