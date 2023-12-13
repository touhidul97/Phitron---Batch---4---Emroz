#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);
        if (x == 0)
        {
            printf("NULL\n");
        }

        else
        {
            if (x % 2 == 0 && x > 0)
            {
                printf("EVEN POSITIVE\n");
            }
            else if (x % 2 == 0 && x < 0)
            {
                printf("EVEN NEGETIVE\n");
            }
            else if (x % 2 != 0 && x > 0)
            {
                printf("ODD POSITIVE\n");
            }
            else
            {

                printf("ODD NEGETIVE\n");
            }
        }
    }
    return 0;
}