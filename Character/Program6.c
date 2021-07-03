/*
1. Write a program which displays ASCII table. Table contains symbol,
Decimal, Hexadecimal and Octal representation of every member from
0 to 255.
*/
#include<stdio.h>
void DisplayASCII()
{
    int i=0;

     printf("Decimal \t Hexadecimal \t Character \n");

    for ( i = 0; i <=127; i++)
    {
      printf("%d \t\t %x \t\t %c \n",i,i,i);
    }
 
}
int main()
{
 DisplayASCII();

 return 0;
}