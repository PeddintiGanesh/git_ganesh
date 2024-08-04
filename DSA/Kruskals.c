// 12.B)KRUSKALS

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int parent[10];
int find(int i);
int uni(int i, int j);
void main()
{
    int ne = 1, a, b, u, v, n, cost[20][20], i, j, min, mincost = 0;
    printf("\nEnter the number of vertices:");
    scanf("%d", &n);
    printf("\nENTER the weights of edges:");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &cost[i][j]);
            if (cost[i][j] == 0)
            {
                cost[i][j] = 999;
            }
        }
    }
    while (ne < n)
    {
        for (i = 1, min = 999; i <= n; i++)
        {
            for (j = 1; j < n; j++)
            {
                if (cost[i][j] < min)
                {
                    min = cost[i][j];
                    a = u = i;
                    b = v = j;
                }
            }
        }

        u = find(u);
        v = find(v);
        if (uni(u, v))
        {
            printf("\nEdge %d:(%d  %d) =%d\n", ne++, a, b, min);
            mincost += min;
        }
        cost[a][b] = cost[b][a] = 999;
    }
    printf("\n%d\t", mincost);
    getch();
}
int find(int i)
{
    while (parent[i])

        i = parent[i];

    return i;
}
int uni(int i, int j)
{
    if (i != j)
    {
        parent[j] = i;
        return 1;
    }
    return 0;
}
