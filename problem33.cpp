#include <stdio.h>

int main() {
    int i, j;

    // Outer loop for rows (from 2 to 5)
    for (i = 2; i <= 5; i++) {
        // Inner loop for printing stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to next line
        printf("\n");
    }

    return 0;
}

