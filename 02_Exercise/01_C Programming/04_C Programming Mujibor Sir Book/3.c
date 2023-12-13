/*Example 3
Page : 465
Question: Take two integer and find their summation and print it on Screen.*/
#include<stdio.h>//stdio.h is a header file which stands for standard input output header file which is comonlu used for taking input and output.
/*int main(){

} is the main function.*/
int main(){
    int number1, number2;
    printf("Enter the value of first number=\n");
    scanf("%d",&number1);
    printf("Enter the value of second number=\n");
    scanf("%d",&number2);
    printf("Sum of two numbers=%d\n",number1+number2);//printf is the print function which run under the stdio.h header file. 
    return 0;// the keyword return is returning a integer value to the main function so that the function get an instruction to stop the process.
}