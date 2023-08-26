Write a C program to read two sorted arrays and merge them into a single array.
[KTU, MAY 2019]

#include <stdio.h>
void main()
{
    int i,j,A[10],a,b,B[10];
    printf("Enter the size of 1st array:\n");
    scanf("%d",&a);
    printf("Enter the elements in ascending order:\n");
    for(i=0;i<a;i++)
        scanf("%d",&A[i]);
    printf("Enter the size of 2nd array:\n");
    scanf("%d",&b);
    printf("Enter the elements in ascending order:\n");
    for(i=0;i<b;i++)
        scanf("%d",&B[i]);
    for(i=0;A[i]!='\0';i++);
    for(j=0;B[j]!='\0';i++,j++)
    {
        A[i]=B[j];
    }
    A[i]='\0';
    printf("Output array is:\n");
    for(i=0;i<a+b;i++)
        printf("%d  ",A[i]);
}
