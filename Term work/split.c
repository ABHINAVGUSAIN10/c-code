#include<stdio.h>
#include<string.h>
int main ()
{
  int i;
  char s[100];

  printf ("Input string: ");
  fgets (s, 100, stdin);

  printf("Strings or words after split by space are:  ");

  for (i = 0; s[i] != '\0'; i++)
	{

	  if (s[i] == ' ')
		{

		  printf ("\n");
		}
	  else
		{

		  printf ("%c", s[i]);
		}
	}
  return 0;
}