#include <stdio.h>
/*
return_type function_name(Parameter)
{
    code;
    return value;
}
*/
int sum(int a, int b);
// {

//     int sum = a + b;
//     return sum;
// }
int main()
{
    // int summation = sum(10, 12);
    printf("%d", sum(10000, 2455));
    return 0;
}

int sum(int a, int b)
{

    int sum = a + b;
    return sum;
}