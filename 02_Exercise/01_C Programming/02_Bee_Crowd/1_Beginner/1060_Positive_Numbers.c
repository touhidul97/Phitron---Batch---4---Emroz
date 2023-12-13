#include <stdio.h>
int main()
{
    int positive_count = 0;
    for (int i = 0; i < 6; i++)
    {
        double n;
        scanf("%lf", &n);
        if (n > 0)
        {
            positive_count++;
        }
    }
    printf("%d valores positivos\n", positive_count);
    return 0;
}