// https://www.hackerrank.com/contests/assignment-03-a-introduction-to-c-programming-a-batch-04/challenges/is-palindrome-15
#include <stdio.h>
#include <string.h>
int is_palindrome(char *s)
{
    int n = strlen(s);
    int i = 0, j = n - 1, flag = 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            flag = 0;
            break;
        }
        i++;
        j--;
    }
    return flag;
}
int main()
{
    char s[2000];
    fgets(s, sizeof(s), stdin);
    int flag_=is_palindrome(s);

    if (flag_ == 0)
    {
        printf("Not Palindrome");
    }
    else
    {
        printf("Palindrome");
    }
        
}