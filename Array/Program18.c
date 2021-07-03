/*
3.
Accept N numbers from user and return the difference between largest
and smallest number.
Input : N : 6
Elements : 85 66 3 66 93 88
Output : 90 (93 -3)
Program Layout :
*/
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
int Difference(int Arr[], int iLength)
{
    // Logic
    int iMax=0;
    int iMin=0;
    int i=0;
    if((Arr==NULL)|| (iLength==0))
    {
        return -1;

    }
    
    iMax=Arr[0];
    iMin=Arr[0];

    for(i=0;i<iLength;i++)
    {
        if(Arr[i]>iMax)
        {
            iMax=Arr[i];
        }
        if(Arr[i]<iMin)
        {
            iMin=Arr[i];
        }
    }
    return (iMax-iMin);
    
}
int main()
{
    int iSize = 0,iRet = 0,iCnt = 0, iValue = 0;
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
    for(iCnt=0; iCnt<iSize ; iCnt++)
    {
        printf("Enter element Number %d :",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = Difference(p, iSize);

    printf("Difference is %d",iRet);
 
    free(p);
    return 0;
} 