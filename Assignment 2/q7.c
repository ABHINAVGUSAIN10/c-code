#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M, i, j, present;
    
  
    printf("Enter the number of elements in cluster A: ");
    scanf("%d", &N);
    
    
    int *A = (int*)malloc(N * sizeof(int));
    if (A == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
  
    printf("Enter %d elements for cluster A:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    
   
    printf("Enter the number of elements in cluster B: ");
    scanf("%d", &M);
    
   
    int *B = (int*)malloc(M * sizeof(int));
    if (B == NULL) {
        printf("Memory allocation failed\n");
        free(A);
        return 1;
    }
    
   
    printf("Enter %d elements for cluster B:\n", M);
    for (i = 0; i < M; i++) {
        scanf("%d", &B[i]);
    }
    
    
    printf("Elements present in cluster A but not in cluster B:\n");
    for (i = 0; i < N; i++) {
        present = 0;
        for (j = 0; j < M; j++) {
            if (A[i] == B[j]) {
                present = 1;
                break;
            }
        }
        if (!present) {
            printf("%d ", A[i]);
        }
    }
    printf("\n");
    
    
    free(A);
    free(B);
    
    return 0;
}
