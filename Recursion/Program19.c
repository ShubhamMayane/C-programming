/*
4. Write a recursive program which accept number from user and return
smallest digit
Input : 87983
Output : 3
Prototype :
*/

#include<stdio.h>
#include<stdlib.h>

int iMin=0;

int MinI( int iNo)
{
    int iDigit=0;
    int iMin=iNo%10;

    while(iNo!=0)
    {
        iDigit = iNo % 10;
        if(iDigit<iMin)
        {
            iMin=iDigit;
        }
        iNo=iNo/10;
    }
    return iMin;

} 

int MinR(int iNo)
{
    int iDigit=0;
    static int CallCount=1;

    if(CallCount==1)
    {
        iMin=iNo%10;
    }

    if(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit<iMin)
        {
            iMin=iDigit;
        }
        iNo=iNo/10;
        CallCount++;
        MinR(iNo);
    }
    return iMin;
} 

int main()
{
    int * iValue=NULL;
    int iRet=0;
    
    iValue=(int *)malloc(sizeof(int));

    printf("Enter the Number\n");
    scanf("%d",iValue);

    iRet=MinI(*iValue);
    printf("Using Iteration,Minimum digit in given number is %d \n",iRet);

    
    iRet=MinR(*iValue);
    printf("Using Recursion,Minimum digit in given number is %d \n",iRet);


    return 0;

}