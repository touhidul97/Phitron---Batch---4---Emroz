#include <stdio.h>
int main()
{
    int i, n, sum;
    printf("Please enter the value of n:\n");
    scanf("%d", &n);
    sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("Sum is :%d\n", sum);
    return 0;
}