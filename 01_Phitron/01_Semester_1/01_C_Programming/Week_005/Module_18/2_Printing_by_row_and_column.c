#include <stdio.h>
int main()
{
    // declare 2d array;
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // print the 2d array;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    // Access Col;

    // int e = 2;
    // for (int i = 0; i < col; i++)
    // {
    //     printf("%d ", a[e][i]);
    // }

    // Access Row;
    for (int i = 0; i < row; i++)
    {
        printf("%d ",a[i][1]);
    }
    
    return 0;
}