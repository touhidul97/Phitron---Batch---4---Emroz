// কোনো বস্তু u আদিবেগে এবং a ত্বরণে যাত্রা শুরু করল( ত্বরণ অপরিবর্তনীয় )। t সময় পড়ে এর বেগ যদি  v হয় তবে 2t সময়ে বস্তুটি কত দূরত্ব অতিক্রম করবে ?
// v=u+at
// s=ut+0.5at^2
#include <stdio.h>
int main()
{
    double initial_velocity, accelaration, time, Total_distance_in_doubled_time, velocity;
    printf("Enter the Initial Velocity:\n");
    scanf("%lf", &initial_velocity);
    printf("Enter the Accelaration:\n");
    scanf("%lf", &accelaration);
    printf("Enter the Time seconds:\n");
    scanf("%lf", &time);
    velocity = initial_velocity + accelaration * time;
    Total_distance_in_doubled_time = (2 * time * velocity) / 1000;
    printf("Total Distance in Doubled Time:%lf KM\n", Total_distance_in_doubled_time);
    return 0;
}