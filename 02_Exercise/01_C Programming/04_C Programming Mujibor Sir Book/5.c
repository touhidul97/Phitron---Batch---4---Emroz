/*Example 5
Page : 467
Question: Find the area of a Circle.*/
#include<stdio.h>
#include<math.h>
float pi=3.14;
int main(){
    float radius, area;
    printf("Enter radius of the circle:\n");
    scanf("%f",&radius);
    area=pi*pow(radius,2);
    printf("The area of circle is :%f\n",area);//printf is the print function which run under the stdio.h header file. 
    return 0;// the keyword return is returning a integer value to the main function so that the function get an instruction to stop the process.
}