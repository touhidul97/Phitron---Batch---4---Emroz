#include <stdio.h>
int main()
{
    int n, s, k;
    scanf("%d", &n);
    int line = ((n + 1) / 2) + 5;
    k = 1;
    s = line - 1;
    for (int i = 1; i <= line; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        k = k + 2;
        s--;
        printf("\n");
    }
    int space = ((line * 2) - 1 - n) / 2;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}