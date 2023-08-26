Write a C program to check whether a character is present in a string. [KTU, APRIL
2018]


#include <stdio.h>
void main()
{
    char str[20], key;
    int i, count = 0;
    printf("Enter a string:\n");
    gets(str);
    printf("Enter the character:\n");
    scanf(" %c", &key);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == key)
        {
            count++;
            printf("%c is present at position %d\n", key, i + 1);
        }
    }

    if (count == 0)
    {
        printf("%c is not present\n", key);
    }
}
