#include<stdio.h>
int main ()
{
  int a[100][100], i, j;
  int r, c, max;

  printf ("Input number of rows: \n");
  scanf ("%d", &r);
  printf ("Input number of columns: \n");
  scanf ("%d", &c);

  for (i = 0; i < r; i++)
	{
	  for (j = 0; j < c; j++)
		{
		  printf ("element of row %d and column %d :  \n", i + 1, j + 1);
		  scanf ("%d", &a[i][j]);
		}
	}

  printf ("The given array is: ");
  for (i = 0; i < r; i++)
	{
	  for (j = 0; j < c; j++)
		{

		  printf (" %d", a[i][j]);
		}
	  printf ("\n");
	}

  printf ("The maximum element of each row is : ");
  for (i = 0; i < r; i++)
	{
	  max = a[i][0];
	  for (j = 0; j < c; j++)
		{
		  if (a[i][j] > max)
			{
			  max = a[i][j];
			}
		}
	  printf (" %d", max);
	}
  return 0;

}