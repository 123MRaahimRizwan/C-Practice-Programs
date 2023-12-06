#include <stdio.h>
// TODO: Just Invert the pyramid
int main()
{
    int rows;
    printf("****Inverted Hollow Star Pyramid****\n");
    printf("Enter the rows: ");
    scanf("%d", &rows);
    for (int i = 0; i <= rows; i++)
    {
        for (int space = 0; space < rows - i; space++)
        {
            printf(" ");
        }
        for (int j = 0; j <= 2 * i; j++)
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
    for (int i = 0; i <= 2 * rows - 1; i++)
    {
        printf("*");
    }
    return 0;
}