#include <stdio.h>

int main() {
    int n;
    printf("Enter how many times to repeat the sequence: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {          
        for (int j = 1; j <= 5; j++) {      
            printf("%d ", j);
        }
    }

    return 0;
}

