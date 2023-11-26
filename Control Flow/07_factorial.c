#include <stdio.h>

int main()
{
    int number, factorial = 1;
    printf("Enter the number to find its factorial: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        factorial *= i;
    }
    printf("The factorial of %d is %d", number, factorial);
    return 0;
}