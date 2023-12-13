#include <stdio.h>
int main()
{
    int positive_count = 0;
    double positive_sum = 0, positive_avg;

    for (int i = 0; i < 6; i++)
    {
        double n;
        scanf("%lf", &n);
        if (n > 0.0)
        {
            positive_count++;
            positive_sum = positive_sum + n;
            positive_avg = positive_sum / positive_count;
        }
    }

    printf("%d valores positivos\n", positive_count);
    printf("%.1lf\n", positive_avg);

    return 0;
}