#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M, i;
    
    
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
    
  
    printf("Enter the new size of the array: ");
    scanf("%d", &M);
    
  
    arr = (int*)realloc(arr, M * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }
    
    if (M > N) {
        printf("Enter %d more integers to fill the array:\n", M - N);
        for (i = N; i < M; i++) {
            scanf("%d", &arr[i]);
        }
    }
    
    // Print the array
    printf("Array elements:\n");
    for (i = 0; i < M; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    
    free(arr);
    
    return 0;
}
