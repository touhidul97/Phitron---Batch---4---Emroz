#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    // Check if the matrix is a square matrix
    if (n != m)
    {
        printf("NO\n");
        return 0; // If it's not a square matrix, we can return immediately
    }

    int mat[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((i == j || i + j == n - 1) && mat[i][j] != 1)
            {
                flag = 0;
                break;
            }
            else if (i != j && i + j != n - 1 && mat[i][j] != 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }

    if (flag == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
