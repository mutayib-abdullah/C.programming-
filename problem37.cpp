#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Declare and initialize an integer array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array 

    printf("The elements of the array are:\n");

    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]); // print each element
    }

    return 0;
}

