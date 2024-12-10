// Q5) Define a structure Student name, rollno and college name as a members. Define another structure Team with Two Student member variable.

// Define a function to create dynamically Student & Team variable. 
// Define a funtion to display the data of Student as well as Team variable.



#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<time.h>


// Declare Student
struct Student
{
    int rollno;
    char name[20];
    char college[60];
};


// Declare Team
struct Team
{
    struct Student s1;
    struct Student s2;
};


// Functions Declaration.

struct Student * newStudent(int, char [], char []);
struct Team * newTeam(struct Student, struct Student);
void displayStudent(struct Student *);
void displayTeam(struct Team *);


// Driver Code
int main()
{

    printf("\n\n === To Create a Student & Team ===\n");
    Sleep(2000);
    printf("\n\n// BUG : Program under Development... You may encounters many bugs!\n\n");


    struct Student *s1, *s2, s3,s4;
    s1 = newStudent(200021,"John Wick","Dies Grais!");
    s2 = newStudent(200158,"Rick Graine","Lois Gride!");

    s3.rollno = 1123;
    strcpy(s3.name, "Test Hub");
    strcpy(s3.college, "Diems");

    s4.rollno = 1156;
    strcpy(s4.name, "Demo Hub");
    strcpy(s4.college, "Diems");


    struct Team * t1;
    t1 = newTeam(s3, s4);

    printf("\n\n --- PRINTING YOUR DETAILS ---\n");
    Sleep(3000);

    printf("\n\nStudent Details That you entered!.\n");
    displayStudent(s1);
    displayStudent(s2);
    printf("\n\nTeam Details that you entered!.");
    displayTeam(t1);


    printf("\n\n");
    return 0;
}

// Creating Dynamic Student.
struct Student* newStudent(int id, char name[], char college[] )
{
    struct Student *p;
    p = (struct Student*) malloc(sizeof(struct Student));
    if(p == NULL)
    {
        printf("Sorry !, Memory Allocation is not created!.\n");
        exit(0);
    }
    printf("\n\nMemory Allocation is creation successfully!\n\n");
    p->rollno = id;
    strcpy(p->name, name);
    strcpy(p->college, college);
    return p;
}

// Creating Dynamic Team.
struct Team * newTeam(struct Student s1, struct Student s2)
{
    struct Team *p;
    p = (struct Team *) malloc(sizeof(struct Team));
    if(p == NULL)
    {
        printf("Sorry !, Memory Allocation is not created!.\n");
        exit(0);
    }
    printf("\n\nMemory Allocation is creation successfully!\n\n");
    p->s1 = s1;
    p->s2 = s2;
    return p;
}

void displayStudent(struct Student *p)
{
    Sleep(3000);
    printf("\n\n --- Your Response --- \n");
    printf("Student Roll No : %d\n",p->rollno);
    printf("Student Name : %s\n",p->name);
    printf("Student Name : %s\n",p->college);
}

void displayTeam(struct Team *p)
{
    Sleep(3000);
    printf("\n\n --- Team Members --- \n");
    printf("Team Name : %s & %s\n",p->s1.name,p->s2.name);
    printf("\n ---- Team Members Roll Numbers ---\n");
    printf("%s : %d & %s : %d\n",p->s1.name,p->s1.rollno,p->s2.name,p->s2.rollno);
    printf("College Names : %s & %s",p->s1.college,p->s2.college);
}
