/*
5. Accept N numbers from user and display summation of digits of each
number.
Input : N : 6
 Elements : 8225 665 3 76 953 858
Output : 17 17 3 13 17 21
Program Layout :
*/

#include<stdio.h>
#include<stdlib.h>
void DigitsSum(int Arr[], int iLength)
{
    int iSum=0;
    int i=0;
    int iNumber=0;
    int iDigit=0;
    for(i=0;i<iLength;i++)
    {
        iNumber=Arr[i];
        iDigit=0;
        iSum=0;

        while(iNumber>0)
        {
            iDigit = iNumber % 10;
            iSum=iSum+iDigit;
            iNumber=iNumber/10;
        }

        printf("%d \t",iSum);
    }

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
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements \n",iSize);
    for(iCnt = 0;iCnt<iSize; iCnt++)
    {
        printf("Enter element Number %d :",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    DigitsSum(p, iSize);

    free(p);
    return 0; 
}