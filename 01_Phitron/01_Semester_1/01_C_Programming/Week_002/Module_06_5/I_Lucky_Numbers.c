// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I

/* A number of two digits is lucky if one of its digits is divisible by the other.

For example, 39, 82, and 55 are lucky, while 79 and 43 are not.

Given a number between 10 and 99, determine whether it is lucky or not.

Input
Only one line containing a single number N
 (10≤N≤99)
.

Output
Print "YES" if the given number is lucky, otherwise print "NO". */

#include<stdio.h>
int main()
{
    int n;
    int r,o;
    int n1, n2;
    scanf("%d",&n);
    n1=n%10;
    n2=n/10;
    if(n1%n2==0 || n2%n1==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}