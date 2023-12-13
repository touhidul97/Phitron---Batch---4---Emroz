#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // sum of primary diagonal;
    int sumPrimaryDiagonal = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==j)
            {
                sumPrimaryDiagonal = sumPrimaryDiagonal + a[i][j];
            }
            
        }
    }
    // sum of secondary diagonal;
    int sumSecondaryDiagonal = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i+j == n-1)
            {
                sumSecondaryDiagonal=sumSecondaryDiagonal + a[i][j];
            }
        }
    }
    int dif = sumPrimaryDiagonal - sumSecondaryDiagonal;
    dif = abs(dif);
    printf("%d", dif);
    return 0;
}