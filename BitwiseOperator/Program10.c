/*
5. Write a program which accept one number from user and on its first 4
bits. Return modified number.
Input : 73
Output : 79
*/
#include<stdio.h>
typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    UINT iMask=0x0000000F;//Binary 0000 0000 0000 0000 0000 0000 0000 1111
    UINT iResult=0;
    iResult=iNo | iMask;

    return iResult;
}

int main()
{
    UINT iValue=0;
    UINT iRet=0;

    printf("Enter Number\n");
    scanf("%u",&iValue);

    iRet= OnBit(iValue);

    printf("Updated number is : %u",iRet);
    
    return 0;
}