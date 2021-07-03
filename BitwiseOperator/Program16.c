/*
1.Write a program which accept one number from user and count number of
ON (1) bits in it without using % and / operator.
Input : 11
Output : 3
*/
#include<stdio.h>
typedef unsigned int UINT;

int CountOne(UINT iNo)
{
 // Logic
    UINT iMask=0x00000001;
    UINT iResult=0;
    int iCnt=0;
    int i=0;

    for(i=1;i<=32;i++)
    {
        iResult =iNo & iMask;
        if(iResult==iMask)
        {
            iCnt++;
        }
        iMask=iMask<<1;
    }
    return iCnt;

} 
int main()
{
    UINT iValue=0;
    int iRet=0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet=CountOne(iValue);
    
    printf("Number of on bits in given Number's Binary is %d",iRet);
    
    return 0;
}