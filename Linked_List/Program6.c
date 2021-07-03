/*
1. Write a program which displays all elements which are perfect from singly
linear linked list.
Function Prototype :
void DisplayPerfect( PNODE Head);
Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
Output : 6 28 

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

void DisplayPerfect(PNODE Head)
{
    int i=0;
    int iNo=0;
    int iSum=0;
    printf("Inside DispayPerfect \n");
    
    
    if(Head==NULL)//If linked list is empty
    {
        printf("Your linked list is empty\n");
        return ;
    }

    while(Head!=NULL)
    {   
        iNo=(Head->Data);
       // printf("Inside while\n");
        //printf("number in linked list is\t : %d \n",Head->Data);
        for(i=1;i<=iNo/2;i++)
        {
            
            if((iNo%i)==0)
            {
                iSum=iSum+i;
            }
        }
        if(iSum==iNo)
        {
            printf("%d \t",iNo);
        }

        iSum=0;
        Head=Head->Next;
    }

}


int main()
{
 PNODE First = NULL;
  printf("Inside Main\n");
 InsertFirst(&First,89);
 InsertFirst(&First, 6);
 InsertFirst(&First, 17);
 InsertFirst(&First, 28);
 InsertFirst(&First, 11);

DisplayPerfect(First);
 return 0;
}