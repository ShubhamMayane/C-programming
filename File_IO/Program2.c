/*
2. Write application which accept file name from user and create that file.
Input : Demo.txt
Output : File created successfully. 
*/

#include<stdio.h>
#include<io.h>
#include<stdlib.h>
#include<fcntl.h>

//user desined function to check file exist or not

void OpenFile(char FileName[])
{
    int fd=0;
    if(FileName==NULL)
    {
        printf("Enter Valid File name\n");
        return;
    }

    fd=creat(FileName,0777);

    if(fd==-1)
    {
        printf("Unable to open File");
        exit(1);
    }
    else
    {
        printf("%s Created SuccessFully\n",FileName);
    }

}

int main()
{
    char FileName[20]={'\0'};
    printf("Enter File Name\n");
    scanf("%[^'\n']s",FileName);
    OpenFile(FileName);
    return 0;
}