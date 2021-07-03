/*
3. Write a recursive program which accept string from user and count number
of small characters.
Input : HElloWOrlD
Output : 5
Prototype : 
*/

#include<stdio.h>
#include<stdlib.h>

//with using Iteration
int SmallI(char *str)
{
    int iCnt=0;
    while (*str!='\0')
    {
        if(*str>='a' && *str<='z')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}


//with using Recursion
int SmallR(char *str)
{
    static int iCnt=0;

    if(*str!='\0')
    {
        if(*str>='a' && *str<='z')
        {
            iCnt++;
        }
        str++;
        SmallR(str);
    }
    return iCnt;
}

 int main()
 {
     char* str=NULL;
     int iRet=0;
     
     str=(char*)calloc(20,sizeof(char));

    printf("Enter the string\n");
    scanf("%[^'\n']s",str);

    iRet=SmallI(str);
    printf("Using Iteration,Total small characters in given Sting is %d \n",iRet);

    iRet=SmallR(str);
    printf("Using Recursion,Total small characters in given Sting is %d \n",iRet);

    


 }