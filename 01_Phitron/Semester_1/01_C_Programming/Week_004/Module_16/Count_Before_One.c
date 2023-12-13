// https://www.hackerrank.com/contests/assignment-03-a-introduction-to-c-programming-a-batch-04/challenges/count-before-one-1

#include<stdio.h>
int count_before_one(int a[],int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]!=1)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    return count;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int y = count_before_one(a, n);
    printf("%d", y);
    return 0;
}