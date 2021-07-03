/*4.Write a program which accept number from user and return summation of all its non factors.
    Input : 12
    Output : 50
    Input : 10
    Output : 37
*/
#include<stdio.h>
int SumNonFact(int iNo)
{
    //code 

    int iSum=0;
    int iFactor=0;

    for(iFactor=1;iFactor<=iNo;iFactor++)
    {
        if((iNo%iFactor)!=0) // logic for identify non factors
        {
        iSum=iSum+iFactor;
        }
    }

    return iSum;

}
int main()
{
int iValue = 0;
int iRet = 0;
printf("Enter number\n");
scanf("%d",&iValue);
iRet = SumNonFact(iValue);
printf("%d",iRet);
return 0;
}