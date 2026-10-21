//Input : 5
// 1+2+3+4+5 = 15

//Input : 8
// 1+2+3+4+5+6+7+8 = 36

#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    int iCnt = 0;
    int iSum = 0;

    iCnt = 1;
    //iSum = 0 + 1;    ---> 1

    iSum = iSum + iCnt;
    iCnt++;  //2
    
    //iSum = 1 +2;     ---> 3
    iSum = iSum + iCnt;
    iCnt++;  //3

    //iSum = 3 + 3;   ---> 6
    iSum = iSum + iCnt;
    iCnt++;  //4
    
   // ium = 6 +4 ;  --->10
    iSum = iSum + iCnt;
    iCnt++;  

    printf("%d\n",iSum);
    return EXIT_SUCCESS;
}

void Display(int iNo)
{   int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
    printf("%d\t",iCnt);
    iCnt++;
    }
   
}

