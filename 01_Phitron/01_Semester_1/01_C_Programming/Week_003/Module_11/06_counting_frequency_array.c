#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    //input
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    //------------------------------------------------------
    // first step-
    /* int zero = 0, one = 0;//and so on
    // checking condition;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==0)
        {
            zero++;
        }
        if(a[i]==1)
        {
            one++;
        }
        // .
        // .
        // .
        // and so on
    }


    //output
    printf("0 - %d\n", zero);
    printf("1 - %d\n", one);
    // .
    // .
    // .
    // so on
 */
    //-------------------------------------------------------------------------
    //second step 
   /*  int cunt[7]; // and so on

    // checking condition;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            cunt[0]++;
        }
        if (a[i] == 1)
        {
            cunt[1]++;
        }
        // .
        // .
        // .
        // and so on
    }

    //output
    printf("0 - %d\n", cunt[0]);
    printf("1 - %d\n", cunt[1]);
    // .
    // .
    // .
    // so on */
    //-------------------------------------------------------------------------

    //final step

    int cnt[7] = {0};
    for (int i = 0; i < n; i++)
    {
        int val = a[i];
        cnt[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d - %d\n", i, cnt[i]);
    }

    return 0;
}