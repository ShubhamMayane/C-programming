/*
5. Write a program which display largest digits of all element from singly
linear linked list.
Function Prototype : 
void DisplayLarge( PNODE Head);
Input linked list : |11|->|250|->|532|->|419|
Output : 1 5 5 9
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

void DisplayLarge( PNODE Head)
{
    int iMax=0;
    int iDigit=0;
    int iNo=0;

    while (Head!=NULL) //traversing the linked list
    {   
        iNo=Head->Data;
      
        iMax=iNo % 10; //taking last digit as a maximum.
        
        while (iNo!=0)//Logic to calculate product of digits in element of an  linkedlist
        {
            iDigit=iNo%10;

            if(iDigit>iMax)
            {
                iMax=iDigit;
            }
            iNo=iNo/10;
        }

        printf("%d \t",iMax);

        Head=Head->Next;
        
    }
    


}


int main()
{
    PNODE First = NULL;
   
    InsertFirst(&First, 419);
    InsertFirst(&First, 532);
    InsertFirst(&First, 250);
    InsertFirst(&First, 11);
   

    DisplayLarge(First);
   
   
    return 0;
}