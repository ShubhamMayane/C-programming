#include"MyHeader.h"






void AddStudent(PPSTUDENT Head,int Rno,char sname[],char phNo[],char cty[],int tmarks)
{
    //here i have use insert at last algorithm
    //creating a new node
    PSTUDENT NewNode=NULL;
    PSTUDENT temp=(*Head);
    NewNode=(PSTUDENT)malloc(sizeof(STUDENT));
    if(NewNode==NULL)
    {
        printf("Cant Insert New Student(memory allocation error)\n");
        return;
    }
    //filling the NewNode
    NewNode->iRollNo=Rno;
    strcpy((NewNode->StudentName),sname);
    NewNode->iTotalMarks=tmarks;
    strcpy((NewNode->City),cty);
    strcpy((NewNode->iPhoneNumber),phNo);
    NewNode->next=NULL;
    

    if(*Head==NULL)//means if linked list empty.
    {
       // printf("\nIf part\n");
        *Head=NewNode;
    }
    else//if linked list contains one or more nodes.
    { 
       // printf("\nElse part\n");
     while ((temp->next)!=NULL)
     {
        temp=temp->next;
     }
      temp->next=NewNode;
    
    }
    printf("*Yup....Student information is inserted successfully*\n\n");    

}


void RemoveStudent(PPSTUDENT Head,int Rno)//accepting roll no
{
    PSTUDENT temp=*Head;
    PSTUDENT Target=NULL;

    printf("Insied RemoveStudent\n");
    if(*Head==NULL) //if linked list is empty
    {
        printf("Student list is empty\n");
        return;
    }


    else if(((*Head)->iRollNo)==Rno) //if we have to delete first node becasue our roll no is at first position and our list have more thaan 1 nodes 
    {
        if(((*Head)->next)==NULL) //If linked list contains only one node
        {
        free(*Head);
        *Head=NULL;
        printf("Student is deleted succussfully from the list(inside else if 1)\n");
        }
        else//if linked list contains more than one node and our target to delete node is first node
        {
            Target=*Head;
            *Head=(*Head)->next;
            free(Target);
            Target=NULL;
            printf("Student is deleted succussfully from the list(inside else if 2)\n");
        }

    }


    else //if linked list contains more than one node
    {
        printf("\nElse part\n");
        while (temp->next!=NULL)//ji node delete karayachi aahe tyachya aadhi chya node cha address milwayacha
        {
            if(temp->next->iRollNo==Rno)
            {
                   break; 
            }
            temp=temp->next;
        }

    if(temp->next==NULL)
    {
        printf("This student is not in student list\n");
    }
    else
    {

        Target=temp->next;
        temp->next=temp->next->next;
        free(Target);
        printf("Student is deleted succussfully from the list(inside else)\n");
    }
    }
}

void UpdateStudent(PPSTUDENT Head,int Rno)
{
    int iOption=1;
    int iNo=0;
    char arr[30]={'\0'};
    PSTUDENT temp=*Head;

    if(*Head==NULL)
    {
        printf("List is empty\n");
        return;
    }

    while (temp->iRollNo!=Rno)//getting base address node which has we want to update
    {
        temp=temp->next;

    }
    //aata aaplyala tya node cha base aadress milala
    
    printf("Which field you want to update\n");

    while (iOption!=0)
    {
        printf("\n_________Menu(for Update fields)__________\n");
        printf("1.Update RollNo\n");
        printf("2.Update Student Name\n");
        printf("3.Update Student City\n");
        printf("4.Update PhoneNumber\n");
        printf("5.Update TotalMarks\n");
        printf("0.Exit\n");
        printf("_________________________\n");
        printf("Enter Option\n");
        scanf("%d",&iOption);

        switch (iOption)
        {
            case 1:
                printf("Enter new Roll Number:\n");
                scanf("%d",&iNo);
                temp->iRollNo=iNo;
                printf("Roll number is updated successfully\n");
                break;
            case 2:
                printf("Enter new Student Name:\n");
                scanf(" %[^'\n']s",arr);
                strcpy((temp->StudentName),arr);
                printf("Student name is updated successfully\n");
                break;
            case 3:
                printf("Enter new City name:\n");
                scanf(" %[^'\n']s",arr);
                strcpy((temp->City),arr);
                printf("City is updated successfully\n");
                break;
            case 4:
                printf("Enter new Phone Number(*type only 10 digits of a PhoneNumber):\n");
                scanf(" %[^'\n']s",arr);
                strcpy((temp->iPhoneNumber),arr);
                printf("Phone number is updated successfully\n");
                break;
            case 5:
                printf("Enter Total Marks:\n");
                scanf("%d",&iNo);
                temp->iTotalMarks=iNo;
                printf("Total marks is updated successfully\n");
                break;
            case 0:
                printf("\n\n**Now you can press 4 and hit enter button to display updated list**\n\n");
                break;
        
            default:
                printf("Please enter valid option\n");
                break;
        }

        }
        
}

void DisplayStudentInfo(PSTUDENT Head)
{
    printf("Roll no     Name            City       PhoneNumber     Marks\n");
    printf("---------------------------------------------------------------\n");
    while (Head!=NULL)
    {
        //in following printf i have used Field width specifiers i.e %-11d 
         printf("%-11d %-15s %-10s %-15s %-3d \n",Head->iRollNo,Head->StudentName,Head->City,Head->iPhoneNumber,Head->iTotalMarks);
         Head=Head->next;
    }
    printf("\n");

}

int  CountTotalStudentRecords(PSTUDENT Head)
{   
    int iCnt=0;
    while (Head!=NULL)
    {   iCnt++;
        Head=Head->next;
    }
    return iCnt;
}









