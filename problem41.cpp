#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Reads full line including spaces

    // Display string
    printf("\nYou entered: %s", str);

    return 0;
}

