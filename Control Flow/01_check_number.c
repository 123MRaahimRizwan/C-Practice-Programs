#include <stdio.h>

int main()
{
    int inputNumber;
    printf("Enter a number: ");
    scanf("%d", &inputNumber);

    if (inputNumber == 0)
    {
        printf("The number entered is zero.\n");
    }
    else if (inputNumber > 0)
    {
        printf("The number entered is positive.\n");
    }
    else if (inputNumber < 0)
    {
        printf("The number entered is negative.\n");
    }
    else
    {
        printf("Invalid number.\n");
    }
    return 0;
}