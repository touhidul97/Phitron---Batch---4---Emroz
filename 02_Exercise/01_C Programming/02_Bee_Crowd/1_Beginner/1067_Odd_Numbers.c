#include <stdio.h>
int main()
{
    int X;
    scanf("%d", &X);

    int i = 0;

    for (i = 1; i <= X; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}