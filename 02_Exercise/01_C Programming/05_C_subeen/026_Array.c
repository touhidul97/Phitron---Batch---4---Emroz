#include <stdio.h>
int main()
{
    double number[5] = {89.5, 82.5, 90, 96, 75};
    int roll;
    printf("Roll:   Number: \n");
    for (roll = 0; roll <= 4; roll++)
    {
        printf("Roll: %d Number:%lf\n", roll, number[roll]);
    }
    return 0;
}