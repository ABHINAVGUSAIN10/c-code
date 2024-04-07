#include<stdio.h>
int main()
{
    int a[100][100],r,c,sum=0;
    int i,j;
    printf("Input number of rows: \n");
    scanf("%d",&r);
    printf("Input number of columns: \n");
    scanf("%d",&c);

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("element of row %d and column %d :  \n",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    printf("The given array is: ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            
            printf(" %d",a[i][j]);
        }
    printf("\n");
    }

    printf("The elements being summed of the lower triangular matrix are: ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i>j)
            {
                printf(" %d",a[i][j]);
            }
        }
    }
    printf("\n");
    printf("The Sum of the lower triangular Matrix Elements are: ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i>j)
            {
                sum+= a[i][j];
            }
        }
    }
    printf(" %d",sum);
    return 0;

}