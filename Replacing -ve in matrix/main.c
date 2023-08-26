Write a program to read a matrix, replace all negative elements of the matrix by zero
and print the resulting array. [KTU, APRIL 2018]

#include <stdio.h>

void main()
{
    int m, n, A[5][5], x = 0, i, j;
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
        for (j = 0; j < n; j++)
        {
            if (A[i][j] < x)
            {
                A[i][j] = x; // Assign the new value
            }
        }
    }
    printf("The new matrix is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n"); // Print a newline after each row
    }
}
