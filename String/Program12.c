/*
2.Write a program which accept string from user and accept one
character. Return frequency of that character.
Input : “Marvellous Multi OS”
 M
Output : 2
Input : “Marvellous Multi OS”
 W
Output : 0
*/

#include<stdio.h>

int CountChar(char *str, char ch)
{
 // Logic
    int iCnt=0;
    if(str==NULL || ch=='\0')//input filter
    {
        printf("Invalid Input\n");
        return -1;
    }
     while(*str!='\0')
     {
        if(*str==ch)
        {
            iCnt++;
        }
        str++;
     }
          
    return iCnt;
}
int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);
    printf("Enter the character\n");
    scanf(" %c",&cValue);
    iRet = CountChar(arr, cValue);
    if(iRet==-1)
    {
        printf("Invalid Input Bye Bye");
    }
    else
    {
    printf("Character frequency is %d",iRet);
    }
    return 0;
} 