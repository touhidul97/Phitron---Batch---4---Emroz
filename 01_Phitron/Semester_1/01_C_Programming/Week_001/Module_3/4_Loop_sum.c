#include<stdio.h>
int main()
{   
    int i, n;
    long long int sum=0;
    scanf("%d",&n);
    for(i=1; i<=n; i=i+1)
    {
        sum=sum+i;
    }
    printf("%lld\n",sum);
    return 0;
}