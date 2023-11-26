#include <stdio.h>

int main()
{
    int number, signal = 0;
    printf("Enter a positive number: ");
    scanf("%d", &number);

    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            signal = 1;
            break;
        }
    }
    if (signal == 0)
    {
        printf("%d is a prime number", number);
    }
    else
    {
        printf("%d is not a prime number", number);
    }
    return 0;
}