#include <stdio.h>

int main() {
    int n;

    printf("Enter a natural number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive natural number.\n");
    } else {
        printf("Factors of %d are: ", n);
        
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
          return 0;
      }
