/*
2. Write a recursive program which accept number from user and return
largest digit
Input : 87983
Output : 9
Prototype :
*/

#include<stdio.h>
#include<stdlib.h>


//using Iteration
int MaxI(int iNo)
{   
    int iDigit=0;
    int iMax=0;

    while(iNo!=0)
    {   
        iDigit= iNo %10;
        if(iDigit>iMax)
        {
            iMax=iDigit;
        
        }
        iNo=iNo/10;
    }
    return iMax;
}


//using Recursion
int MaxR(int iNo)
{
    static int iMax=0;
    int iDigit=0;
    if(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit>iMax)
        {
            iMax=iDigit;
        }
        iNo=iNo/10;
        MaxR(iNo);
    }
    return iMax;

}

int main()
{
    int* iValue=NULL;
    int iRet=0;
    iValue=(int *)malloc(sizeof(int));

    printf("Enter number \n");
    scanf("%d",iValue);

    iRet=MaxI(*iValue);
    printf("Using Iteration Maximum digit in %d number is %d \n",*iValue,iRet);
    
    
    iRet=MaxR(*iValue);
    printf("Using Recursion Maximum digit in %d number is %d \n",*iValue,iRet);
    


}