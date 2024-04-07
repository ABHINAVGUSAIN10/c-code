#include<stdio.h>
void unique (int[], int);
int main ()
{
  int a[100], n, i;
  printf ("Input limit of an array: \n");
  scanf ("%d", &n);

  for (i = 0; i < n; i++)
	{
	  printf ("Input element %d: \n", i + 1);
	  scanf ("%d", &a[i]);
	}
  printf ("Unique elements of array are : ");
  unique (a, n);
  return 0;
}

void unique (int a[], int n)
{
  int i, j;
  for (i = 0; i < n; i++)
	{
	  for (j = 0; j < n; j++)
		{
		  if (a[i] == a[j] && i != j)
			{
			  break;
			}
		}
	  if (j == n)
		{
		  printf (" %d", a[i]);
		}
	}
}

