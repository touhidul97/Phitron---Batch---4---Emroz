/* Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

Input
Only one line containing 3 numbers A, B and C ( - 105 ≤ A, B, C ≤ 105)

Output
Print the minimum number followed by a single space then print the maximum number. */
#include<stdio.h>
int main()
{
    int a, b, c;
    int big, small;
    scanf("%d %d %d",&a,&b,&c);
    //minimum
    if(a<=b && a<=c)
    {
        printf("%d ",a);
    }
    else if(b<=c && b<=a)
    {
        printf("%d ",b);
    }
    else
    {
        printf("%d ",c);
    }

    //maximum
    if(a>=b && a>=c)
    {
        printf("%d",a);
    }
    else if(b>=a && b>=c)
    {
        printf("%d",b);
    }
    else {
        printf("%d",c);
    }
    return 0;
}