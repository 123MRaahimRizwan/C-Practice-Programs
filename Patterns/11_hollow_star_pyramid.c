#include <stdio.h>

int main()
{
    int rows, j, i;
    printf("****Hollow star pyramid****\n");
    printf("Enter the rows: ");
    scanf("%d", &rows);
    for (i = 0; i <= rows - 1; i++)
    {
        for (int space = 0; space < rows - i; space++)
        {
            printf(" ");
        }
        for (j = 0; j <= 2 * i; j++)
        {
            if (j == 0 || j == 2 * i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (i = 0; i <= 2 * rows - 1; i++)
    {
        printf("*");
    }
    return 0;
}