#include <stdio.h>

int main() {
    int num, digit;

    printf("Enter a natural number: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a natural number (positive integer).\n");
        return 1;
    }

    printf("Digits in reverse order: ");
    while (num > 0) {
        digit = num % 10;       // Extract last digit
        printf("%d", digit);    // Print the digit
        num = num / 10;         // Remove last digit
    }

    printf("\n");

    return 0;
}

