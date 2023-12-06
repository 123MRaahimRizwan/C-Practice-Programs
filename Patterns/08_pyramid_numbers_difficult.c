#include <stdio.h>

int main()
{
    int rows = 5
    , i, j, num = 1, space;

    space = rows - 1;

    for (j = 1; j <= rows; j++)
    {
        num = j;

        // Print leading spaces
        for (i = 1; i <= space; i++)
        {
            printf("  "); // Use two spaces for better formatting
        }

        space--;

        // Print increasing sequence
        for (i = 1; i <= j; i++)
        {
            printf("%d ", num);
            num++;
        }

        num--;
        num--;

        // Print decreasing sequence
        for (i = 1; i < j; i++)
        {
            printf("%d ", num);
            num--;
        }

        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
