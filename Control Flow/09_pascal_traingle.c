// C program to print Pascal’s Triangle
// using combinations in O(n^2) time
// and O(1) extra space function
#include <stdio.h>

int main()
{
    int numberOfRows, i, j, space, coefficient = 1;
    printf("Enter the rows for pascal's triangle: ");
    scanf("%d", &numberOfRows);

    for (i = 0; i < numberOfRows; i++)
    {
        for (space = 1; space <= numberOfRows - i; space++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
            {
                coefficient = 1;
            }
            else
            {
                coefficient = coefficient * (i - j + 1) / j;
            }
            printf("%3d", coefficient);
        }
        printf("\n");
    }

    return 0;
}