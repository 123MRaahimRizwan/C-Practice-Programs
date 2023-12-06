#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i <= rows; i++)
    {
        for (int space = 0; space < rows - i; space++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}