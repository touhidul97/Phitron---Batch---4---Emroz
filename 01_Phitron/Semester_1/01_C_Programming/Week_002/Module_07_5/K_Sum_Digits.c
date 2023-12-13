// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K
#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int a[n];
    for (long long int i = 0; i < n; i++)
    {
        scanf("%lld",&a[i]);
    }
    long long int sum = 0;
    for (long long int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    printf("%lld", sum);

    return 0;
}