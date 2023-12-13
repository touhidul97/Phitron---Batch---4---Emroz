#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    // now we will use sizeof(a) to determine the size of the array.
    printf("%d", sizeof(a));
    return 0;
}