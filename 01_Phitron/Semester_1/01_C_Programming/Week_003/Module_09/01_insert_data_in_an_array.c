#include<stdio.h>
int main()
{
    int n; // ekta nth value niyechi for nth array;
    scanf("%d",&n);
    int ar[n + 1]; // since we're going to make shift an array so we are taking an array more than n;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int pos, val; // shifting position and value declare;
    scanf("%d%d", &pos, &val);
    for (int i = n; i >= pos + 1; i--)
    {
        ar[i] = ar[i - 1]; // formula from scratch;
    }
    ar[pos] = val; // assigning value to the pos ;
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", ar[i]); // print the array ;
    }
    return 0;
} 
