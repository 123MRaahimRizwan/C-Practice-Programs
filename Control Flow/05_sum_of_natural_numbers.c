#include <stdio.h>

int main()
{
    int inputNumber, sum = 0;
    printf("Enter how many numbers you want to sum: ");
    scanf("%d", &inputNumber);
    for (int i = 1; i <= inputNumber; i++)
    {
        sum += i;
    }
    printf("The total sum is: %d\n", sum);

    return 0;
}