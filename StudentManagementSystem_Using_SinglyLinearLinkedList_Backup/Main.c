#include"MyHeader.h" //because this header file is in current folder that why we use "MyHeader.h" 



int main()
{
    //variable declaration
    PSTUDENT first=NULL;
    int iOption=1;
    int iRet=0;
    int iRollno=0;
    int iTotalMarks=0;
    char StudentName[30]={'\0'};
    char city[30]={'\0'};    
    char iPhoneNumber[11]={'\0'};



    printf("\n*******Shree Ganesh*********\n\n");
    printf("-------Student Management System-------\n\n");
    
    while (iOption!=0)
    {   
        printf("___________Main menu____________\n");
        printf("**********************************\n");
        printf("1.ADD NEW STUDENT\n");
        printf("2.REMOVE STUDENT\n");
        printf("3.UPDATE STUDENT\n");
        printf("4.DISPLAY STUDENTS INFORMATION\n");
        printf("5.COUNT TOTAL STUDENTS\n");
        printf("0.EXIT\n ");
        printf("***********************************\n");
        
        printf("Enter your choice\n");
        scanf(" %d",&iOption);


        switch (iOption)
        {
        case 1:
            
            printf("Enter Student Roll no\n");
            scanf("%d",&iRollno);

            printf("Enter Student Name\n");
            scanf(" %[^'\n']s",StudentName);

            printf("Enter Student Phone Number(*type only 10 digits of a PhoneNumber)\n");
            scanf(" %[^'\n']s",iPhoneNumber);

            printf("Enter Student City\n");
            scanf(" %[^'\n']s",city);

            printf("Enter Student Total Marks\n");
            scanf(" %d",&iTotalMarks);

            AddStudent(&first,iRollno,StudentName,iPhoneNumber,city,iTotalMarks);
             break;

        case 2:
            if(first==NULL)
            {   
                printf("There is nothing to remove because list is empty\n");

            }
            else
            {
            printf("Enter Student Roll no\n");
            scanf(" %d",&iRollno);
            RemoveStudent(&first,iRollno);
            }
            break;

        case 3:
            if(first==NULL) //if linked list is empty
            {   
                printf("There is nothing to remove because list is empty\n");

            }
            else
            {
                printf("Enter Student Roll no\n");
                scanf(" %d",&iRollno);
                UpdateStudent(&first,iRollno);
            }
            break;
        case 4:
             DisplayStudentInfo(first);
            break;
        case 5:
            iRet=CountTotalStudentRecords(first);
            printf("Total records in student list is : %d \n",iRet);
            break;
        case 0:
            printf("\n*****Thank you for using our Application*****\n");
            break;
        default:
            printf("Enter valid option\n");
            break;
        }



        
    }
    



}