#include <stdio.h>

int main() {
    int i, j;

    // Outer loop for rows
    for (i = 5; i >= 1; i--) {
        // Skip printing row with 4 stars to match the pattern exactly
        if (i == 4) continue;

        // Inner loop for stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }

        // Move to next line
        printf("\n");
    }

    return 0;
}

