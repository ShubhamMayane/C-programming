/*
2. Write a program which display all palindrome elements of singly linked
list.
Function Prototype :
void DisplayPallindrome( PNODE Head);
Input linked list : |11|->|28|->|17|->|414|->|6|->|89|
Output : 11 6 414
*/


#include<stdio.h>
#include<stdlib.h>



#define TRUE 1
#define FALSE 0
typedef int BOOL;
struct node
{
    int Data;
    struct node *Next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;
void InsertFirst(PPNODE Head , int no )
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->Next = NULL;
    newn->Data = no;

    if (*Head == NULL)
    {
    *Head = newn;
    }
    else
    {
    newn -> Next = *Head;
    *Head = newn;
 }
}

int Reverse(int iValue)
{
    int iNo=0;
    int iDigit=0;
    int iReverse=0;

    while (iValue!=0)
    {
        iDigit = iValue % 10;
        iReverse = iReverse * 10 + iDigit;
        iValue=iValue/10;
       
    }
        return iReverse;
      
}

void DisplayPallindrome( PNODE Head)
{
    int iNo=0;
    int iRet=0;


    if(Head==NULL)
    {
        printf("Your Linked List is empty\n");
        return ;
    }

    while (Head!=NULL)
    {   
        iNo=Head->Data;
        iRet=Reverse(iNo);
        if(iNo==iRet)
        {
            printf("%d \t",iNo);
        }

        Head=Head->Next;
    }
    
}




int main()
{
    PNODE First = NULL;
   
    InsertFirst(&First, 89);
    InsertFirst(&First, 6);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);
    InsertFirst(&First, 414);
    InsertFirst(&First, 151);

 

    printf("Palindrom numbers in given list are :\n");
    DisplayPallindrome(First);
   
    // Call all functions for below problem statements.
    return 0;
}