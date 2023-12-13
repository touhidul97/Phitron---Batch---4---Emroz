#include<stdio.h>
long long int array_sum(int a[],int i,int size, long long int sum )
{
    if (i==size)
    {
        return sum;
    }
    sum = sum + a[i];
    array_sum(a,i + 1, size, sum);
}
int main()
{
    int n;
    long long int sum = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int size = sizeof(a) / 4;
    long long int ans = array_sum(a, 0, size, sum);
    printf("%lld", ans);
    return 0;
}