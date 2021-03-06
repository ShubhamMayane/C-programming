/*
1. Write a program which search first occurrence of particular element from
singly linear linked list.
Function should return position at which element is found.
Function Prototype :
int SearchFirstOcc( PNODE Head , int no );
Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|
Input element : 30
Output : 3 

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

int FirstOccurance(PNODE Head,int iNo)
{
    int iPosition=0;


    if(Head==NULL)//check if linked list is empty or not
    {
        printf("Linked list is empty\n");
        return 0;
    }
    else
    {
        while (Head!=NULL)
        {
            iPosition++;
            if((Head->Data)==iNo)
            {
               break;
            }
            
            Head=Head->Next;
           
        }
        if(Head==NULL)//jar sapadala nahi number  tar
        {
            
            return -1;
        }
        else
        {
            return iPosition;
        }

    }

}




int main()
{
    PNODE First = NULL;
    int iValue=0;
    int iRet=0;
    
    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    //Accepting Number From user
    printf("Enter Number :\n");
    scanf(" %d",&iValue);


    iRet=FirstOccurance(First,iValue);

    if(iRet==-1)
    {
        printf("Entered Number %d is Not in the LinkedList list\n",iValue);
    }
    else
    {
    printf("First Occurance of %d number is at %d Position\n",iValue,iRet);
    }
    return 0;
} 