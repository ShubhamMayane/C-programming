/*
3. Write a program which returns addition of all element from singly linear
linked list.
Function Prototype :
int Addition( PNODE Head);
Input linked list : |10|->|20|->|30|->|40|
Output : 100 
*/



#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

//structure of a node
struct node
{
    int Data;
    struct node* Next;
};


typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head , int no )
{
 //creating a new node
 PNODE newn = NULL;
 newn = (PNODE)malloc(sizeof(NODE));
 newn->Next = NULL;
 newn->Data = no;

 //checking Linked list is empty or not
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

int Addition( PNODE Head)
{
    int iSum=0;
    
    if(Head==NULL)
    {
        printf("Linked list is Empty\n");
        return 0;
    }

    while (Head!=NULL)
    {
        iSum=iSum+(Head->Data);
        Head=Head->Next;
    }

    return iSum;
}

int main()
{
    PNODE First = NULL;
    
    int iRet=0;
    
    InsertFirst(&First, 10);
    InsertFirst(&First, 10);
    InsertFirst(&First, 10);
    InsertFirst(&First, 10);
    InsertFirst(&First, 10);
    InsertFirst(&First, 10);
    InsertFirst(&First, 10);


    iRet=Addition(First);

    printf("Sum of elements in linked list is : %d",iRet);

    return 0;
} 