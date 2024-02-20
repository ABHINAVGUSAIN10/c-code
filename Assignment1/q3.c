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

    int smallest = arr[0]; 
    int secondSmallest = arr[0]; 

    
    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest; 
            smallest = arr[i]; 
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i]; 
        }
    }

    printf("The second smallest element in the array is: %d\n", secondSmallest);

    return 0;
}
