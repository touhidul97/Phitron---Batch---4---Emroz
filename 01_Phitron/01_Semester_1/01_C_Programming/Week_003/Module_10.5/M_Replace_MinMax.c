// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M
#include<stdio.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int min = INT_MAX, max = INT_MIN, max_index, min_index;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>max)
        {
            max = a[i];
            max_index = i;
        }
        if(a[i]<min)
        {
            min = a[i];
            min_index = i;
        }
    }
    int temp = a[max_index];
    a[max_index] = a[min_index];
    a[min_index] = temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}