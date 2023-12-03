#include <stdio.h>
#include <math.h>

int main()
{
    int sum, num, count = 0;
    for (int i = 1; i <= 1000000; i++)
    {
        num = i;
        int temp = i;
        // Count the number of digits in 'temp'
        while (temp != 0)
        {
            temp /= 10;
            count++;
        }
        // Reset 'temp' to the original value of 'i'
        temp = i;
        // Calculate the sum of each digit raised to the power of 'count'
        sum = 0;
        while (temp != 0)
        {
            sum += pow(temp % 10, count);
            temp /= 10;
        }
        // Check if the sum is equal to the original number 'i'
        if (sum == i)
        {
            // If true, 'i' is an Armstrong number, so print it
            printf("%d, ", i);
        }
        // Reset the count for the next iteration
        count = 0;
    }
    return 0;
}
