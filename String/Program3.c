/*
3. Write a program which accept string from user and return
difference between frequency of small characters and frequency of
capital characters.
Input : “MarvellouS”
Output : 6 (8-2)
*/
#include<stdio.h>

int Difference(char *str)
{
    int iSmallCnt = 0;
    int iCaptitalCnt=0;
    
    if(str==NULL)
    {
        return -1;
    }
    
    while(*str != '\0')
    {
        if(*str>='A'&&*str<='Z')
        {
            iCaptitalCnt++;
        }
        else
        {
            iSmallCnt++;
        }
        str++;
    }
    return iSmallCnt-iCaptitalCnt;
} 
int main()
{
    char arr[20];
    int iRet = 0;
    printf("Enter string\n");
    scanf("%[^’\n’]s",arr);
    iRet = Difference(arr);
    if(iRet==-1)
    {
        printf("Wrong Input..bye..bye\n");
    }
    else
    {
        printf("%d",iRet);
    }
    return 0;
}