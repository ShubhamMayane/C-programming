/*

1. Write application which accept two file names from user. Compare the contents of
that two files. If contents are same then return true otherwise return false.
Input : Demo.txt Hello.txt
Output : Compare contents of Demo.txt and Hello.txt 

*/
#include<stdio.h>
#include<io.h>
#include<stdlib.h>
#include<fcntl.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ComapareFiles(char FileName1[],char FileName2[])
{
  char Arr1[20]={'\0'};
  char Arr2[20]={'\0'};
  int fd1=0;
  int fd2=0;
  int iRet1=0;
  int iRet2=0;
  int i=0;
  //open file for read only
    
  fd1=open(FileName1,O_RDONLY);
  fd2=open(FileName2,O_RDONLY);

    if(fd1==-1 || fd2==-1)
    {
        if(fd1==-1)
        {
        printf("Enable to Open %s File",FileName1);
        }
        else
        {
            printf("Enable to Open %s File",FileName2);
        }
        exit(1);
    }
  
    while((iRet1=read(fd1,Arr1,10)!=0) && (iRet2=read(fd2,Arr2,10)!=0))
    { 
        //pratyek array la compare karuya
         i=0;
        while(Arr1[i]!='\0'&& Arr2[i]!='\0')
        {
            if(Arr1[i]!=Arr2[i])
            {
                break;
            }
            printf("%c %c \t",Arr1[i],Arr2[i]);
            i++;
        }

    }

    if(Arr1[i]=='\0' && Arr2[i]=='\0')   
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
    char FileName1[20]={'\0'};
    char FileName2[20]={'\0'};
    BOOL bRet;

    printf("Enter File Name 1 : \n");
    scanf("%[^'\n']s",FileName1);

    printf("Enter File Name 2 : \n");
    scanf(" %[^'\n']s",FileName2);

    bRet=ComapareFiles(FileName1,FileName2);

    if(bRet==TRUE)
    {
           printf("Contents in both files are same\n");
    }
    else
    {
           printf("Contents in both files are Different\n");
    }

    return 0;
    


   


    return 0;
}