#include<stdio.h>
#include <stdlib.h> //for using abs;
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        int a[n];
        int b[n];

        // taking array input;
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }
        // copying a to b;
        for (int j = 0; j < n; j++)
        {
            b[j] = a[j];
        }

        // sorting the b array using the bubble sort algorithm;
        for (int k = 0; k < n; k++)
        {
            for (int j = k + 1; j < n; j++)
            {
                int temp;
                if (b[k] > b[j])
                {
                    temp = b[k];
                    b[k] = b[j];
                    b[j] = temp;
                }
            }
        }
        // finding the absolute value;
        for (int j = 0; j < n; j++)
        {
            printf("%d ", abs(a[j] - b[j]));
        }
        printf("\n");
    }

   
    return 0;
}