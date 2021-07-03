/*
5. Write a recursive program which accept number from user and return its
product of digits.
Input : 523
Output : 30
Prototype :
*/

#include<stdio.h>
#include<stdlib.h>

//with using Iteration
int MultI(int iNo)
{
    int iDigit=0;
    int iMultiplication=1;
    while (iNo!=0)
    {
        iDigit=iNo%10;
        iMultiplication=iMultiplication*iDigit;
        iNo=iNo/10;
    }
    return iMultiplication;
    
}
//with using Recursion
int MultR(int iNo)
{
   int iDigit=0;
   static int iMultiplication=1;
    if(iNo!=0)
    {
        iDigit=iNo% 10;
        iMultiplication=iMultiplication * iDigit;
        iNo=iNo/10;
        MultR(iNo);
    }
    return iMultiplication;
}


int main()
{
 int iValue = 0, iRet = 0;
 printf("Enter number\n");
 scanf("%d",&iValue);
 
 iRet = MultI(iValue);
 printf("Using Iteration :%d\n",iRet);

 iRet = MultR(iValue);
 printf("Using Recursion :%d\n",iRet);

 return 0;
} 