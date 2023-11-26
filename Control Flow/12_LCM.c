#include <stdio.h>

int main()
{
    int max, x, y;
    printf("Enter number one: ");
    scanf("%d", &x);
    printf("Enter number two: ");
    scanf("%d", &y);

    max = (x > y) ? x : y;

    while (1)
    {
        if (max % x == 0 && max % y == 0)
        {
            printf("The LCM of %d and %d is %d.\n", x, y, max);
            break;
        }
        else
        {
            printf("Checking...\n");
            continue;
        }
        max++;
    }

    return 0;
}