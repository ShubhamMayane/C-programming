/*
2. Write a program which accept two numbers from user and display position
of common ON bits from that two numbers.
Input : 10 15 (1010 1111)
Output : 2 4
*/

#include<stdio.h>
typedef unsigned int UINT;

void CommonBits(UINT iNo1, UINT iNo2)
{
    //logic
    UINT iMask=0x00000001;
    UINT iResult_1=0;
    UINT iResult_2=0;
    int i=0;

    for (i = 1; i <=32; i++)
    {
        iResult_1=iNo1 & iMask;
        iResult_2=iNo2 & iMask;

        if((iResult_1==iMask) && (iResult_2==iMask))
        {
            printf("%d \t",i);

        }
        iMask=iMask<<1;
    }
    


} 


int main()
{
    UINT iValue1=0;
    UINT iValue2=0;
    int iRet=0;

    printf("Enter the Number1\n");
    scanf("%d",&iValue1);

    printf("Enter the Number2\n");
    scanf("%d",&iValue2);

    CommonBits(iValue1,iValue2);
    
    
    return 0;
}