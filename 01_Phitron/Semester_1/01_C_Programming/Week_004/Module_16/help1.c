#include <stdio.h>

void printPattern(int height)
{
    for (int i = 1; i <= height; i++)
    {
        // Print spaces
        for (int j = height; j > i; j--)
        {
            printf(" ");
        }

        // Print symbols
        if (i % 2 == 1)
        {
            for (int k = 1; k <= i * 2 - 1; k++)
            {
                printf("#");
            }
        }
        else
        {
            for (int k = 1; k <= i * 2 - 1; k++)
            {
                printf("-");
            }
        }

        // Move to the next line
        printf("\n");
    }
}

int main()
{
    int height = 5; // Set the height of the pattern (adjust as needed)
    printPattern(height);
    return 0;
}
