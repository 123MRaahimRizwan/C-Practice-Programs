#include <stdio.h>

int main()
{
    int i, square, sum = 0;
    for (int i = 1; i <= 500; i++)
    {
        square = i * i;
        int temp = square;

        while (i != 0)
        {
            int digit = i % 10;
            sum = sum + digit;
            i = i / 10;
        }
        if (sum == i)
        {
            printf("%d, ", i);
        }
    }

    return 0;
}