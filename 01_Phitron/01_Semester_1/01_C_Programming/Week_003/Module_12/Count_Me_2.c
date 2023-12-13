// https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-04/challenges/count-me-2-2

#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000000];
    scanf("%s", s);
    int count = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
        {
            count++;
        }
        
    }
    printf("%d\n", count);
    return 0;
}