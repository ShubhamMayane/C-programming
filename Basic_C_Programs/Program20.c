/*5.Write a program which accept number from user and return difference between
summation of all its factors and non factors.

Input : 12
Output : -34 (16 - 50)
Input : 10
Output : -29 (8 - 37)
*/
#include<stdio.h>
int FactDiff(int iNo)
{
    int iFactor=0;
    int iSumOfFactors=0;
    int iSumOfNonFactors=0;

    for(iFactor=1;iFactor<=iNo/2;iFactor++)
    {
        if(iNo%iFactor==0)
        {
            iSumOfFactors=iSumOfFactors+iFactor;
        }
    }
    for(iFactor=1;iFactor<=iNo;iFactor++)
    {
        if(iNo%iFactor!=0)
        {
            iSumOfNonFactors=iSumOfNonFactors+iFactor;
        }
    }

    return iSumOfFactors-iSumOfNonFactors;



}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet = FactDiff(iValue);
    printf("%d",iRet);
    return 0;
}