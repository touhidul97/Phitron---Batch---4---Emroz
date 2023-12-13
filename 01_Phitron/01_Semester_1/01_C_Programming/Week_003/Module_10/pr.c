#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    // scanf("%s", ch);
    // gets(ch);
    // int count = 0;
    // for (int i = 0; ch[i]!='\0'; i++)
    // {
    //     count++;

    //     /* code */
    // }

    // printf("%d", count);

    fgets(ch, 100, stdin);
    int length = strlen(ch);
    printf("%d", length);
    

    return 0;
}