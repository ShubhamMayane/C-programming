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
    int iSumOfFactor=0;
    int iSumOfNonFactor=0;

    int iFactor=0;

    //logic for calculatinf sum of factors of  iNo.
    for(iFactor=1;iFactor<=iNo/2;iFactor++)
    {
        if((iNo%iFactor)==0)
        {
            iSumOfFactor=iSumOfFactor+iFactor;
        }

    }

     //logic for calculatinf sum of Non-factors of  iNo.
    for(iFactor=1;iFactor<=iNo;iFactor++)
    {
        if((iNo%iFactor)!=0)
        {
            iSumOfNonFactor=iSumOfNonFactor + iFactor;
        }

    }

    return (iSumOfFactor-iSumOfNonFactor);

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