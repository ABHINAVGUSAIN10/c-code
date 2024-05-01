#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, i, max, min;

    
    arr = (int *)malloc(10 * sizeof(int));

    
    if (arr == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

 
    printf("Enter 10 integers: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];

    
    for (i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

   
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    
    free(arr);

    return 0;
}