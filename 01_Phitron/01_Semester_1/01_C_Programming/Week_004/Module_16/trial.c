#include<stdio.h>
int main()
{


    int n,i,j,x,y,z;

    scanf("%d",&n);

    for(i=1;i<=(n+1)/2;i++)
    {

       if(i%2==1)
       {
           for(j=2;j<=(n+1)/2-i;j++)
           {
               printf(" ");
           }
           for(j=1;j<=2*i-1;j++)
           {
               printf("#");
           }
           printf("\n");
       }
       else
       {
            for(j=2;j<=(n+1)/2-i;j++)
           {
               printf(" ");
           }
           for(j=1;j<=2*i-1;j++)
           {
               printf("-");
           }
           printf("\n");
       }
    }


  for(i=(n+1)/2 -1;i>0;i--)
    {

       if(i%2==1)
       {
           for(j=2;j<=(n+1)/2-i;j++)
           {
               printf(" ");
           }
           for(j=1;j<=2*i-1;j++)
           {
               printf("#");
           }
           printf("\n");
       }
       else
       {
            for(j=2;j<=(n+1)/2-i;j++)
           {
               printf(" ");
           }
           for(j=1;j<=2*i-1;j++)
           {
               printf("-");
           }
           printf("\n");
       }
    }


}