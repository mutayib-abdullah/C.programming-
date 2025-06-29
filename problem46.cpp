#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};  // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate number of elements
    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("Sum of all elements: %d\n", sum);

    return 0;
}

