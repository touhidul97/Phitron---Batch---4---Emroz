// https://www.hackerrank.com/contests/assignment-03-a-introduction-to-c-programming-a-batch-04/challenges/even-and-odd-8-2

#include<stdio.h>
void odd_even() 
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int countEven=0, countOdd=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]%2==0)
        {
            countEven++;
        }
        else
        {
            countOdd++;
        }
    }
    printf("%d %d\n", countEven, countOdd);
}
int main()
{
    odd_even();
    return 0;
}