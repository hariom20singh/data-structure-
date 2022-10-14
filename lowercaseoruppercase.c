#include <stdio.h>

int main()
{
    // 97-122 = a-z ASCII value
    char lu;
    printf("Enter the character =");
    scanf("%5c", &lu);
    if (lu <= 122 && lu >= 97)
    {
        printf("The character is lowercase");
    }
    // 65-90 = A-Z
    else if (lu <= 90 && lu >= 65)
    {
        printf("The character is uppercase");
    }
    else
    {
        printf("Not a character");
    }
    return 0;
}