/*
3.Write a program which accept string from user and toggle the case.
(conver lowercase into upper case and uppercase into lowercase)
Input : “Marvellous Multi OS”
Output : mARVELLOUS mULTI os
*/
#include<stdio.h>

void strtogglex(char *str)
{
    while(*str!='\0')
    {
        if(*str>='A' && *str<='Z')
        {
            *str=*str+32;
        }
        else if(*str>='a'&& *str<='z')
        {
            *str=*str-32;
        }
        str++;
    }
}
int main()
{
    char arr[20];
    printf("Enter string\n");
    scanf("%[^'\n']s",arr);
    strtogglex(arr);
    printf("Modified string is %s",arr);
    return 0;
}