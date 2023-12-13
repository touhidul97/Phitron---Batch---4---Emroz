#include<stdio.h>
int main()
{
    char chr;
    printf("Please Enter the Character:\n");
    scanf("%c",&chr);
    if(chr>='0'&& chr<='9')
    {
        printf("Digit\n");
    }
    else
    {
        printf("Not a Digit\n");
    }
    return 0;
}


