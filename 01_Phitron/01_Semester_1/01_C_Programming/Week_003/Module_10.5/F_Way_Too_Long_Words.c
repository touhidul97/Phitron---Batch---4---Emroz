// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F
#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);
    char S[t][101];
    for (int i = 0; i < t; i++)
    {
        scanf("%s", S[i]);
    }
    for (int i = 0; i < t; i++)
    {
        int length = strlen(S[i]);
        if (length <= 10)
        {
            printf("%s\n", S[i]);
        }
        else
        {
            printf("%c%d%c\n",S[i][0],length-2,S[i][length-1]);
        }
    }
    return 0;
}