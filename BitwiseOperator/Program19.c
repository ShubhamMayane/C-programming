/*

4. Write a program which accept one number , two positions from user and
check whether bit at first or bit at second position is ON or OFF.
Input : 10 3 7
Output : TRUE 
*/

#include<stdio.h>
typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos1, int iPos2)
{
    UINT iMask1=0x000000001;
    UINT iMask2=0x000000001;
    UINT iMask=0;

    iMask1=iMask1<<(iPos1-1); //iMask1 According to position1
    iMask2=iMask2<<(iPos2-1); //iMask2 According to  position2

    iMask=iMask1 | iMask2;//Combining above iMask1 and iMask2

    if(iNo & iMask)
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
    int iBit_Position1=0;
    int iBit_Position2=0;
    BOOL bRet;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    printf("Enter bit_position number 1\n");
    scanf("%d",&iBit_Position1);

    printf("Enter bit_position number 2\n");
    scanf("%d",&iBit_Position2);
    

    bRet=ChkBit(iValue,iBit_Position1,iBit_Position2);
    

    if(bRet==TRUE)
    {
        printf("%dth and %dth bits are ON of Number %d\n",iBit_Position1,iBit_Position2,iValue);
    }
    else
    {
     printf("%dth and %dth bits are OFF of Number %d\n",iBit_Position1,iBit_Position2,iValue);

    }
    
    
    return 0;
}