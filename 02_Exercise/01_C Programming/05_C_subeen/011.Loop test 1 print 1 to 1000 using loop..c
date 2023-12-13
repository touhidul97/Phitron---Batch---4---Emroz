#include<stdio.h>
int main()
{
    int n=1;
    for(n=1;n<=1000000000000;n=n+10000)
    {
        printf("%d\n",n);
    }
    return 0;
}
