/*
5. Write a program which display addition of digits of element from singly
linear linked list.
Function Prototype :void SumDigit( PNODE Head); 
Input linked list : |110|->|230|->|20|->|240|->|640|
Output : 2 5 2 6 10 
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

void SumDigit( PNODE Head)
{
     int iSum=0;
     int iNo=0;
     int iDigit=0;
    
    if(Head==NULL)
    {
        printf("Your Linked list is empty\n");
        return;
    }


    while (Head!=NULL)
    {
        iNo=Head->Data;  
        iSum=0;
        iDigit=0;
        while(iNo!=0)
        {   
            iDigit=iNo%10;
            iSum=iSum+iDigit;
            iNo=iNo/10;
        }
       printf("%d \t",iSum);
       Head=Head->Next;
    }
}




int main()
{
    PNODE First = NULL;
    int iRet=0;
    //|110|->|230|->|20|->|240|->|640|
    printf("Inside Main\n");
    InsertFirst(&First,110);
    InsertFirst(&First,230);
    InsertFirst(&First, 20);
    InsertFirst(&First, 240);
    InsertFirst(&First, 640);
   
    SumDigit(First);


 return 0;
}