#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long m;
        int a, b, c;
        scanf("%lld %d %d %d", &m, &a, &b, &c);
        long long abc = (long long)a * b * c;
        if (abc == 0 && m != 0)
        {
            printf("-1\n");
        }
        else if (abc != 0 && m % abc != 0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%lld\n", m / abc);
        }
    }
    return 0;
}
