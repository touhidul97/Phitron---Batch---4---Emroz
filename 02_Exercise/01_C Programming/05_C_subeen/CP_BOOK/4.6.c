/*যেকোনো সংখ্যার নামতা বের করার জন্য সি প্রোগ্রাম। 
Using While Loop. 
*/
#include<stdio.h>
int main(){
    int num, i=1;
    printf("Input the Number to get multiplication table :\n");
    scanf("%d",&num);
    printf("The Multiplication Table of %d is : \n",num);
    while(i<=10){
        printf("%d x %d = %d \n", num,i,num*i);
        i++;
    }
    return 0;
}