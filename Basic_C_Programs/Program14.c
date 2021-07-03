/*4. Accept one character from user and convert case of that character.
Input : a Output : A
Input : D Output : d

*/

#include<stdio.h>

void DisplayConvert ( char cValue)
{
if((cValue>=65) &&(cValue<=90)) //small case characters
{

    printf("You have entered Upper case letter\n");
    cValue=cValue+32;// conversion of uppercase to lower case
    printf("smaller case : %c\n" ,cValue);

}
else if((cValue>=91) &&(cValue<=122))
{
    printf("You have entered smaller case letter\n");
    cValue=cValue-32;// conversion of lowercase to uppercase    
    printf("Uppercase is: %c\n" ,cValue);
}
}
int main()
{
    char cValue = '\0';
    printf("Enter character\n");
    scanf("%c",&cValue);
    DisplayConvert(cValue );
    return 0;
}