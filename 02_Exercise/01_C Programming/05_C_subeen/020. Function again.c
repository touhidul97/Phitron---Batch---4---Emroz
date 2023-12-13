#include<stdio.h>
int minimum(int a, int b){
    int temp;
    if(a<b){
        temp=a;
    }
    else{
        temp=b;
    }
    return temp;
}
int  main(){
    int num1, num2, num3,n1,n2;
    printf("Enter the 1st Number:\n");
    scanf("%d",&num1);
    printf("Enter the 2nd Number:\n");
    scanf("%d",&num2);
    printf("Enter the 3rd Number:\n");
    scanf("%d",&num3);
    n1=minimum(num1,num2);
    n2=minimum(n1,num3);
    printf("The Small Number is :%d\n",n2);
    return 0;
}
