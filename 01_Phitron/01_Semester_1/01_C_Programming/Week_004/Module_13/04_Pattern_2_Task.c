#include <stdio.h>
int main()
{
    int n, k, s;
    scanf("%d", &n);
    k = 2 * n - 1;
    s = 0;
    for (int i = 1; i <= n; i++)
    {
        // Adding loop for Space first;
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        // adding loop for star;
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        s++;          // increment space;
        k = k - 2;    // decrement star;
        printf("\n"); // adding new line after the whole task;
    }
    return 0;
}
