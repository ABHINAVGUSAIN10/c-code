#include<stdio.h>
#include<string.h>
void string(char[] , char[] );
int main()
{
 char s1[100],s2[100];
 
 printf("Input string 1: ");
 fgets(s1,100,stdin);
  
 printf("Input string 2: ");
 fgets(s2,100,stdin);
  string(s1,s2);
 
 
  return 0;
 }
 void string(char s1[],char s2[])
 {
  int i,l1,l2;
   l1=strlen(s1)-1;
   
   
  for(i=1;s2[i]!='\0';i++)
   {
     s1[l1+i]=s2[i-1];
   }
     
   s1[l1+i]='\0';
   printf("The merged string is: %s",s1);
   
  }
 
