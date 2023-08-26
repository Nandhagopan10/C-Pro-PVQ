Write a C program to find the largest and smallest numbers and their locations in an
array of n numbers. [KTU, JULY 2017]

#include <stdio.h>
void main()
{
    int i, n, a[20], temp, largest, smallest;
    printf("Enter the no. of integers:\n");
    scanf("%d", &n);
    printf("Enter the integers:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    largest = smallest = a[0]; // Initialize with the first element

    for (i = 1; i < n; i++) // Start from the second element
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }

        if (a[i] < smallest)
        {
            smallest = a[i];
        }
    }

    printf("Smallest: %d\n", smallest);
    printf("Largest: %d\n", largest);
}

