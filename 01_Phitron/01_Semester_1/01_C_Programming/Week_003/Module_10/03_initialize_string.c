#include<stdio.h>
int main()
{   
    //char a[5]={'E''m''r''0''z'}
    char a[] = "Emroz";
    int sz = sizeof(a) / sizeof(char);
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%c\n",a[i]);
    // }
    printf("%d\n", sz);
    printf("%s", a );

    return 0;
}