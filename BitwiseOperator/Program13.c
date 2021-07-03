/*3. Write a program which accept one number and position from user and on
 that bit. Return modified number.
Input : 10 3
Output : 14
*/
#include<stdio.h>
typedef unsigned int UINT;


UINT OnBit(UINT iNo, int iPos)
{
    UINT iMask=0x00000001;
    UINT iResult=0;
    iMask=iMask<<(iPos-1);//because our bit index is stars from zero
    iResult=iNo | iMask;
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
 
    iRet=OnBit(iValue,iBit_Position);

    iValue=iRet;

    printf("After 'On ' bit of %d position, Updated value of  iValue is : %u",iBit_Position,iValue);



    return 0;
}