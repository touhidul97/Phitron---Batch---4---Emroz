//right triangle asterisc flipped 
#include<stdio.h>
int main(){
    int i,j;
    for(j=10;j>0;j--){
        for(i=0;i<j;i++){
          printf("*");
        }
        printf("\n");
    }
    return 0;
}