/* https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G */

#include<stdio.h>
int main()
{
    long long int a, b, c, ans = 0;
    scanf("%lld %lld %lld", &a, &b, &c);//50 60 70
    
    long long int small;

    //finding the small number 
    if(a<=b && a<=c)
    {
        small = a;
    }
    else if (b<=a && b<=c)          
    {
        small = b;
    }
    else
    {
        small = c;
    }
    //assigning small number to ans

    ans = small;//50

    //deleting small number 
    a = a - small; //0
    b = b - small; //10
    c = c - small; //20

    a = a / 2; //0
    if(a<c) //
    {
        ans = ans + a;
    }
    else
    {
        ans = ans + c;
    }

    printf("%lld\n", ans);
    return 0;
}