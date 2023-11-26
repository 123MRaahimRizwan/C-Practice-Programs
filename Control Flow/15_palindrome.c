#include <stdio.h>

int main()
{
    int originalNumber = 0;
    int reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &originalNumber);

    int number = originalNumber;

    while (number != 0)
    {
        int remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }

    if (originalNumber == reversed)
    {
        printf("Given number %d is a palindrome number", originalNumber);
    }
    else
    {
        printf("Given number %d is not a palindrome number", originalNumber);
    }

    return 0;
}