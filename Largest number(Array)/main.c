Write a program to find largest element in an array of size n?

#include<stdio.h>
void main()
{
  int n,A[20],i,large;
  printf("Enter the size of Array:\n");
  scanf("%d",&n);
  printf("Enter the numbers:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&A[i]);
  }
  large=A[0];
  for(i=1;i<n;i++)
  {
    if(large < A[i])
    large = A[i];
  }
  printf("Largest =%d\n",large);
  }
