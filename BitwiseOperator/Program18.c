/*
3. Write a program which accept one number from user and check whether
9th or 12th bit is on or off.
Input : 257
Output : TRUE
*/

#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
 UINT iMask1=0x00000100; //for 9th  bit
 UINT iMask2=0x00000800;//for  12th bit
 UINT iMask=iMask1 | iMask2; //Combining above both iMask
 UINT iResult=0;

 iResult=iNo & iMask;//checking both bits are on or off

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
    UINT iValue=0;
    BOOL bRet=0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    bRet=ChkBit(iValue);
    

    if(bRet==TRUE)
    {
        printf("9th and 12 th bits are ON of Number %d\n",iValue);
    }
    else
    {
        printf("9th and 12 th bits are OFF of Number %d\n",iValue);

    }
    
    
    return 0;
}