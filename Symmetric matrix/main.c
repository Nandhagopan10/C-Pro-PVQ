Write a C program to accept a 2-D integer matrix and check whether it is symmetric
or not. [KTU, APRIL 2018]

#include<stdio.h>
void main()
{
  int m, n, A[20][20], transpose[20][20], i, j,count=0;
  printf("Enter the order of matrix:\n");
  scanf("%d %d", &m, &n);
  printf("Enter the elements:\n");
  for(i = 0; i < m; i++)
  {
    for(j = 0; j < n; j++)
    {
      scanf("%d", &A[i][j]);
    }
  }

  for(i = 0; i < n; i++) // Transpose has 'n' rows and 'm' columns
  {
    for(j = 0; j < m; j++)
    {
      transpose[i][j] = A[j][i];
    }
  }
   for(i = 0; i < n; i++)
  {
    for(j = 0; j < m; j++)
    {
      if(A[i][j]!=transpose[i][j])
      {
          count++;
          break;
      }
    }
  }
  if(count==0)
    printf("The given matrix is symmetric");
  else
    printf("The given matrix is not symmetric");
}

