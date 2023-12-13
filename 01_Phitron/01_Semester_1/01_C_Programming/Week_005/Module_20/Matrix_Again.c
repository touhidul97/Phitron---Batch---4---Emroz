#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int mat[n][m];
    for (int i = 0; i < n; i++) // Change to 0-based indexing
    {
        for (int j = 0; j < m; j++) // Change to 0-based indexing
        {
            scanf("%d", &mat[i][j]);
        }
    }
    for (int j = 0; j < m; j++) // Change to 0-based indexing
    {
        printf("%d ", mat[n - 1][j]); // Use n-1 instead of n
    }
    printf("\n");
    for (int i = 0; i < n; i++) // Change to 0-based indexing
    {
        printf("%d ", mat[i][m - 1]); // Use m-1 instead of m
    }

    return 0;
}
