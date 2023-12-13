// https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-04/challenges/count-me-3

#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char s[1000000];
    for (int j = 0; j < n; j++)
    {
        scanf("%s", s);

        int alpUp = 0, alpL = 0, dgt = 0;

        for (int i = 0; i < strlen(s); i++)
        {
            char c = s[i];
            if (c >= 'A' && c <= 'Z')
            {
                alpUp++;
            }
            if (c >= 'a' && c <= 'z')
            {
                alpL++;
            }
            if (c >= '0' && c <= '9')
            {
                dgt++;
            }
        }
        printf("%d %d %d\n", alpUp, alpL, dgt);
    }
    return 0;
}