//Kurskals Algorithm

#include <stdio.h>
#include <stdlib.h>

#define maxx 25
int i, j, k, a, b, u, v, n, ne = 1;
int min, mincost = 0, adj[maxx][maxx], parent[maxx];

int find(int i) 
{
    while (parent[i])
        i = parent[i];
    return i;
}

int unii(int i, int j)
{
    if (i != j) {
        parent[j] = i;
        return 1;
    }
    return 0;
}

int main()
{
    printf("\nEnter the number of vertices: ");
    scanf("%d", &n);
    
    printf("\nEnter the cost adjacency matrix:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &adj[i][j]);
            if (adj[i][j] == 0) 
            {
                adj[i][j] = 999; 
            }
        }
    }

    printf("The edges of the Minimum Cost Spanning Tree are:\n");
    
    while (ne < n)
     {
        min = 999; 
        for (i = 1; i <= n; i++) 
        {
            for (j = 1; j <= n; j++)
             {
                if (adj[i][j] < min)
                 {
                    min = adj[i][j];
                    a = u = i;
                    b = v = j;
                }
            }
        }
        u = find(u);
        v = find(v);
        if (unii(u, v))
        {
            printf("%d edge (%d, %d) = %d\n", ne++, a, b, min);
            mincost += min;
        }
        
        adj[a][b] = adj[b][a] = 999;
    }
    printf("\nMinimum Cost = %d\n", mincost);
    return 0;
}
