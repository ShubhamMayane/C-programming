/*
5. Accept N numbers from user and return product of all odd elements.
Input : N : 6

 Elements : 15 66 3 70 10 88
Output : 45
Input : N : 6

 Elements : 44 66 72 70 10 88
Output : 0 
Program Layout :
*/
#include<stdio.h>
#include<stdlib.h>
int Product(int Arr[], int iLength)
{
 int i=0;
 int iMultiplication=1;

 if(Arr==NULL || iLength==0)
 {
     return -1;
 }
 for(i=0;i<iLength;i++)
 {
     if((Arr[i]%2)!=0)
     {
         iMultiplication=iMultiplication*Arr[i];
     }
 }
 return iMultiplication;
}
int main()
{
    int iSize = 0,iCnt = 0,iRet = 0;
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
        printf("Enter element Number %d :",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = Product(p, iSize);
    if(iRet==-1)
    {
        printf("Wrong input Bye Bye...\n");
    }
    else
    {
    printf("Product is %d",iRet);
    }
    free(p);
    return 0;
} 