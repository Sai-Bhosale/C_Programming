#include <stdio.h>
#include <ctype.h>

void DisplayDigit(char *str)
{
    while (*str != '\0')
    {
        if (isdigit(*str))
        {
            printf("%c", *str);
        }

        str++;
    }

    printf("\n");
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf(" %19[^\n]", arr);

    DisplayDigit(arr);

    return 0;
}