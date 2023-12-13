#include<stdio.h>
void hello()
{
    printf("Hello\n");
    world();
}
void world()
{
    printf("World\n");
}
int main()
{
    hello();
    printf("end\n");
    return 0;
}