#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000000];
    scanf("%s", str);
    int cunt[26] = {0};

    for (int i = 0; i < strlen(str); i++)
    {
        int val = str[i] - 'a';
        cunt[val]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (cunt[i] != 0)
        {
            printf("%c - %d\n", i + 'a', cunt[i]);
        }
    }

    return 0;
}
