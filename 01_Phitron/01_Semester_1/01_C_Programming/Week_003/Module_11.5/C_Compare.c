// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C
#include<stdio.h>
#include<string.h>
int main()
{
    char a[21], b[21];
    scanf("%s %s", a, b);
    int v = strcmp(a, b);
    // printf("%d", v);
    if (v < 0)
    {
        printf("%s\n", a);
    }
    else if (v>0)
    {
        printf("%s\n", b);
    }
    else
    {
        printf("%s\n",a);
    }
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     char a[100], b[100];
//     scanf("%s %s", a, b);
//     int i = 0;
//     while (1)
//     {
//         // null checking lader start
//         if (a[i] == '\0' && b[i] == '\0')
//         {
//             printf("%s",a);
//             break;
//         }
//         else if (a[i] == '\0')
//         {
//             printf("%s\n",a);
//             break;
//         }
//         else if (b[i] == '\0')
//         {
//             printf("%s\n",b);
//             break;
//         }
//         // null checking ladder close

//         if (a[i] == b[i])
//         {
//             i++;
//         }
//         else if (a[i] < b[i])
//         {
//             printf("%s\n",a);
//             break;
//         }
//         else
//         {
//             printf("%s\n",b);
//             break;
//         }
//     }

//     return 0;
// }