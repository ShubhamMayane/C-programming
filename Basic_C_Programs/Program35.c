// 5.Write a program which accept number from user and return difference between 
//summation of even digits and summation of odd digits.
// Input : 2395
// Output : -15 (2 - 17)
// Input : 1018
// Output : 6 (8 - 2)
// Input : 8440
// Output : 16 (16 - 0)
// Input : 5733
// Output : -18 (0 - 18)

#include<stdio.h>
int CountDiff(int iNo)
{
    int iSumOfEvenDigit=0;
    int iSumOfOddDigit=0;
    int iDigit=0;

    if(iNo<0)
    {
        iNo=-(iNo);
    }

    if(iNo==0)
    {
        return 1;
    }

    while (iNo>0)
    {
        iDigit=iNo%10;
        if((iDigit%2)==0)
        {
            iSumOfEvenDigit=iSumOfEvenDigit+iDigit;
        }
        else if((iDigit%2)!=0)
        {
            iSumOfOddDigit=iSumOfOddDigit+iDigit;
        }
        iNo=iNo/10;
    }
    
    return (iSumOfEvenDigit-iSumOfOddDigit);
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet = CountDiff(iValue);
    printf("%d",iRet);
    return 0;
}