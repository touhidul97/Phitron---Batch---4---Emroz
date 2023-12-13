// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/E

#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    /* here we are talking about non-empty interval that means the interval must have somethings between them. suppose an interval [a,a]  here a-a=0 that is there is a 0 between the interval, but if the interval is like[0,0]  the the difference is also 0 that can not be an interval. that's why we are checking that if a and b both are not equal 0. */

    if (a != 0 && b != 0)
    {
        int ans = a - b;
        if (ans < 0)
        {
            ans = ans * (-1);
        }//here i just tried to find the interval of the given interval and check whether it is positive or negative if negative the convert it to positive. 
        
        if (ans == 1 || ans == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    else
    {
        printf("NO\n");
    }
        
    return 0;
}