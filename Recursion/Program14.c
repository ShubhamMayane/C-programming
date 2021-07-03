/*
4. Write a recursive program which accept number from user and return its
factorial.
Input : 5
output : 120

the factorial of 6 is 1*2*3*4*5*6 = 720
Prototype :
*/
#include<stdio.h>
#include<stdlib.h>

//with using iteration
int FactI(int iNo)
{   
    int i=1;
    int iFact=1;
    while (i<=iNo)
    {       
        iFact=iFact*i;
        i++;
    }
    return iFact;
}
//with using iteration
int FactR(int iNo)
{   
   static int i=1;
   static int iFact=1;
   while (i<=iNo)
   {
       iFact=iFact*i;
       i++;
       FactR(iNo);
   }
    return iFact;
}
int main()
{
 int* iValue = NULL;
 int iRet = 0;
 
 iValue=(int *)malloc(sizeof(int));

 printf("Enter number\n");
 scanf("%d",iValue);
 iRet = FactI(*iValue);
 printf("Calculating fact using Iteration :%d\n",iRet);

 iRet = FactR(*iValue);
 printf("Calculating fact using Iteration :%d\n",iRet);
    
 return 0;
} 