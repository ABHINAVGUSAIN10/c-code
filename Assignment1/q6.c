#include <stdio.h>

int main() {
    int rows, cols;
    
   
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    
    int matrix[rows][cols];

   
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < rows; i++) {
        sum += matrix[i][cols - i - 1]; 
    }

   
    printf("The sum of the right diagonals of the matrix is: %d\n", sum);

    return 0;
}
