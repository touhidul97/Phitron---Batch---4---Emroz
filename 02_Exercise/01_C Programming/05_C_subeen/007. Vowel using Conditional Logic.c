#include<stdio.h>
int main()
{
    char chr;
    printf("Please Enter the Character:\n");
    scanf("%c",&chr);
    if(chr=='a'||chr=='e'||chr=='i'||chr=='o'||chr=='u'||chr=='A'||chr=='E'||chr=='I'||chr=='O'||chr=='U' )
    {
        printf("Vowel\n");
    }
    else
    {
        printf("Consonant\n");
    }
    return 0;
}

