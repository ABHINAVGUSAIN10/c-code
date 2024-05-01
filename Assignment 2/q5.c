#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, i, num, newSize = 0;
    
  
    printf("Enter the number of integers: ");
    scanf("%d", &N);
    
   
    int *arr = (int*)malloc(N * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    
    printf("Enter %d integers:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    
    printf("Enter the integer to delete: ");
    scanf("%d", &num);
    
  
    for (i = 0; i < N; i++) {
        if (arr[i] != num) {
            arr[newSize++] = arr[i];
        }
    }
    
    
    arr = realloc(arr, newSize * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }
    
    
    printf("Modified array:\n");
    for (i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    
    free(arr);
    
    return 0;
}
