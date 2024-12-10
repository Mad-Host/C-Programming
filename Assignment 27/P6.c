// Q5) Define a structure Student name, rollno and college name as a members. Define another structure Team with Two Student member variable.
// Q6) Define a method to create dynamically Student variable & return the address of student.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<time.h>


// Declare Student
struct Student
{
    char name[20];
    int rollno;
    char college[60];
};


// Declare Team
struct Team
{
    struct Student s1;
    struct Student s2;
};


// Declaring functions.

struct Student * newStudent();
void displayStudent(struct Student*);

int main()
{

    int rollno;
    char name[20], college[60];

    printf("\n\n === To Create a Student & Team ===\n");
    Sleep(2000);
    printf("\n\n// BUG : Program under Development... You may encounters many bugs!\n\n");
    Sleep(3000);
    printf("\nSuccessfully Connected!\n\n");

    struct Student *p;
    p = newStudent();
    displayStudent(p);
    

    printf("\n\n");
    return 0;
}

struct Student *newStudent()
{
    struct Student *p = (struct Student *)malloc(sizeof(struct Student)); // Allocate memory
    if (p == NULL) // Check if memory allocation was successful
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    printf("Enter Student Roll No : ");
    scanf("%d", &p->rollno); // Use & to store the input into the allocated memory
    printf("Enter Your Name [20] : ");
    fgets(p->name, 20, stdin);
    p->name[strlen(p->name) - 1] = '\0';
    printf("Enter Your College Name [60] : ");
    fgets(p->college, 60, stdin);
    p->college[strlen(p->college) - 1] = '\0';

    return p;
}


void displayStudent(struct Student *p)
{
    printf("\n\n//  Your Response  //\n");
    printf("Student Roll NO : %d\n",p->rollno);
    printf("Student Name : %s\n",p->name);
    printf("Student College Name : %s\n",p->college);
}

