/*
4. Accept N numbers from user and return frequency of 11 form it.
Input : N : 6
 Elements : 85 66 3 15 93 88
Output : 0
Input : N : 6
 Elements : 85 11 3 15 11 111
Output : 2
Program Layout :
*/
#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[], int iLength)
{
    // Logic
    int i=0;
    int iCnt=0;

    if((Arr==NULL) || iLength==0)
    {
        return -1;
    }
    for(i=0;i<iLength;i++)
    {
        if((*Arr)==11) //We can write this as if(Arr[i]==11)
        {
            iCnt++;
        }
        Arr++;
    }
    return iCnt;
}
int main()
{
    int iSize = 0,iCnt = 0, iRet = 0;
    int *p = NULL;
    printf("Enter number of elements\n");
    scanf("%d",&iSize);
    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements \n",iSize);
    for(iCnt = 0;iCnt<iSize; iCnt++)
    {
        printf("Enter element Number  %d :",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = Frequency(p, iSize);
    if(iRet==-1)
    {
        printf("WRONG INPUT BYE BYE..");
    }
    else
    {
        printf("%d",iRet);
    }
    free(p);
    return 0;
} 