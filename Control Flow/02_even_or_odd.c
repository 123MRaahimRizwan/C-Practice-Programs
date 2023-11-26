#include <stdio.h>

int main()
{
    int inputNumber;
    printf("Enter a number: ");
    scanf("%d", &inputNumber);

    if (inputNumber % 2 == 0)
    {
        printf("%d is even number", inputNumber);
    }
    else
    {
        printf("%d is odd number", inputNumber);
    }
    return 0;
}