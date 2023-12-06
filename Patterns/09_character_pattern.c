#include <stdio.h>

int main()
{
    int rows;
    char character = 'A';
    printf("****Character Pattern****\n");
    printf("Enter the rows: ");
    scanf("%d", &rows);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c", character);
        }
        printf("\n");
        character++;
    }
    return 0;
}