/*
1. Write application which accept file name from user and open that file in read mode.
Input : Demo.txt
Output : File opened successfully. 
*/

#include<stdio.h>
#include<io.h>
#include<stdlib.h>
#include<fcntl.h>

void OpenFile(char FileName[])
{
    int fd = 0; //file descriptor
    if(FileName==NULL)
    {
        printf("Please Enter Correct File name");
        return;
    }

    fd=open(FileName,O_RDONLY | O_CREAT);

    if(fd==-1)
    {
        printf("Unable to open File \n");
    }
    else
    {
        printf("File is open SuccessFully \n");
    }

    // close(fd);//to close the opened file
}


int main()
{
    char FileName[20]={'\0'};
    printf("Enter File Name :- \n");
    scanf("%[^'\n']s",&FileName);
    OpenFile(FileName);
    return 0;
}