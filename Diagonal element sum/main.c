//Write a program to read a matrix of size mXn and display the sum of principal
//diagonal elements.
#include<stdio.h>
void main()
{
  int m,n,A[20][20],i,j,sum;
  printf("Enter the order of matrix:\n");
  scanf("%d %d",&m,&n);
  printf("Enter the element:");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&A[i][j]);
    }
  }
  for(i=0;i<m;i++)
  {
     sum = sum + A[i][i];
  }
  printf("\nSum=%d",sum);
}

