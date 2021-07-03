/*
    2. Write a program which accept string from user and count number of
    small characters.
    Input : “Marvellous”
    Output : 9
*/
#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;
    printf("Insilde CountSmall\n");

    if(str==NULL)
    {
        return -1;
    }
  
    while(*str != '\0')
    {
        if((*str>='a')&&(*str<='z'))
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
    int iRet = 0; 
    printf("Enter string\n");
    scanf("%[^’\n’]s",arr);
    iRet = CountSmall(arr);
    if(iRet==-1)
    {
        printf("Wrong Input Bye Bye...\n");

    }
    else
    {
        printf("%d",iRet);
    }
    return 0;
} 