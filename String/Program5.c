/*
3. Write a program which accept string from user and display it inn
reverse order.
Input : “MarvellouS”
Output : “SuollevraM” 
*/
#include<stdio.h>
void Reverse(char *str)
{
    // Logic
    // loop to identify length of string
    char *temp=str;

    while (*temp!='\0')
    {
        temp++;        
    }
    temp--;
    //printing string in reverse order
    while (temp>=str)
    {   
        printf("%c",*temp);
        temp--;
    }
}
int main()
{
    char arr[20];
    int iRet = 0;
    printf("Enter string\n");
    scanf("%[^'\n']s",arr);
    Reverse(arr);
    return 0;
}