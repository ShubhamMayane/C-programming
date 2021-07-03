/*
3. Write a program which returns addition of all even element from singly
linear linked list.
Function Prototype :
int AdditionEven( PNODE Head);
Input linked list : |11|->|20|->|32|->|41|
Output : 52 
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

int AdditionEven( PNODE Head)
{
    int iSum=0;
    int iNo=0;

    if(Head==NULL)
    {
        printf("Your linked list is empty\n");
        return 0;
    }
    
    while (Head!=0)
    {

        iNo=Head->Data;
        if(iNo%2==0)
        {
            iSum=iSum+iNo;
        }
        Head=Head->Next;
    }
    return iSum;


}



int main()
{
    PNODE First = NULL;
    int iRet=0;
    
    printf("Inside Main\n");
    InsertFirst(&First,11);
    InsertFirst(&First,20);
    InsertFirst(&First, 41);
    InsertFirst(&First, 32);
   

    iRet=AdditionEven(First);
    printf("Addition of even elements is : %d",iRet);

 return 0;
}