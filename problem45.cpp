#include <stdio.h>
#include <string.h>  

int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";
    char copy[100];
    char combined[200];


    printf("Length of str1 (\"%s\") = %lu\n", str1, strlen(str1));

    strcpy(copy, str1);
    printf("Copied string (copy of str1): %s\n", copy);

    strcpy(combined, str1);
    strcat(combined, " ");
    strcat(combined, str2);
    printf("Concatenated string (str1 + str2): %s\n", combined);

    
    int result = strcmp(str1, str2);
    if (result == 0)
        printf("str1 and str2 are equal.\n");
    else if (result < 0)
        printf("str1 comes before str2.\n");
    else
        printf("str1 comes after str2.\n");


    return 0;
}

