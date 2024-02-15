#include <stdio.h>

int main ()
{
  int r, c;
  printf ("Enter the number of rows: ");
  scanf ("%d", &r);
  printf ("Enter the number of columns: ");
  scanf ("%d", &c);

  int arr[r][c];
  int e[r][c],o[r][c];

  printf ("Enter the elements of the array:\n");
  for (int i = 0; i < r; i++)
	{
	  for (int j = 0; j < c; j++)
		{
		  scanf ("%d", &arr[i][j]);
		}
	}
    //even

  int evenCount = 0;
  for (int i = 0; i < r; i++)
	{
	  for (int j = 0; j < c; j++)
		{
		  if (arr[i][j] % 2 == 0)
			{
			  e[i][j] = arr[i][j];
			  evenCount++;
			}
		}
	}

  printf ("Even numbers in the array:\n");
  for (int i = 0; i < r; i++)
	{
	  for (int j = 0; j < c; j++)
		{
		  if (e[i][j] != 0)
			{
			  printf ("%d ", e[i][j]);
			}
		}
	  printf ("\n");
	}
//odd
int oddcount= 0;
for (int i = 0; i < r; i++)
	{
	  for (int j = 0; j < c; j++)
		{
            if(arr[i][j]%2!=0)
            {
                o[i][j]=arr[i][j];
                oddcount++;
            }
        }
    }
printf("\n Odd no.s in the array are:\n");
for (int i = 0; i < r; i++)
	{
	  for (int j = 0; j < c; j++)
		{
            if(o[i][j] !=0)
            {
                printf("%d ",o[i][j]);
            }
        }
     printf("\n");
    }
 return 0;
}
  
    
    

        
    
      

                

