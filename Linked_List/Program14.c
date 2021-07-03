/*
4. Write a program which display smallest digits of all element from singly
linear linked list.
Function Prototype :
void DisplaySmall( PNODE Head);
Input linked list : |11|->|250|->|532|->|415|
Output : 1 0 2 1 
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

void DisplaySmall( PNODE Head)
{
    int iMin=0;
    int iDigit=0;
    int iNo=0;

    while (Head!=NULL) //traversing the linked list
    {   
        iNo=Head->Data;
      
        iMin=iNo % 10; //taking last digit as a minimum
        
        while (iNo!=0)//Logic to calculate product of digits in element of an array list
        {
            iDigit=iNo%10;

            if(iDigit<iMin)
            {
                iMin=iDigit;
            }
            iNo=iNo/10;
        }

        printf("%d \t",iMin);

        Head=Head->Next;
        
    }
    


}


int main()
{
    PNODE First = NULL;
   
    InsertFirst(&First, 415);
    InsertFirst(&First, 532);
    InsertFirst(&First, 250);
    InsertFirst(&First, 11);
   

    DisplaySmall(First);
   
   
    return 0;
}