/*
2. Write application which accept file name and one character from user. Count the
frequency of that character in file.
Input : Demo.txt
 M
Output : Count occurrence of M in Demo.txt 
*/


#include<stdio.h>
#include<io.h>
#include<stdlib.h>
#include<fcntl.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int CountFrequncy(char FileName[],char ch)
{
  char* Arr=NULL;
  int fd=0;
  int iCnt=0;
  int iRet=0;
  int i=0;
  int sum=0;
  //open file for read only

    printf("Inside Count Frequency\n");  

    Arr=(char *)malloc(20*sizeof(char));

    fd=open(FileName,O_RDONLY);
  
    if(fd==-1)
    {
        
        printf("Enable to Open %s File",FileName);
        exit(1);
    }
  
    while((iRet=read(fd,Arr,20))!=0)
    { 
        
        //pratyek array la compare karuya
         i=0;
        while(Arr[i]!='\0')
        {
            if(Arr[i]==ch)
            {
                printf("%c \t",Arr[i]);
                iCnt++;
                
            }
            i++;
        }
        printf("\n");
        sum=sum+iRet;
        printf("count is: %d \t iRet is : %d\n ",iCnt,sum);
     
 
    }

    printf("Final count is %d",iCnt);
    return iCnt;
          
  }

int main()
{
    char FileName[20]={'\0'};
    char ch ;
    int  iRet;

    printf("Enter File Name : \n");
    scanf("%[^'\n']s",FileName);

    printf("Enter the Charater : \n");
    scanf(" %c",&ch);

    iRet=CountFrequncy(FileName,ch);

    //printf("Frequency of character %c in %s File is %d",ch,FileName,iRet);

    return 0;
    
}