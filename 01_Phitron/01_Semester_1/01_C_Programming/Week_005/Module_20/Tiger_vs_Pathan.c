// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-04/challenges/tiger-vs-pathan
#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        char s[n+1];
        int cnt_t = 0;
        int cnt_p = 0;
        scanf("%s", s);
        for (int j = 0; j < n; j++)
        {
            if (s[j]=='T')
            {
                cnt_t++;
            }
            else if(s[j]=='P')
            {
                cnt_p++;
            }
        }
        if (cnt_p > cnt_t)
        {
            printf("Pathaan\n");
        }
        else if(cnt_t>cnt_p)
        {
            printf("Tiger\n");
        }
        else
        {
            printf("Draw\n");
        }
    }
    
    return 0;
}