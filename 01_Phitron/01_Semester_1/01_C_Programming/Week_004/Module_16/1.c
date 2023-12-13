#include <stdio.h>
#include <string.h>
int main()
{

    char ss[200000];
    int n, i, j, x, y, flag = 1, z;

    gets(ss);

    n = strlen(ss);
    i = 0, j = n - 1;
    printf("%d\n", j);
    while (i < j)
    {
        printf("%d %d\n", i, j);
        if (ss[i] != ss[j])
        {
            flag = 0;
            break;
        }
        i++;
        j--;
    }
    if (flag == 0)
        printf("not palindrome");
    else
        printf("palindrome");
}