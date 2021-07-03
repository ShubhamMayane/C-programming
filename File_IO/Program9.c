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

int CountWord(char Word[])
{
    
    int fd=0;
    int iRet=0;
    char Arr[30]={'\0'}; //Buffer for reading data from file
    int i=0;
    int WordCount=0;
    int w=0,j=0;
    char WordArray[20]={'\0'};
    

    printf("Inside CountWord() Funtion\n");
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

    //now we will count the word inside the file
   while ((iRet=read(fd,Arr,30))!=0)
    {
            printf("iRet is : %d \n",iRet);
            i=0;
            j=0;
           
           while (Arr[i]!='\0')
            {
            
                if(Arr[i]==' ')
                {
                    while ((Arr[i]==' ')&&(Arr[i]!='\0'))
                    {
                           printf("space \n");
                        i++;
                       
                    }
                }
                else
                {
                     
                   //Clearing the existing array

                     for(int p=0;p<sizeof(WordArray);p++)
                     {
                         WordArray[p]='\0';
                     }
              

                    while ((Arr[i]!=' ')&&(Arr[i]!='\0'))
                    {
                        printf("Word \n");
                        WordArray[j]=Arr[i]; //copiying the word in another array
                        i++;
                        j++;
                    }
                    
                    //displaying the copied array
                     for(int y=0;WordArray[y]!='\0';y++)
                     {
                        printf("%c",WordArray[y]);
                     }
                      printf("\n");
                   
                    
                    //comparing two words
                    j=0;
                
                    while(Word[j]!='\0')
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
                    printf("\n%d\n",WordCount);
                  }
                  
               }
        }

      /*
        for(i=0;Arr[i]!='\0';i++)
        {
            printf("%c",Arr[i]);
        }
      */
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