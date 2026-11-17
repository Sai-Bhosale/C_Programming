#include <stdio.h>

void Display(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }

    printf("Modified character: %c\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    Display(cValue);

    return 0;
}