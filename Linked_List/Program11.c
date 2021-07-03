/*
1. Write a program which reverse each element of singly linked list.
Function Prototype :
void Reverse(PNODE Head);
Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
Output : |11|->|82|->|71|->|14|->|6|->|98|

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

void Display(PNODE Head)
{

    if(Head==NULL)
    {
        printf("Your linked list is empty\n");
        return;
    }

    while (Head!=NULL)
    {
        printf("|%d|-> ",Head->Data);
        Head=Head->Next;
    }
    printf("NULL\n");
}

void Reverse(PNODE Head)
{
    int iNo=0;
    int iDigit=0;
    int iReverse=0;

    if(Head==NULL)
    {
        printf("Your linked list is empty\n");
        return;
    }
    
    
    while (Head!=NULL)
    {
        iNo=Head->Data;
        iReverse=0;
        
        while (iNo!=0)
        {
            iDigit = iNo % 10;
            iReverse = iReverse * 10 + iDigit;
            Head->Data=iReverse;
            iNo=iNo/10;
       
        }
        Head=Head->Next; 
      
    }

}


int main()
{
    PNODE First = NULL;
   //|11|->|28|->|17|->|41|->|6|->|89|
    InsertFirst(&First, 89);
    InsertFirst(&First, 6);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

    printf("Before Updation \n");
    Display(First);

    Reverse(First);

    printf("After Updation \n");
    Display(First);
    // Call all functions for below problem statements.
    return 0;
}