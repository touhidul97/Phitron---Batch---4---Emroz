// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T
#include <stdio.h>
int main()
{
    int a[3];
    int org[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
        org[i] = a[i];
    }
    // ascending sort
     for (int i = 0; i < 3 - 1; i++)
     {
         for (int j = i+1; j < 3; j++)
         {
             if (a[i]>a[j])
             {
                 int temp = a[i];
                 a[i] = a[j];
                 a[j] = temp;
             }

        }
    }


    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", org[i]);
    }

    return 0;
}