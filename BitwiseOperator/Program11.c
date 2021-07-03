/*
1.Write a program which accept one number and position from user and
check whether bit at that position is on or off. If bit is one return TURE
otherwise return FALSE.
Input : 10 2
Output : TRUE
*/
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos)
{
    unsigned int iMask=0x00000001;
    unsigned int iResult=0;
    iMask=iMask<<(iPos-1); //Because bit starts with 0 index

    iResult=iNo&iMask;

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
    int iBit_Position=0;
    BOOL bRet;

    printf("Enter the Number\n");
    scanf("%u",&iValue);

    printf("Enter the Bit Position\n");
    scanf("%d",&iBit_Position);

  bRet=ChkBit(iValue,iBit_Position);

  if(bRet==TRUE)
  {
      printf("Bit at postion %d is On\n",iBit_Position);

  }
  else
  {
       printf("Bit at postion %d is Off\n",iBit_Position);
  }

  return 0;


}