/*
5. Write a program which return smallest element from singly linear linked
list.
Function Prototype :
int Minimum( PNODE Head);
Input linked list : |110|->|230|->|20|->|240|->|640|
Output : 20
*/

#include<stdio.h>
#include<stdlib.h>

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

int Minimum( PNODE Head)
{
    int iMin=0;
    
    if(Head==NULL)
    {   
        printf("Your Linked list is empty\n");
        return 0;
    }
    
    //taking First Element as a Minimum
    iMin=Head->Data;
    Head=Head->Next;
    
    while (Head!=NULL)
    {
        if((Head->Data)<iMin)
        {
            iMin=Head->Data;
        }
        Head=Head->Next;
    }

    return iMin;
}

int main()
{
    PNODE First = NULL;
    
    int iRet=0;
    
    InsertFirst(&First, 110);
    InsertFirst(&First, 230);
    InsertFirst(&First, 3);
    InsertFirst(&First, 240);
 


    iRet=Minimum(First);

    printf("Minimum is : %d",iRet);

    return 0;
} 
