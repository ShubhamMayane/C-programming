/*
1. Accept N numbers from user and return difference between summation
of even elements and summation of odd elements.
Input : N : 6
 Elements : 85 66 3 80 93 88
Output : 53 (234 - 181)

Program Layout :
*/
#include<stdio.h>
#include <stdlib.h>
int Difference(int Arr[], int iLength)
{
    int i=0;
    int iSumOfEven=0;
    int iSumOfOdd=0;
    
    //Input Filter
    if((Arr==NULL)||(iLength==0))
    {
        return -1;
    }

    for(i=0;i<iLength;i++)
    {
        if(Arr[i]%2==0)
        {
            iSumOfEven=iSumOfEven+Arr[i];
        }
        else
        {
            iSumOfOdd=iSumOfOdd+Arr[i];
        }

    }
     return(iSumOfEven-iSumOfOdd);
}
int main()
{
 int iSize = 0,iRet = 0,iCnt = 0;
 int *p = NULL;
 printf("Enter number of elements\n");
 scanf("%d",&iSize);
 p = (int *)malloc(iSize * sizeof(int));
 if(p == NULL)
 {
 printf("Unable to allocate memory\n");
 return -1;
 }
 printf("Enter %d elements\n",iSize);
 for(iCnt = 0;iCnt<iSize; iCnt++)
 {
 printf("Enter element Number %d :",iCnt+1);
 scanf("%d",&p[iCnt]);
 }
 iRet = Difference(p, iSize);

 printf("Result is %d",iRet);
 free(p);
 return 0;
} 