Write a C program to replace a character in a string with another character. [KTU,
MAY 2019]

#include <stdio.h>
void main()
{
    int i;
    char a, b, str[30];
    printf("Enter a string:\n");
    gets(str);

    printf("Enter the character to be replaced:\n");
    scanf(" %c", &a); // Adding a space before %c to consume the newline character

    printf("Enter the character to replace the existing one:\n");
    scanf(" %c", &b); // Adding a space before %c to consume the newline character

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == a)
        {
            str[i] = b;
        }
    }
    printf("The new string is:\n");
    puts(str);
}
