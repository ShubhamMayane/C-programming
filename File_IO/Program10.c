/*
5. Accept three file names from user which are existing files. Create one new file
named as Demo.txt. Write name and Data of that three files in Demo.txt file one
after another.
Input : abc.txt
 pqr.txt
 xyz.txt
Output : Write file name and data of each file in Demo.txt file.
*/

#include<stdio.h>
#include<io.h>
#include<stdlib.h>
#include<fcntl.h>
#include <string.h>

int CombineData(char FileName1[],char FileName2[],char FileName3[])
{
    int fd1=0;
    int fd2=0;
    int fd3=0;
    int fd4=0;
    int iRet=0;
    char Arr[10]={'\0'};

    if(FileName1==NULL || FileName2==NULL || FileName3==NULL)
    {
        return -1;
    }

    //Opening all three files
    fd1=open(FileName1,O_RDONLY | O_CREAT);
    fd2=open(FileName2,O_RDONLY | O_CREAT);
    fd3=open(FileName3,O_RDONLY | O_CREAT);
    fd4=open("Demo.txt",O_WRONLY | O_CREAT |O_APPEND);//creating fourth file as "Demo.txt" to insert all data of all three files into this file.


    if(fd1==-1 || fd2==-1 || fd3==-1 || fd4==-1)
    {
        if (fd1==-1)
        {
           printf("Unable to open %s file\n",FileName1);
        }
        else if (fd2==-1)
        {
           printf("Unable to open %s file\n",FileName2);
        }
        else if (fd3==-1)
        {
           printf("Unable to open %s file\n",FileName3);
        }
        else if (fd4==-1)
        {
           printf("Unable to open Demo.txt file\n");
        }
        
    }
    else
    {
        printf("All files are created and opened successfully\n");
    }


    //logic tp write content of all three files into demo.txt

    //copying content of File1.txt  to Demo.txt 
    write(fd4,FileName1,strlen(FileName1));
    write(fd4,"\n\n",2);
   

    while ((iRet=read(fd1,Arr,10))!=0)
    {
        write(fd4,Arr,iRet);
    }

    write(fd4,"\n\n",2);
    


    //copying content of File2.txt  to Demo.txt
    write(fd4,FileName2,strlen(FileName2));
    write(fd4,"\n\n",2);
   

    while ((iRet=read(fd2,Arr,10))!=0)
    {
        write(fd4,Arr,iRet);
    }
    write(fd4,"\n\n",2);

    
    //copying content of File3.txt  to Demo.txt
    write(fd4,FileName3,strlen(FileName3));
    write(fd4,"\n\n",2);
   

    while ((iRet=read(fd3,Arr,10))!=0)
    {
        write(fd4,Arr,iRet);
    }

    write(fd4,"\n\n",2);
    


    printf("File has been written sucessfully\n");
 


}

int main()
{
    char FileName1[20]="File1.txt\0";
    char FileName2[20]="File2.txt\0";
    char FileName3[20]="File3.txt\0";
    int iRet=0;

    iRet=CombineData(FileName1,FileName2,FileName3);



    return 0;
}