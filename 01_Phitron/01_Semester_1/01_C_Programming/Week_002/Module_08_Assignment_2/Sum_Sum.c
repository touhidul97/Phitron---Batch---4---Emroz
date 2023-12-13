/* https: // www.hackerrank.com/contests/assignment-02-a-introduction-to-c-programming-a-batch-04/challenges/sum-sum-2/problem */

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
    int sum_pos = 0, sum_neg=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>0)
        {
            sum_pos = sum_pos + a[i];
        }
        if(a[i]<0)
        {
            sum_neg = sum_neg + a[i];
        }
    }
    printf("%d %d\n", sum_pos, sum_neg);
    return 0;
}