#include <stdio.h>

int main()
{
    int rows;
    char character = 'A';
    printf("****Continuous character pattern****\n");
    printf("Enter the rows: ");
    scanf("%d", &rows);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {

            printf("%c", character);
            character++;
        }
        printf("\n");
    }
    return 0;
}