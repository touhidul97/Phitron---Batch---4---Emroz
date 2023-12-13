#include <stdio.h>
int main()
{
    int spentTime, avgSpeed;
    float fuelSpent;
    scanf("%d%d", &spentTime, &avgSpeed);
    fuelSpent = (spentTime * avgSpeed) / 12.0;
    printf("%.3f\n", fuelSpent);
    return 0;
}