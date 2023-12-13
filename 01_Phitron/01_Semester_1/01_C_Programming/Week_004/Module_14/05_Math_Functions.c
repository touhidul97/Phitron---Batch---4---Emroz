#include<stdio.h>
#include<math.h>
int main()
{
    double x;
    scanf("%lf", &x);
    // int ans = ceil(x);
    // int ans = floor(x);
    // int ans = round(x);
    double ans = sqrt(x);
    printf("%lf", ans);
    return 0;
}