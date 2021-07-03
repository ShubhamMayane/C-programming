/*
4.Write a recursive program which display below pattern.
Output : A B C D E F
*/
#include<stdio.h>

void Display()
{
    static char ch='A';
    if(ch<='F')
    {
        printf("%c",ch);
        ch++;
        Display();
    }
    
}
int main()
{
Display();
return 0;
}