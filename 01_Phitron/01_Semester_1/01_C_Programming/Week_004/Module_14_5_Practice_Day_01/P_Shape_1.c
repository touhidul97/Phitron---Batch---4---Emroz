// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/P
#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d", &n);
    k = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = k; j > i; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}