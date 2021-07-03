/*
1. Accept N numbers from user and accept one another number as NO ,
check whether NO is present or not.
Input : N : 6
 NO: 66
 Elements : 85 66 3 66 93 88
Output : TRUE
Input : N : 6
 NO: 12
 Elements : 85 11 3 15 11 111
Output : FALSE

Program Layout :
*/
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Check(int Arr[], int iLength, int iNo)
{
    int i=0;
    
    if(Arr==NULL || iLength==0)
    {
        return FALSE;
    }

    for(i=0;i<iLength;i++)
    {
        if((*Arr)==iNo)
        {
            break;
        }
        Arr++;
    }

    if(i==iLength)
    {
        return FALSE; 
    }
    else
    {
        return TRUE;
    }
}
int main()
{
    int iSize = 0,iRet = 0,iCnt = 0, iValue = 0;
    int *p = NULL;
    BOOL bRet = FALSE;
    printf("Enter number of elements\n");
    scanf("%d",&iSize); 
    printf("Enter the number\n");
    scanf("%d",&iValue);
    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements\n",iSize);
    for(iCnt = 0;iCnt<iSize; iCnt++)
    {
        printf("Enter element Number %d :",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    bRet = Check(p, iSize,iValue);

    if(bRet == TRUE)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is not present");
    }
    free(p);
    return 0;
}