// https : // www.hackerrank.com/challenges/1d-arrays-in-c/problem?isFullScreen=true

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];

    }

    printf("%d\n", sum);

    return 0;
}