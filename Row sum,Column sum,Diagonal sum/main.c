Write a C program to accept a two dimensional matrix and display the row sum,
column sum and diagonal sum of elements. [KTU, MAY 2019]

#include <stdio.h>
void main()
{
    int m, n, A[5][5], i, j, rsum = 0, csum = 0, dsum = 0;
    printf("Enter the order of matrix: \n");
    scanf("%d %d", &m, &n);
    printf("Enter the elements:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        rsum = 0; // Initialize row sum for each row
        for (j = 0; j < n; j++)
        {
            rsum += A[i][j];
            csum += A[j][i];
            if (i == j)
            {
                dsum += A[i][j];
            }
        }
        printf("Row %d sum = %d\n", i + 1, rsum);
    }
    for (i = 0; i < m; i++)
    {
      for (j = 0; j < n; j++)
      {
        printf("Column %d sum = %d\n", j + 1, csum);
      }

    }
    printf("Diagonal sum = %d\n", dsum);
}

