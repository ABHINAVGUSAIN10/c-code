#include <stdio.h>
#include <stdlib.h>

int main() {
    char *arr;
    int i, j, n = 10;

    
    arr = (char *)malloc(n * sizeof(char));

   
    if (arr == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    
    printf("Enter 10 characters: ");
    for (i = 0; i < n; i++) {
        scanf(" %c", &arr[i]);
    }

   
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

   
    printf("Sorted characters: ");
    for (i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");

    
    free(arr);

    return 0;
}