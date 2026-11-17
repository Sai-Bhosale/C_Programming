#include <stdio.h>
#include <ctype.h>

void strlwrx(char *str)
{
    while (*str != '\0')
    {
        *str = tolower(*str);
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf(" %19[^\n]", arr);

    strlwrx(arr);

    printf("Modified string is %s\n", arr);

    return 0;
}