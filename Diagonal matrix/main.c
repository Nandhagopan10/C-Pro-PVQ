Write a C program to check whether a given matrix is a diagonal matrix. [KTU,
MODEL 2020]


#include <stdio.h>
void main()
{
    int m,n,A[5][5],flag=0,i,j;
    printf("Enter the order of matrix: \n");
    scanf("%d %d",&m,&n);
    printf("Enter the elements:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
          if(i!=j && A[i][j]!=0)
          {
              flag=1;
              break;
          }
       }
    }
    if(flag==1)
        printf("The matix is not a diagonal matrix\n");
    else
         printf("The matix is a diagonal matrix\n");
}
