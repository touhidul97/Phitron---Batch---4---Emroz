// https://www.hackerrank.com/challenges/printing-tokens-/problem?isFullScreen=true
#include<stdio.h>
#include<string.h>
int main()
{
    char s[2000];
    fgets(s,1000,stdin);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i]==' ')
        {
            s[i] = '\n';
        }
        
    }
    
    printf("%s", s);
    return 0;
}