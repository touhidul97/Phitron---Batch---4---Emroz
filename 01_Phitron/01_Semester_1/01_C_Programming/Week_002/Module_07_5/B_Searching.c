//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B
#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    int X;
    scanf("%d", &X);
    int ans = -1;

    for (int i = 0; i < N; i++)
    {
        if(X==A[i])
        {
            ans = i;
            break;
        }
    }

    printf("%d\n", ans);

    return 0;
}