//Shree Ganeshay Namha
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>//to use strcpy



//Student structure decalration
#pragma pack(1)
struct Student
{
    int iRollNo;
    char StudentName[30];
    int iTotalMarks;
    char City[30];
    char iPhoneNumber[11];
    struct Student* next;
};

typedef struct Student STUDENT;
typedef struct Student* PSTUDENT;
typedef struct Student** PPSTUDENT;


//function declarations
/*
    

*/
void AddStudent(PPSTUDENT,int,char*,char*,char*,int);
void DisplayStudentInfo(PSTUDENT);
void RemoveStudent(PPSTUDENT,int); //char[] is same as char*
void UpdateStudent(PPSTUDENT,int);
int CountTotalStudentRecords(PSTUDENT);