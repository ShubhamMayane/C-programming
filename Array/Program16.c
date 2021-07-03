/*
1. Accept N numbers from user and return the largest number.
Input : N : 6
 Elements : 85 66 3 66 93 88
Output : 93
Program Layout :
*/
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

int Maximum(int Arr[], int iLength)
{
    int i=0;
    int iMax=0;
    if((Arr==NULL)||(iLength==0))
    {
        printf("Wrong Output\n");
        return -1;    
    }
    iMax=Arr[0];

    for(i=1;i<iLength;i++)
    {
        if(Arr[i]>iMax)
        {
            iMax=Arr[i];
        }
    }
    return iMax;
}
int main()
{
    int iSize = 0,iCnt = 0, iValue = 0, iRet = 0;
    int *p = NULL;
    printf("Enter number of elements\n");
    scanf("%d",&iSize);

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
    iRet = Maximum(p, iSize);
    if(iRet==-1)
    {
        printf("Wrong Input Bye Bye...\n");
    }
    else
    {
        printf("Largest Number is %d",iRet);
    }
    free(p);
    return 0;
}