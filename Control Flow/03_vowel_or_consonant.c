#include <stdio.h>

int main()
{
    char inputCharacter;
    printf("Enter a character: ");
    scanf("%c", &inputCharacter);

    if ((inputCharacter == 'A' || inputCharacter == 'E' || inputCharacter == 'I' || inputCharacter == 'O' || inputCharacter == 'U') || (inputCharacter == 'a' || inputCharacter == 'e' || inputCharacter == 'i' || inputCharacter == 'o' || inputCharacter == 'u'))
    {
        printf("The letter %c is a vowel.\n", inputCharacter);
    }
    else if ((inputCharacter >= 'A' && inputCharacter <= 'Z') || (inputCharacter >= 'a' && inputCharacter <= 'z'))
    {
        printf("The letter %c is a consonant.\n", inputCharacter);
    }
    else
    {
        printf("Invalid input character.\n");
    }
    return 0;
}