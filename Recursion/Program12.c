/*
2. Write a recursive program which accept number from user and return
summation of its digits.
Input : 879
Output : 24
Prototype :
*/
#include<stdio.h>

//Funtion with using Iteration
int SumI(int iNo)
{   
    int iDigit=0;
    int iSum=0;

    while (iNo!=0)
    {
        iDigit=iNo%10;
        iSum=iSum+iDigit;
        iNo=iNo/10;
    }
    return iSum;
    

}

//Funtion with using Recursion
int SumR(int iNo)
{
    static int iSum=0;
    int iDigit=0;
    if (iNo!=0)
    {
        iDigit=iNo%10;
        iSum=iSum+iDigit;
        iNo=iNo/10;
        SumR(iNo); 
    }
    
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet = SumI(iValue); //calling funtion which is using Iteration
    printf("%d\n",iRet);

    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet = SumR(iValue);//calling a funtion which is uses Recursion
    printf("%d\n",iRet);

    return 0; 
}