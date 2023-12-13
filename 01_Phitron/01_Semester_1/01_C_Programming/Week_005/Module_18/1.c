#include<stdio.h>
int main()
{
    int row, col;
    scanf("%d", &row);
    scanf("%d", &col);
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int  j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }
    int count = 1;
    if (row != col)
    {
        count = 0;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i==j)
            {
                if (a[i][j]!=a[0][0])
                {
                    count = 0;
                }
                continue;
            }
            if (a[i][j])
            {
                count = 0;
            }
            
        }
    }

    if (count=1)
    {
        printf(" Diagonal Matrix");
    }
    else
    {
        printf("Not a Diagonal Matrix.\n");
    }
    
    return 0;
}