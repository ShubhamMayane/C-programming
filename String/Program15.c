/*
5. Write a program which accept string from user reverse that string
in place.
Input : “abcd”
Output : “dcba”
Input : “abba”
Output : “abba”
*/
#include<stdio.h>
void StrRevX(char *str)
{
    char *start=NULL;
    char *end=NULL;
    char temp='\0';
    if(str==NULL)
    {
        printf("Wrong Input...bye bye..");
        return;
    }

    start=str;
    end=str;

    while (*end!='\0')
    {
        end++;
    }
    end--;
    while (start<end)
    {
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}
int main()
{
    char arr[20];
    printf("Enter string\n");
    scanf("%[^'\n']s",arr);
    StrRevX(arr);
    printf("Modified string is %s",arr);
    return 0;
}