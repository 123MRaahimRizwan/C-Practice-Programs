#include <stdio.h>

#include <stdio.h>

// Driver code
int main()
{
    int number = 0;
    int tempNumber = number;
    int power = 0;

    printf("Enter a number: ");
    scanf("%d", &number);
    // Calculating the sum of individual digits
    while (number > 0)
    {
        int remainder = number % 10;
        power = (power) + (remainder * remainder * remainder);
        number = number / 10;
    }

    // Condition to check whether the
    // value of P equals to user input
    // or not.
    if (tempNumber == power)
    {
        printf("Yes. It is Armstrong No.");
    }
    else
    {
        printf("No. It is not an Armstrong No.");
    }
    return 0;
}