/*1. Write a recursive program which accept number from user and display below
pattern.
Input : 5
Output : 5 * 4 * 3 * 2 * 1 *
Prototype :
*/
#include<stdio.h>
//function with using iteration
void DisplayI(int iNo)
{
    while(iNo>0)
    {
        printf("%d\t*\t",iNo);
        iNo--;       
    }
    
}
//function with using recursion
void DisplayR(int iNo)
{   
    if(iNo>0)
    {
        printf("%d\t*\t",iNo);
        iNo--;     
        DisplayR(iNo);
    }

} 

int main()
{
DisplayI(5);
printf("\n");
DisplayR(5);

}