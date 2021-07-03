/*1.Write a program which accept number from user and display its multiplication of
factors.
Input : 12
Output : 144 (1 * 2 * 3 * 4 * 6)
Input : 13
Output : 1 (1)
Input : 10
Output : 10 (1 * 2 * 5)
*/
#include<stdio.h>
int MultFact(int iNo)
{
    int iMultiplication=1;
    int factor=0;

    if(iNo<0) //input updator //converting negative number to positive number...
    {
        iNo=-(iNo);
    }
    for(factor=1;factor<=iNo/2;factor++)  //TIME COMPLEXITY IS : O(N/2)
    {
        if((iNo%factor)==0)
        {
            iMultiplication=iMultiplication*factor;

        }

    }
    return iMultiplication;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet = MultFact(iValue);
    printf("%d",iRet);
    return 0;
}