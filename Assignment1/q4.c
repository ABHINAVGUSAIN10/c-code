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

    
    int freq[size];
    for (int i = 0; i < size; i++) {
        freq[i] = -1; 
    }

    for (int i = 0; i < size; i++) {
        int count = 1; 
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++; 
                freq[j] = 0; 
            }
        }
        if (freq[i] != 0) {
            freq[i] = count; 
        }
    }

    
    printf("Frequency of each element:\n");
    for (int i = 0; i < size; i++) {
        if (freq[i] != 0) {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}
