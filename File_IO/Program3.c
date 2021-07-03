/*
    3. Write application which accept file name from user and read all data from that file
    and display contents on screen.
    Input : Demo.txt
    Output : Display all data of file. 
*/

#include<stdio.h>
#include<io.h>
#include<stdlib.h>
#include<fcntl.h>

int fd=0; //file descriptor

void OpenFile(char FileName[])
{
   
    if(FileName==NULL)
    {
        printf("Please Enter Correct File name");
        return;
    }

    fd=open(FileName,O_RDONLY);

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

void ReadFile()
{
    char Arr[10];
    int ret=0;
 
    printf("Inside read File\n");
    

    while((ret=read(fd,Arr,10))!=0)
    {
        write(1,Arr,ret);
    }

}





int main()
{   
    char FileName[20]={'\0'};
    printf("Enter File Name\n");
    scanf("%[^'\n']s",FileName);
    OpenFile(FileName);
    ReadFile();
    return 0;
}


