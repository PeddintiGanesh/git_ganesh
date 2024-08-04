// 2.A) MULTIPLICATION OF 2 SQUARE MATRIX
#include <stdio.h>
void main()
{
    int a[10][10], b[10][10], mul[10][10], r, c, i, j, k;
    printf("enter the number of rows");
    scanf("%d", &r);
    printf("enter the number of columns");
    scanf("%d", &c);
    printf("enter the first matrtix elements");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the second matrix elements");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("multiply the matrix =\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < c; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d \t", mul[i][j]);
        }
        printf("\n");
    }
}