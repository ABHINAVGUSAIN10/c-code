#include<stdio.h>
#include<string.h>
int main ()
{
    char str[100];
    int i,j;
    printf("Input a string: ");
    fgets(str,100,stdin);

    for(i=0;str[i]!='\0';i++)
    {
        if(!((str[i]>='a'&& str[i]<= 'z')||(str[i]>= 'A'&& str[i]<='Z')))
        {
            for(j=i;str[j]!='\0';j++)
            {
                str[j]=str[j+1];
            }
            i--;
        }
    }
    puts(str);
    return 0;
}