// program to convert temperature from celcius to farenhite .
#include <stdio.h>
int main()
{
    float temp_c, temp_f;
    printf("Input the Temparature in Celcius:\n");
    scanf("%f", &temp_c);
    temp_f = (9 * temp_c / 5) + 32; // we have used the formula to convert the temparatur from celcius to farenhite.
    printf("The Temparature in Farenhite is :%f", temp_f);
    return 0;
}