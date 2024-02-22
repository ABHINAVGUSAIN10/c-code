#include<stdio.h>
void swap(int ,int);
int main()
{
 int a,b;
 printf("INput a and b : ");
 scanf("%d %d",&a,&b);
 printf("Before swapping: a= %d  b=%d",a,b);
 
 swap(a,b);
 /*
 printf("After swapping: a=%d b=%d",a,b);
 */
return 0;
}
void swap (int n1, int n2)
{
 int temp;
 temp=n1;
 n1=n2;
 n2=temp;
 printf("After swapping: a=%d b=%d",n1,n2);
}
 
 
