// 2.B) TRANSPOSE MATRIX

#include <stdio.h>
void main()
{
    int i, j, m, n;
    printf("enter the no.of rows");
    scanf("%d", &m);
    printf("enter the no.of columns");
    scanf("%d", &n);
    int matrix[50][50];
    printf("enter the elements of the matrix :\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    printf("the transpose matrix :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
}
