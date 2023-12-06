#include <stdio.h>
int main()
{
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int space = 1; space <= rows - i; space++)
        {
            printf("  ");
        }
        int coef = 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%4d", coef);
            coef = coef * (i - j) / j;
        }
        printf("\n");
    }
}