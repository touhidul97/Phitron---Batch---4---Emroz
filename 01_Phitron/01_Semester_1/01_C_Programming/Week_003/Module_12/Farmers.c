// https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-04/challenges/farmers-1

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int m1, m2, d;
        float day, ans;

        scanf("%d %d %d", &m1, &m2, &d);
        day = ((m1 * d) / (m1 + m2));
        ans = d - day;
        int rounded_ans = (int)(ans + 0.5);

        printf("%d\n", rounded_ans);
    }

    return 0;
}
