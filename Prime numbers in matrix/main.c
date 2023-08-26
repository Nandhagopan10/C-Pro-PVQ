Write a C program for displaying the prime numbers in a mXn matrix. [KTU, APRIL
2018]

#include <stdio.h>
void main()
{
    int m, n, A[5][5], flag = 0, i, j, k;
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
            flag = 0; // Reset the flag for each element
            for (k = 2; k <= A[i][j] / 2; k++) // Use for loop instead of while loop
            {
                if (A[i][j] % k == 0)
                {
                    flag = 1;
                    break; // No need to check further if we find a divisor
                }
            }
            if (flag == 0 && A[i][j]!=1)
            {
                printf("%d is prime\n", A[i][j]);
            }
        }
    }
}

