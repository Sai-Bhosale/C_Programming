#include <stdio.h>

void Reverse(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while (*end != '\0')
    {
        end++;
    }

    end--;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    Reverse(arr);

    return 0;
}