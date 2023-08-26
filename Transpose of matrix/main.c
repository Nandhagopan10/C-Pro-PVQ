Write a program to read a matrix of size mXn and display its transpose?

#include<stdio.h>
void main()
{
  int m,n,A[20][20],i,j;
  printf("Enter the order of matrix:\n");
  scanf("%d %d",&m,&n);
  printf("Enter the element:\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&A[i][j]);
    }
  }
  printf("Transpose of Matrix:\n");
  for(j=0;j<n;j++)
  {
    for(i=0;i<m;i++)
    {
      printf("%d\t",A[i][j]);
    }
    printf("\n");
  }
}

