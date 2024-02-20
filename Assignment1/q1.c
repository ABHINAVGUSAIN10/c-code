#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unique elements in the array are: ");
    for (int i = 0; i < size; i++) {
        int j;
        
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                break;
            }
        }
        
        if (j == i) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
