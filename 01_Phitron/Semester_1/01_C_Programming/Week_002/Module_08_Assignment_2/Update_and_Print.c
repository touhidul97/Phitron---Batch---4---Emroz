/* https: // www.hackerrank.com/contests/assignment-02-a-introduction-to-c-programming-a-batch-04/challenges/update-and-print */

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int v;
    int x;
    scanf("%d%d",&x,&v);
    for (int i = n - 1; i >= 0; i--)
    {
        if (i==x)
        {
            a[i] = v;
        }
        printf("%d ", a[i]);
    }
    return 0;
}