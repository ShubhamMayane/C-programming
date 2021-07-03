/*
1.Write a program which accept one number from user and off 7th bit of that
number if it is on. Return modified number.
Input : 79
Output : 15
*/
#include<stdio.h>

typedef unsigned int UINT;
UINT OffBit(UINT iNo)
{
    // Logic
    UINT iMask=0x00000080;
    UINT iResult=0;

    iMask=~iMask; //1111 1111 1111 1111 1111 1111 0111 1111
    iResult=iNo & iMask;

    return iResult;

}
int main()
{
    UINT iValue=0;
    UINT iRet=0;

    printf("Enter Number\n");
    scanf("%u",&iValue);

    iRet=OffBit(iValue);

    printf("Updated number is : %u",iRet);
    
    return 0;
}