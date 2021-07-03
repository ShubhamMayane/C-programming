/*
3. Write a recursive program which accept string from user and count number
of characters.
Input : Hello
Output : 5
Prototype :
*/
#include<stdio.h>
#include<stdlib.h>


//Program using Iteration
int StrlenI(char *str)
{
    int iCnt=0;
    while (*str!='\0')
    {
        iCnt++;
        str++;

    }
    return iCnt;
    
}


//Program using recursion
int StrlenR(char *str)
{
    static int iCnt=0;
    if(*str!='\0')
    {
        iCnt++;
        str++;
        StrlenR(str);
    }
    return iCnt;
}
int main()
{
 int iRet = 0;
 char *arr;
 arr=(char *)calloc(20,sizeof(char));

 printf("Enter string\n");
 scanf("%[^'\n']s",arr);
 iRet = StrlenI(arr);
 printf("Output using Iteration : %d \n",iRet);

 iRet = StrlenR(arr);
 printf("Output usinf Recursion : %d \n",iRet);

 return 0;
} 