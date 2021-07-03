/*4. 
Write a program which accept one number from user and toggle 7th and
10th bit of that number. Return modified number.
Input : 137
Output : 713
*/
#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask=0x00000480;//Binary is: 0000 0000 0000 0000 0000 0010 0100 0000
    UINT iResult=0;

    iResult=iNo ^ iMask;

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