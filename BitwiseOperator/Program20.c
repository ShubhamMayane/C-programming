/*
5. Write a program which accept one number from user and range of
positions from user. Toggle all bits from that range.
Input : 897 9 13
Toggle all bits from position 9 to 13 of input number ie 879.
*/
#include<stdio.h>
typedef unsigned int UINT;


UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
 UINT iMask=0x00000001;
 UINT iResult=0;

 iMask=  iMask<<(iStart-1);

 for(int i=iStart;i<=iEnd;i++)
 {
     iResult=iNo ^ iMask;    //  0000 0000 0000 0000 0000 0000 0001 0000 
     iMask=iMask<<1;
 }

 return iResult;


}

int main()
{
    UINT iValue=0;
    UINT iRet=0;

    int iStart=0;
    int iEnd=0;


    printf("Enter the Number\n");
    scanf("%u",&iValue);

    printf("Enter starting Point\n");
    scanf("%d",&iStart);

    printf("Enter the end Point\n");
    scanf("%d",&iEnd);

    

    iRet=ToggleBitRange(iValue,iStart,iEnd);
    
    printf("After toggle bit between poisiton %d and %d ,Updated Number is %d",iStart,iEnd,iRet);
    
    return 0;
}