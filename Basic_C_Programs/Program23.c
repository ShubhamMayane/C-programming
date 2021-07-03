/*3.Write a program which accept number from user and display all its non factors.
    Input : 12
    Output : 5 7 8 9 10 11
    Input : 13
    Output : 2 3 4 5 6 7 8 9 10 11 12
    Input : 10
    Output : 3 4 6 7 8 9
*/
#include<stdio.h>
void NonFact(int iNo)
{
    int iFactor=0;

    for(iFactor=1;iFactor<=iNo;iFactor++)
    {
        if(iNo%iFactor!=0)
        {
            printf("%d \t",iFactor);

        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    NonFact(iValue);
    return 0;
}