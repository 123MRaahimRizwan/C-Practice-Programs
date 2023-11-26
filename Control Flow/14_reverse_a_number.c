#include <stdio.h>

int main()
{
    int number, remainder = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0)
    {
        remainder = remainder * 10 + number % 10;
        number = number / 10;
    }
    printf("The reversed number is: %d", remainder);
    return 0;
}