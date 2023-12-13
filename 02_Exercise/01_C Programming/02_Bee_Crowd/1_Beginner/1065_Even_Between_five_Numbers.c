#include <stdio.h>
int main()
{
    int even_count = 0;
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        int n;
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            even_count++;
        }
    }
    printf("%d valores pares\n", even_count);
    return 0;
}