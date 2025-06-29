#include <stdio.h>

int main() {
    int arr[100], n;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);// user inputs how many integers they want to store 

    printf("Enter %d integer elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nThe elements of the array are:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);// display each element 
    }

    return 0;
}

