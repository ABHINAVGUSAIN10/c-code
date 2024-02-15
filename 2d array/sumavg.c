#include<stdio.h>
int main()
{
    int i,j,sum=0,avg,TE;
    int r,c,a[20][20];
    printf("Input no. of rows and columns: ");
    scanf("%d %d",&r,&c);
    TE=r*c;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Input elements of row %d and column %d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    //sum
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum+=a[i][j];
        }
    }
    printf("Sum of  all elements is:%d \n",sum);

    //avg
    avg= sum/TE;
    printf("Avg of all elements is: %d",avg);
    return 0;

}