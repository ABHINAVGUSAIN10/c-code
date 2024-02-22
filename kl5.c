#include<stdio.h>
void rev(int *,int);
int main()
{
  int a[100],i,n,*p;
  printf("Input limit of array less than 100: ");
  scanf("%d",&n);
  
  p=a;
  for(i=0;i<n;i++)
  {
   printf("INput element: ");
   scanf("%d",p+i);
  }
  rev(p,n)
  for(i=0;i<n;i++)
  {
   printf("Reversed array: ",*p+i);
  }
  printf("\n");
  
 }
void rev(int *p,int n)
{
 int temp;
 for(i=0;i<n/2;i++);
 {
   temp=*(p+1);
   *(p+i)=*(p(n-(i+1)));
   *(p(n-(i+1)))=temp;
 }
}
 
 

