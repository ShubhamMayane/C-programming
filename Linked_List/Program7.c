/*
2. Write a program which displays all elements which are prime from singly
linear linked list.
Function Prototype :
int DisplayPrime( PNODE Head);
Input linked list : |11|->|20|->|17|->|41|->|22|->|89|
Output : 11 17 41 89 
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

void DisplayPrime( PNODE Head)
{   
    int i=0;
    int iNo=0;

    if(Head==NULL)  
    {
        printf("Your linked list is empty\n");
        return;
    }

    while (Head!=NULL)
    {
        iNo=Head->Data;
        for(i=2;i<=iNo/2;i++)
        {   
            if(iNo%2==0)
            {
                break;
            }
        }

        if(i==((iNo/2)+1))
        {
            printf("%d \t",iNo);
        }
        Head=Head->Next;

    }

}


int main()
{
    PNODE First = NULL;
    
    printf("Inside Main\n");
    InsertFirst(&First,89);
    InsertFirst(&First,22);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    DisplayPrime(First);
 return 0;
}