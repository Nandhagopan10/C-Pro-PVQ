Write a C program to find the second largest element of an unsorted array. [KTU,
DECEMBER 2018], [KTU, DECEMBER 2019]

#include <stdio.h>

void main()
{
    int n, A[5], temp, i, j;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    // Bubble sort to find the second largest number
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
    printf("The second largest number is: %d\n", A[n - 2]); // The second largest number is the second to last element after sorting
}

