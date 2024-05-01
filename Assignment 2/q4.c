#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, k, *arr, i;

    printf("Enter the number of integers (N): ");
    scanf("%d", &N);

  
    arr = (int *)malloc(N * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    printf("Enter %d integers:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of elements to reduce (k): ");
    scanf("%d", &k);

    
    arr = (int *)realloc(arr, (N - k) * sizeof(int));

    if (arr == NULL && (N - k) > 0) {
        printf("Memory reallocation failed!");
        return 1;
    }

    printf("The remaining %d integers are:\n", N - k);
    for (i = 0; i < N - k; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

   
    free(arr);

    return 0;
}