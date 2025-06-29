#include <stdio.h>

int main() {
    int arr[100], n;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    
    printf("Enter %d integer elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    
    printf("\nThe elements of the array in reverse order are:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}

