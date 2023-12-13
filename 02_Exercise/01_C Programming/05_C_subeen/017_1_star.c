//right triangle asteris
#include<stdio.h>
int main(){
    int i,j;
    for(j=1;j<10;j++){
        for(i=0;i<j;i++){
          printf("*");
        }
        printf("\n");
    }
    return 0;
}