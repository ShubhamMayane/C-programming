/*
3. Write a program which display product of all digits of all element from
singly linear linked list. (Don’t consider 0)
Function Prototype :
void DisplayProduct( PNODE Head);
Input linked list : |11|->|20|->|32|->|41|
Output : 1 2 6 4 

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

void DisplayProduct( PNODE Head)
{
    int iMultiplication=1;
    int iDigit=0;
    int iNo=0;

    while (Head!=NULL) //traversing the linked list
    {   
        iNo=Head->Data;
        iMultiplication=1;

        while (iNo!=0)//Logic to calculate product of digits in element of an array list
        {
            iDigit=iNo%10;
            if(iDigit==0) //ignoring zero
            {
                iDigit=1;
            }
            iMultiplication=iMultiplication*iDigit;
            iNo=iNo/10;
        }
        
        printf("%d \t",iMultiplication);

        Head=Head->Next;
        
    }
    


}


int main()
{
    PNODE First = NULL;
   
    InsertFirst(&First, 41);
    InsertFirst(&First, 32);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);
   

 

    printf("Product of digits in linked list are :\n");
    DisplayProduct(First);
   
   
    return 0;
}