/*

4. Write a program which accept string from user and display only
digits from that string.
Input : “marve89llous121”
Output : 89121
Input : “Demo”
Output :
*/

#include<stdio.h>

void DisplayDigit(char *str)
{
    int iCnt=0;
    if(str==NULL) //input filter
    {
        printf("Wrong input..bye..bye\n");
        return;
    }
    
    while(*str!=0)
    {
        if(*str>='0'&& *str<='9')
        {
            printf("%c",*str);        
            iCnt++;
        }
        str++;
    }
    if (iCnt==0)
    {
        printf("There is digits in string\n");
    }
}
int main()
{
    char arr[20];
    printf("Enter string\n");
    scanf("%[^'\n']s",arr);
    DisplayDigit(arr);
    return 0;
}