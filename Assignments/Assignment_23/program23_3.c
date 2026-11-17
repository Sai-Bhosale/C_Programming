#include <stdio.h>
#include <ctype.h>

void strtoggleex(char *str)
{
    while (*str != '\0')
    {
        if (islower(*str))
        {
            *str = toupper(*str);
        }
        else if (isupper(*str))
        {
            *str = tolower(*str);
        }

        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf(" %19[^\n]", arr);

    strtoggleex(arr);

    printf("Modified string is %s\n", arr);

    return 0;
}