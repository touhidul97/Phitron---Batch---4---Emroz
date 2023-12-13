// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    if(sum<0)
    {
        sum = sum * (-1);
        printf("%lld\n", sum);
    }
    else
    {
        printf("%lld\n", sum);
    }
    return 0;
}