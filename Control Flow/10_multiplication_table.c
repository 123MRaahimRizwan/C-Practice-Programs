#include <stdio.h>

int main()
{
    int number, range, multiplication;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter the range: ");
    scanf("%d", &range);

    for (int i = 1; i <= range; i++)
    {
        multiplication = i * number;
        printf("%d * %d = %d", number, i, multiplication);
        printf("\n");
    }
    return 0;
}