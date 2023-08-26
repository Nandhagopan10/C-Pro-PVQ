Write a C program to subtract two matrices. [KTU, MAY 2019]

#include <stdio.h>
void main() {
    int m, n, p, q, A[5][5], B[5][5], sub[5][5], i, j;

    printf("Enter the order of first matrix: \n");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the order of second matrix: \n");
    scanf("%d %d", &p, &q);

    if (m != p || n != q) {
        printf("Matrix dimensions are not compatible for subtraction.\n");

    }

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            sub[i][j] = A[i][j] - B[i][j];
        }
    }

    printf("The new matrix after subtraction is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", sub[i][j]);
        }
        printf("\n");
    }
}


