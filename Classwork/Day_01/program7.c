/*
   
Step 1 : Understand the problem statement
Step 2 :Write the alogo
Step 3 :Decide the programming language
Step 4 :Write the program
Step 5 :Test the program

*/

///////////////////////////////////////////////////////////////////////
//
// Step1 : Understand the problem statement
//         User is going to enter any 2 integers
//         And we have to perform addition
//
//
///////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////
//  Step 2 :Write the alogo
/*
    START
        Accept first number as NO1
        Accept first number as NO2
        Create the variable as Ans to store  the result
        Perform the addition and store into Ans
        Display the result from Ans
    END    

*/
/////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////
//
// Step 3 :Decide the programming language
//         We select c programming
//
////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////
//
// Step 4 :Write the program
///////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////
//  
//  Function Name   :   Addition 
//  Input           :   Integer, Integer 
//  Output          :   Integer
//  Description     :   Performs addition
//  Date            :   04/10/2026
//  Author          :   Sai Bhosale
//
///////////////////////////////////////////////////////////////////

int Addition(int iNo1 , int iNo2)
{
    int iAns = 0;

    iAns = iNo1 + iNo2;  //Business logic

    return iAns;
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{ 
    int iValue1 = 0, iValue2 = 0, iResult = 0;  //integer

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1 , iValue2);    

    printf("Addition is : %d\n",iResult);
    return 0;
}