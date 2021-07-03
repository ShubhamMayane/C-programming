/*
3. Write a program which accept one number from user and toggle 7th bit of
that number. Return modified number.
Input : 137
Output : 201
*/
#include<stdio.h>
typedef unsigned int UINT;


UINT ToggleBit(UINT iNo)    
{
    UINT iMask=0x00000080;//Binary is 0000 0000 0000 0000 0000 0000 1000 0000
    UINT iResult=0;

    iResult=iNo ^ iMask; //Xor operator

    return iResult;

} 
int main()
{
    UINT iValue=0;
    UINT iRet=0;

    printf("Enter Number\n");
    scanf("%u",&iValue);

    iRet=ToggleBit(iValue);

    printf("Updated number is : %u",iRet);
    
    return 0;
}