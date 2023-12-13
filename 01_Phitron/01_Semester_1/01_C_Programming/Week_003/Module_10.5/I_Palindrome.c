// https: // codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[10000];
    gets(ch);
    int length = strlen(ch);
    int i = 0;
    int j = length - 1;
    int flag = 0;

    while (i<j)
    {
        if (ch[i]!=ch[j])
        {
            flag++;
            break;
        }
        i++;
        j--;
    }
    if (flag==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
    return 0;
}