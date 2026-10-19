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

int main()
{ 
    int iValue1, iValue2, iResult;  //integer

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    iResult = iValue1 + iValue2;    //Business Logic

    printf("%d\n",iResult);
    return 0;
}


