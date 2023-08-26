Write a C program to read a sentence through keyboard and to display the count of
white spaces in the given sentence. [KTU, MODEL 2020]


#include <stdio.h>
void main()
{
    char str[30];
    int i,count=0;
    printf("Enter a sentence:\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
            count++;
    }
    printf("The number of spaces is %d",count);
}
