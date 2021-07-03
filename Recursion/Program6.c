/*
1. Write a recursive program which display below pattern.
Input : 5
Output : * * * * *
Prototype :
*/
#include<stdio.h>

void Display(int iNo)
{
    static int i=1;
    if(i<=iNo)
    {
        printf("*\t");
        i++;
        Display(iNo);
    }

}
int main()
{
int iValue = 0;
printf("Enter number\n");
scanf("%d",&iValue);
Display(iValue);
return 0;
}