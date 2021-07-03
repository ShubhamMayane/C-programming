/*
3. Write application which accept two file names from user. Append the contents of
first file at the end of second file.
Input : Demo.txt Hello.txt
Output : Concat contents of Demo.txt at the end of Hello.txt

*/

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<io.h>



void ConcatenateTwoFiles(char FileName1[],char FileName2[])
{   
    int fd1=0;
    int fd2=0;
    int iRet=0;
    char Arr[10]={'\0'};

    printf("You have Entered FileName1 is : %s\n",FileName1);
    printf("You have Entered FileName2 is : %s\n",FileName2);

    fd1=open(FileName1,O_WRONLY | O_APPEND | O_CREAT);
    fd2=open(FileName2,O_RDONLY | O_CREAT);

    if((fd1== -1) || (fd2==-1) )
    {
        printf("File are unable to open\n");
        return;
    }
    else
    {
        printf("Both Files are opened Successfully\n");
    }

    while (iRet=read(fd2,Arr,10))
    {
        write(fd1,Arr,iRet);
    }
    
    printf("Files are Concatenated SuccessFully\n ");
}

int main()
{
    char iValue1[30]={'\0'};
    char iValue2[30]={'\0'};

    printf("Enter File Name 1 :\n");
    scanf("%[^'\n']s",iValue1);

    printf("You have Entered iValue 1 is : %s\n",iValue1);
    
    
    printf("Enter File Name 2 :\n");
    scanf(" %[^'\n']s",iValue2);

printf("You have Entered iValue 2 is : %s\n",iValue2);
    ConcatenateTwoFiles(iValue1,iValue2);
    
    return 0;
}