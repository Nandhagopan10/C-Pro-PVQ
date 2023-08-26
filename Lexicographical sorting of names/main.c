Write a C program to sort names in an array in lexicographical order. [KTU,
DECEMBER 2018]

#include <stdio.h>
#include <string.h>

void main()
{
    int i, n, j;
    char str[10][20], temp[20];
    printf("Enter the number of names:\n");
    scanf("%d", &n);

    // Consume the newline character left in the input buffer
    getchar();

    printf("Enter the names:\n");
    for (i = 0; i < n; i++)
    {
        gets(str[i]);
    }
    // Sort the names in lexicographical order
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    printf("The names in lexicographical order are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }
}

