#include <stdio.h>

int main()
{
    int numberOfTerms, first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &numberOfTerms);
    if (numberOfTerms < 0)
    {
        printf("Invalid number of terms.\n");
    }
    else
    {
        for (int i = 0; i < numberOfTerms; i++)
        {
            // this if condition represents the 0 and 1 written in the beginning of the series so we do not have to write a print statement to print 0 and 1 in the start.
            if (i <= 1)
            {
                next = i;
            }
            else
            {
                next = first + second;
                first = second;
                second = next;
            }
            printf("%d\n", next);
        }
    }

    return 0;
}