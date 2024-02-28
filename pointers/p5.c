#include<stdio.h>
void reverse (int*, int);
int main()
{
 int n,i,a[100];
 printf("Input limit: ");
 scanf("%d",&n);
 printf("Input elements: ");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 
reverse(a,n);
printf("Reversed array is: ");
for(i=0;i<n;i++)
{
 printf(" %d",a[i]);
}
printf("\n");
return 0;
}
void reverse(int *a, int n)
{
  int *start= a;
  int *end= a+n-1;
  while(start<end)
  {
    int temp=*start;
        *start=*end;
        *end=temp;
    start++;
    end--;
  }
}
