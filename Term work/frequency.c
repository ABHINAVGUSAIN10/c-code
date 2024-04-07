#include<stdio.h>
#include<string.h>
void frequency (char[]);
int main ()
{
  char str[100];
  printf ("Input a string : ");
  fgets (str, 100, stdin);

  frequency (str);
  return 0;
}

void frequency (char str[])
{
  int i, j, count = 0, maxcount = 0;
  char maxcharacter;

  for (i = 0; i < strlen (str); i++)
	{
	  count = 0;
	  for (j = 0; j < strlen (str); j++)
		{
		  if (str[i] == str[j])
			{
			  count++;
			}
		}
	  if (count > maxcount)
		{
		  maxcount = count;
		  maxcharacter = str[i];
		}
	}
  printf (" Highest frequency character appears in a string is %c",
		  maxcharacter);

}