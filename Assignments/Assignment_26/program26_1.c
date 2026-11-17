#include <stdio.h>

void DisplayASCII()
{
    int i = 0;

    printf("ASCII TABLE\n");
    printf("---------------------------------------------\n");
    printf("Character\tDecimal\tHexadecimal\tOctal\n");
    printf("---------------------------------------------\n");

    for (i = 0; i <= 255; i++)
    {
        if (i >= 32 && i <= 126)
        {
            printf("%c\t\t", i);
        }
        else
        {
            printf("Non-printable\t");
        }

        printf("%d\t%02X\t\t%03o\n", i, i, i);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}