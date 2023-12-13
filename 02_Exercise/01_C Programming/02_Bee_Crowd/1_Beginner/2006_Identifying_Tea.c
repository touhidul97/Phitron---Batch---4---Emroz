#include <stdio.h>
int main()
{
    int t;
    int count = 0;

    scanf("%d", &t);
    for (int i = 0; i <= 4; i++)
    {
        int test;
        scanf("%d", &test);

        if (t == test)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}