#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s, k;
    s = n - 1;
    k = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i%2==0)
        {
            for (int j = 1; j <= s; j++)
            {
                printf(" ");
            }
            for (int j = 1; j <= k; j++)
            {
                printf("*");
            }
            s--;
            k += 2;
            printf("\n");
        }
        
    }
    
    return 0;
}

// for (int j = 1; j <= s; j++)
// {
//     printf(" ");
// }
// for (int j = 1; j <= k; j++)
// {
//     printf("*");
// }
// s--;
// k += 2;
// printf("\n");