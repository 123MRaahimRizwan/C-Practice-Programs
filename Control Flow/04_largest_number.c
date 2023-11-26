#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter theree numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 > num2 && num1 > num3)
    {
        printf("%d is the largest number.\n", num1);
    }
    else if (num2 > num3 && num2 > num1)
    {
        printf("%d is the largest number.\n", num2);
    }
    else if (num3 > num1 && num3 > num2)
    {
        printf("%d is the largest number.\n", num3);
    }
    else
    {
        printf("Invalid input number.\n");
    }
    return 0;
}