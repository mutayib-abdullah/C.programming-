#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtractAB(int a, int b) {
    return a - b;
}

int subtractBA(int a, int b) {
    return b - a;
}

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("\nAddition (a + b) = %d\n", add(a, b));
    printf("Subtraction (a - b) = %d\n", subtractAB(a, b));
    printf("Subtraction (b - a) = %d\n", subtractBA(a, b));

    return 0;
}


