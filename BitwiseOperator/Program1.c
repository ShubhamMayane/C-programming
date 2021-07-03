/*
1.Write a program which checks whether 15th bit is On or OFF.
Solution :
*/
#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0
BOOL ChkBit(UINT iNo)
{
    unsigned int iMask=0x00004000; //binay is :0000 0000 0000 0000 0100 0000 0000 0000
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
        printf("15th bit is on\n");

    }
    else
    {
        printf("15th bit is Off\n");
    }
}