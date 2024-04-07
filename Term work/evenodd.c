#include<stdio.h>
int main()
{
    int a[100],even[100],odd[100];
    int i,n,ce=0,co=0;
    printf("Input limit of array:  \n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf ("Input element %d: \n", i + 1);
	    scanf ("%d", &a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even[ce++]=a[i];
        }
    else 
    {
       odd[co++]=a[i]; 
    }
    }

    printf("The Even Elements are : ");
    for(i=0;i<ce;i++)
    {
        printf(" %d",even[i]);
    }
    printf("\n");
    printf("The Odd Elements are : ");
    for(i=0;i<co;i++)
    {
        printf(" %d",odd[i]);
    }
return 0;
}