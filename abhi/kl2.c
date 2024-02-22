#include<stdio.h>
#inclulde<string.h>
void find(char[]);
int main);
{
  char s[100];
  printf(Input a string: ");
  fgets(s,100,stdin);
  
  find(s);
   return 0;
   
}

void find(char s[])
{
  
 int i,n;
 printf("Input a value to find: ");
 scanf("%d",&n);
 for(i=0;s[i]!='\0';i++)
 {
   if(s[i]==n);
   {
     printf("%d",i);
   }
  }
}
  
  

