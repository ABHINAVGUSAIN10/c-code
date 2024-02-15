#include <stdio.h>



int main()
{
    int i, j, sum = 0, n, c;
    int a[20][20];
    printf("Input no. of rows: ");
    scanf("%d", &n);

    printf("Input no. of columns: ");
    scanf("%d", &c);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter element [%d,%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Row sum: ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum += a[i][j];
        }
        printf("%d ", sum);
        sum = 0;
    }

    return 0;
}

