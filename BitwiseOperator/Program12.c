/*
2. Write a program which accept one number and position from user and off
that bit. Return modified number.
Input : 10 2
Output : 8
*/
#include<stdio.h>
typedef unsigned int UINT;

UINT OffBit(UINT iNo, int iPos)
{
   UINT iMask=0x00000001;//Binary is : 0000 0000 0000 0000 0000 0000 0000 0001
   UINT iResult=0;

   iMask=iMask<<(iPos-1);//for example iMask<<2 means 0000 0000 0000 0000 0000 0000 0000 0100

   iMask=~iMask; //this step is needed when you want to try to off the bit.it comes in my mind after dryrun/
   iResult =iNo & iMask;
  


    return iResult;


}

int main()
{
    UINT iValue=0;
    UINT iRet=0;
    int iBit_Position=0;

    printf("Enter the Number\n");
    scanf("%u",&iValue);

    printf("Enter the Bit Position \n");
    scanf("%u",&iBit_Position);

    iRet=OffBit(iValue,iBit_Position);


    printf("After Update iValue is : %u",iRet);



    return 0;
}