#include<stdio.h>
void sort(int*,int);
int main()
{
 int n,i,j,a[100],*p;
 p=a;
 
 printf("Input limit in array : ");
 scanf("%d",&n);
 printf("INput elements: ");
 for(i=0;i<n;i++)
 {
   scanf("%d",p+i);
 }
 
 sort(a,n);
 
 printf("The sorted array in descending array  is: ");
for(i=0;i<n;i++)
{
  printf(" %d",*(p+i));
}
return 0;
}

void sort(int *p,int n)
{
 int t,i,j;
 for(i=0;i<n;i++)
{
  for(j=0;j<(n-i-1);j++)
  {
    if(*(p+j)<*(p+j+1))
    {
     t = *(p+j);
     *(p+j) = *(p+j+1);
     *(p+j+1) = t;
    }
  }
}
}
