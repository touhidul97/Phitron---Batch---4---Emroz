// https://www.hackerrank.com/contests/assignment-03-a-introduction-to-c-programming-a-batch-04/challenges/pattern-255-1
#include<stdio.h>
int main()
{
    int n,j;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (j = 1; j<=n-i; j++)
        {
            printf(" ");
        }

        if(i%2!=0)
        {
            
            for (j = 1; j <= 2*i-1; j++)
            {
                printf("#");
            }
            
        }
        else
        {
            for (j = 1; j <= 2 * i - 1; j++)
            {
                printf("-");
            }
        }
        printf("\n");
    }
    for (int i =n-1; i>=1; i--)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        if (i % 2 != 0)
        {

            for (j = 1; j <= 2 * i - 1; j++)
            {
                printf("#");
            }
        }
        else
        {
            for (j = 1; j <= 2 * i - 1; j++)
            {
                printf("-");
            }
        }
        printf("\n");
    }

    return 0;
}
/*
#include <stdio.h>
int main()
{

    int n, i, j, x, y, z;

    scanf("%d", &n);

    for (i = 1; i <= (n + 1) / 2; i++)
    {

        if (i % 2 == 1)
        {
            for (j = 2; j <= (n + 1) / 2 - i; j++)
            {
                printf(" ");
            }
            for (j = 1; j <= 2 * i - 1; j++)
            {
                printf("#");
            }
            printf("\n");
        }
        else
        {
            for (j = 2; j <= (n + 1) / 2 - i; j++)
            {
                printf(" ");
            }
            for (j = 1; j <= 2 * i - 1; j++)
            {
                printf("-");
            }
            printf("\n");
        }
    }

    for (i = (n + 1) / 2 - 1; i > 0; i--)
    {

        if (i % 2 == 1)
        {
            for (j = 2; j <= (n + 1) / 2 - i; j++)
            {
                printf(" ");
            }
            for (j = 1; j <= 2 * i - 1; j++)
            {
                printf("#");
            }
            printf("\n");
        }
        else
        {
            for (j = 2; j <= (n + 1) / 2 - i; j++)
            {
                printf(" ");
            }
            for (j = 1; j <= 2 * i - 1; j++)
            {
                printf("-");
            }
            printf("\n");
        }
    }
}
*/