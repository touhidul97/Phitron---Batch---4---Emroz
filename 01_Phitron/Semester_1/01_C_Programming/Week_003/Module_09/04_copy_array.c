#include <stdio.h>
int main()
{
    // input data a ;
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // input data b;
    int m;
    scanf("%d", &m);
    int b[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    // declare n+m data;
    int ans[n + m];

    // put the n data in m first;
    
    for (int i = 0; i < n; i++)
    {
        ans[i] = a[i];
    }
    int i = n;
    for (int j = 0; j < m; j++)
    {
        ans[i] = b[j];
        i++;
    }
    
    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", ans[i]);
    }

    return 0;
}