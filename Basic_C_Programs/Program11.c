/*1.Write a program which accept one number from user and print that number of
even numbers on screen.
Input : 7
Output: 2 4 6 8 10 12 14
*/

#include<stdio.h>

void PrintEven(int iNo)
{
    int counter=0;
    int number=0;
    if(iNo <= 0)
    {
        return;
    }

    //initialization
    counter=1;
    number=1;

   while (counter<=iNo)
   {
       if(number%2==0)
       {
           printf("%d\t",number);
           counter++;
       }

       number++;
   }
   

   
}
int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    PrintEven(iValue);
    return 0;
}