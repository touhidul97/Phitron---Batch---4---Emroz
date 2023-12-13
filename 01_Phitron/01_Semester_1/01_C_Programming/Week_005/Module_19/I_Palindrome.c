// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s[1001], b[1001];
//     scanf("%s",&s);
//     strcpy(b, s);
//     int i = 0, j = strlen(b) - 1;
//     while (i<j)
//     {
//         char temp = b[i];
//         b[i] = b[j];
//         b[j] = temp;
//         i++;
//         j--;
//     }
//     if(strcmp(s,b)==0)
//     {
//         printf("YES");
//     }
//     else
//     {
//         printf("NO");
//     }
//     return 0;
// }


//using two pointers method

#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    scanf("%s", &a);
    int i = 0, j = strlen(a) - 1;
    int flag = 1;
    while (i<j)
    {
        if (a[i]!=a[j])
        {
            flag = 0;
            break;
        }
        
        i++;
        j--;
    }
    if (flag==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    
    return 0;
}