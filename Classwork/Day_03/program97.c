
#include<stdio.h>
#include<stdlib.h>

unsigned long long Factorial(int iNo)
{
    int iCnt = 0;
    unsigned long long iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    unsigned long long iRet = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial is: %llu\n", iRet);

    return EXIT_SUCCESS;
}
