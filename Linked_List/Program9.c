/*
4. Write a program which return second maximum element from singly linear
linked list.
Function Prototype :
int SecMaximum( PNODE Head);
Input linked list : |110|->|230|->|320|->|240|
Output : 240 
*/



#include<stdio.h>
#include<stdlib.h>


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

int SecMaximum( PNODE Head)
{
    int iNo=0;
    int CurrentMax=0;
    int SecondMax=0;
    
    if(Head==NULL)
    {
        printf("Your Linked list is empty\n");
        return 0;
    }
    else
    {
        printf("Your Linked list is filled\n");
    }

    while (Head!=NULL)
    {
        iNo=Head->Data;

        if(iNo>CurrentMax)
        {
            SecondMax=CurrentMax;
            CurrentMax=iNo;    
        }
        else if(iNo >SecondMax && iNo < CurrentMax)
        {
            SecondMax=iNo;
        }
        Head=Head->Next;
    }
    
    return SecondMax;


}




int main()
{
    PNODE First = NULL;
    int iRet=0;
    
    printf("Inside Main\n");
    InsertFirst(&First,110);
    InsertFirst(&First,230);
    InsertFirst(&First,320);
    InsertFirst(&First,240);
    InsertFirst(&First,400);
    InsertFirst(&First,500);

   
   
  
   

    iRet= SecMaximum(First);
    printf("Second Maximum is : %d",iRet);

 return 0;
}