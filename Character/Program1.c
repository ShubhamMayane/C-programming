/*
1. Accept Character from user and check whether it is alphabet or not
(A-Z a-z).
Input : F
Output : TRUE
Input : &
Output : FALSE
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkAlpha(char ch)
{
 //logic
    if((ch>='A'&& ch<='Z')||(ch >='a'&& ch<='z'))
     //here you can write this condition also if(ch>='A'&& ch<='z')
    {
        return TRUE;

    }
    else
    {

        return FALSE;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    printf("Enter the character\n");
    scanf("%c",&cValue);
    bRet = ChkAlpha(cValue);
    if(bRet == TRUE)
    {
        printf("It is Character");
    }
    else
    {
        printf("It is not a Character");
    }

    return 0;
} 