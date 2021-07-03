/*
5.Write a program which checks whether first and last bit is On or
OFF. First bit means bit number 1 and last bit means bit number 32.
Solution :
*/
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0
BOOL ChkBit(UINT iNo)
{
    unsigned int iMask=0x80000001;
    unsigned int iResult=0;

    iResult=iNo & iMask;

    if(iResult==iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
} 
int main()
{
    unsigned int iValue=0;
    BOOL iRet=0;

    printf("Enter Number\n");
    scanf("%u",&iValue);

    iRet=ChkBit(iValue);

    if(iRet==TRUE)
    {
       printf("1st and 32th  bits are On\n");
    }
    else
    {
        printf("1st and 32th  bits are Off\n");
    }
}
