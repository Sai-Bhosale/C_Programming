#include <stdio.h>
#include <ctype.h>

void struprx(char *str)
{
    while (*str != '\0')
    {
        *str = toupper(*str);
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf(" %19[^\n]", arr);

    struprx(arr);

    printf("Modified string is %s\n", arr);

    return 0;
}