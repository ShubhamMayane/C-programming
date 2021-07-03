/*
5. Write application which accept file name from user and one string from user. Write
that string at the end of file.
Input : Demo.txt
 Hello World
Output : Write Hello World at the end of Demo.txt file 

*/

#include<stdio.h>
#include<io.h>
#include<stdlib.h>
#include<fcntl.h>

int fd = 0; //file descriptor


void OpenFile(char FileName[])
{
    
    if(FileName==NULL)
    {
        printf("Please Enter Correct File name");
        return;
    }

    fd=open(FileName,O_WRONLY|O_APPEND);


    if(fd==-1)
    {
        printf("Unable to open File \n");
        exit(1);
    }
    else
    {
        printf("File is open SuccessFully \n");
    }

    // close(fd);//to close the opened file
}



void WriteInFile(char string[],int iSize)
{

    printf("Inside Write Line\n");
    write(fd,string,iSize);
    printf("Text is successfully inserted\n");

}

int main()
{
    char FileName[20]={'\0'};
    int iSize=0;
    char *cPtr=NULL;
    

    printf("Enter File Name\n");
    scanf("%[^'\n']s",FileName);

    OpenFile(FileName);

    
    printf("Enter Number of Character you want to write\n");
    scanf("%d",&iSize);

    cPtr=(char *)malloc(iSize*sizeof(char));



    printf("Enter String\n");
    scanf(" %[^'\n']s",cPtr);
    
    

  


 
   
    
    WriteInFile(cPtr,iSize);
    
   
    return 0;
}