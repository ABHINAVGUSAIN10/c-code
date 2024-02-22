#include<stdio.h>
void swap(int* ,int*);
int main()
{
 int a,b,*p1,*p2;
 printf("INput a and b : ");
 scanf("%d %d",&a,&b);
 printf("Before swapping: a= %d  b=%d",a,b);
 p1=&a;
 p2=&b;
 
 swap(p1,p2);
 
 printf("After swapping: a=%d b=%d",a,b);
 
return 0;
}
void swap (int *p1, int *p2)
{
 int temp;
 temp=*p1;
 *p1=*p2;
 *p2=temp;
 
}
 
