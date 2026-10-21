#include<stdio.h>
#include<stdlib.h>

void Displayfactors(int iNo)
{
  int iCnt = 0 ;
  printf("Factors of %d are : \n",iNo);

  for(iCnt = 1; iCnt < iNo/2; iCnt++)

    { if ((iNo % iCnt) == 0 )
      {
      printf("%d\n",iCnt);
      }
    }
}
int main()
{
    int iValue = 0;
    

    printf("Enter number : \n");
    scanf("%d",&iValue);
 
    Displayfactors(iValue);
    
    
    return EXIT_SUCCESS;
}

//Time complexity : O(N/2)