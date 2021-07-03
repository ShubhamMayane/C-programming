/*
5. Write a recursive program which accept number from user and return its
reverse number.
Input : 523
Output : 325
Prototype :
*/
#include<stdio.h>
#include<stdlib.h>

//Using iteration
int ReverseI(int iNo)
{
    // Logic
    int iDigit=0;
    int iReverse=0;
    while (iNo!=0)
    {
        iDigit= iNo % 10;
        iReverse = iReverse * 10 + iDigit;
        iNo =iNo/10;
    }

    return iReverse;
}

//Using Recursion
int ReverseR(int iNo)
{
    // Logic
    int iDigit=0;
    static int iReverse=0;

    if(iNo!=0)
    {   
        iDigit= iNo % 10;
        iReverse = iReverse * 10 + iDigit;
        iNo =iNo/10;
        ReverseR(iNo);
    }
    return iReverse;

}

int main()
{
    int* iValue=NULL;
    int iRet=0;

    iValue=(int*)malloc(sizeof(int));

    printf("Enter the Number\n");
    scanf("%d",iValue);

    iRet=ReverseI(*iValue);
    printf("Using Iteration,Reverse of Given Number is : %d\n",iRet);

    iRet=ReverseR(*iValue);
    printf("Using Recursion,Reverse of Given Number is : %d\n",iRet);
    

    return 0;


}