/*
4. Write application which accept file name and one word from user. Count the
frequency of that word in file.
Input : Marvellous.txt
 Hello
Output : Count the frequency if Hello in Marvellous.txt file. 
*/

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<io.h>
#include <sys/stat.h>
 
/*function to get size of the file.*/
long int GetFileSize(const char *file_name)
{
    struct stat st; /*declare stat variable*/
     
    /*get the size using stat()*/
     if(stat(file_name,&st)==0)
     {
        return (st.st_size);
     }
    else
        return -1;
}
 


int CountWord(char Word[])
{
    
    int fd=0;
    int iRet=0;
    char *Arr=NULL;
    long int FileSize=0;
    int WordCount=0;
    int i=0,j=0;
    char WordArray[20]={'\0'};
    int ReadByte=0;
    
    //opening a file in read mode
    fd=open("MyFile4.txt",O_RDONLY | O_CREAT);
    if(fd==-1)
    {
        printf("Unable to open file");
        exit(0);
    }
    else
    {
        printf("File Opened Successfully\n");
    }

    //geting file size 
    FileSize=GetFileSize("MyFile4.txt");

    if(FileSize==-1)
    {
        printf("Cant Fetch File size\n");
    }
    else
    {
        printf("Size of file is %d\n",FileSize);
        
    }

       //creating Buffer for reading data from file
    Arr=(char *)calloc(FileSize,sizeof(char));

    if(Arr==NULL)
    {
        printf("Buffer cant created\n");
    }
    else
    {
        printf("Buffer is created\n");
    }


    iRet=read(fd,Arr,FileSize);

    while (ReadByte<iRet)
    {
            /*
            for (int i = 0; i <iRet; i++)
            {
                printf("%c",Arr[i]);
            }
            printf("\n");
            */
           
           if(Arr[i]==' '|| Arr[i]=='\n' || Arr[i]=='.' || Arr[i]==',')
           {

               while ((Arr[i]==' '|| Arr[i]=='\n' || Arr[i]=='.' || Arr[i]==',') && Arr[i]!='\0')
               {
                  // printf("Space..\n");
                   i++;
                   ReadByte++;
               }
               
           }
           else
           {    
               j=0;
               while ((Arr[i]!=' '|| Arr[i]!='.' || Arr[i]!=',') && Arr[i]!='\0')
               {
                   WordArray[j]=Arr[i];
                   printf("%c",Arr[i]);
                   j++;
                   i++;
                   ReadByte++;
               }
               printf("\n");

               
               j=0;
                while (Word[j]!='\0')
                {
                    if(WordArray[j]!=Word[j])
                     {
                        break;
                     }
                     j++;
                }
                

                if(Word[j]=='\0')
                {
                    WordCount++;
                }

                for (int i = 0; i < sizeof(WordArray); i++)
                {
                    WordArray[i]='\0';
                }
                
           }
    }


 return WordCount;
}



int main()
{
    int WordCnt=0;
    char FileName[20]={'\0'};
    char Word[20]={'\0'};

    //printf("Enter File name :-\n");
    //scanf("%[^'\n']s",FileName);

    printf("Enter Word to count its Frequency in %s File :-\n",FileName);
    scanf(" %[^'\n']s",Word);

    WordCnt=CountWord(Word);

    printf("Count of word is : %d\n",WordCnt);



    
    return 0;
}