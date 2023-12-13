// https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-04/challenges/tell-me

/* #include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int j = 0; j < n; j++)
    {
        int t;
        scanf("%d", &t);

        int s[t];
        for (int i = 0; i < t; i++)
        {
            scanf("%d", &s[i]);
        }

        int x;
        scanf("%d", &x);

        int flag = 0;

        for (int i = 0; i < t; i++)
        {
            if(s[i]==3)
            {
                flag=1;
                break;
            }
        }
        
        if(flag==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
 */

#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
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

        int found = 0;

        
        for (int i = 0; i < N; i++)
        {
            if (A[i] == X)
            {
                found = 1;
                break;
            }
        }

        if (found == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
