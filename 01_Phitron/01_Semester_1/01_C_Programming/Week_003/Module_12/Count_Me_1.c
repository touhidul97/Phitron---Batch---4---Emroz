// https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-04/challenges/count-me-2-1

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
    int count2 = 0, count3 = 0;
    for (int i = 0; i < n; i++)
    {
        if ((a[i]%2==0) && (a[i]%3==0))
        {
            count2++;
        }
        else if (a[i]%2==0)
        {
            count2++;
        }
        else if (a[i]%3==0)
        {
            count3++;
        }
    }

    printf("%d %d", count2, count3);

    return 0;
}