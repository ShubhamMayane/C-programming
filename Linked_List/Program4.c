/*

4. Write a program which return largest element from singly linear linked
list.
Function Prototype :
int Maximum( PNODE Head);
Input linked list : |110|->|230|->|320|->|240|
Output : 320
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

int Maximum( PNODE Head)
{
    int iMax=0;
    
    if(Head==NULL)
    {   
        printf("Your Linked list is empty\n");
        return 0;
    }
    
    while (Head!=NULL)
    {
        if((Head->Data)>iMax)
        {
            iMax=Head->Data;
        }
        Head=Head->Next;
    }

    return iMax;
}

int main()
{
    PNODE First = NULL;
    
    int iRet=0;
    
    InsertFirst(&First, 110);
    InsertFirst(&First, 230);
    InsertFirst(&First, 320);
    InsertFirst(&First, 240);
 


    iRet=Maximum(First);

    printf("Maximum is : %d",iRet);

    return 0;
} 
