#include <stdio.h>

int main()
{
    char operator;
    double numberOne, numberTwo;

    while (1)
    {
        printf("Enter the operator (+ , -, *, /): ");
        scanf("%c", &operator);

        printf("Enter the two numbers: ");
        scanf("%d %d", &numberOne, &numberTwo);

        switch (operator)
        {
        case '+':
            printf("%d + %d = %d \n", numberOne, numberTwo, numberOne + numberTwo);
            break;
        case '-':
            printf("%d - %d = %d \n", numberOne, numberTwo, numberOne - numberTwo);
            break;
        case '*':
            printf("%d * %d = %d \n", numberOne, numberTwo, numberOne * numberTwo);
            break;
        case '/':
            printf("%d / %d = %d \n", numberOne, numberTwo, numberOne / numberTwo);
            break;

        default:
            printf("Error: Invalid input. Please check the operator and the numbers you have entered.");
            break;
        }
        printf("\n");
    }

    return 0;
}