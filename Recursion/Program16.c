/*
1. Write a recursive program which accept string from user and count white
spaces.
Input : HE llo WOr lD
Output : 3

Prototype :
*/

#include<stdio.h>
#include<stdlib.h>
//Using Iteratin
int WhiteSpaceI(char *str)
{   
    int iCnt=0;
    while (*str!='\0')
    {
        if(*str==' ')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
    
}
int WhiteSpaceR(char *str)
{
    static int iCnt=0;

    if(*str!='\0')
    {
        if(*str==' ')
        {
            iCnt++;
        }
        str++;
        WhiteSpaceR(str);
    }
    return iCnt;
}


int main() 
{
    char* str=NULL;
    int iRet=0;
    str=(char *)calloc(20,sizeof(char));

    printf("Enter the string\n");
    scanf("%[^'\n']s",str);

    iRet=WhiteSpaceI(str);
    printf("using Iteration : Total white spaces in Given String is : %d\n",iRet);

    iRet=WhiteSpaceR(str);
    printf("using Recursion : Total white spaces in Given String is : %d\n",iRet);

    

    free(str);
    str=NULL;
    return 0;


}