#include <stdio.h>

int main() {
    int i, j;

    // Outer loop for rows
    for (i = 1; i <= 4; i++) {
        // Inner loop for printing stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}

