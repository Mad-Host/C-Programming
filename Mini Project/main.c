// C MINI PROJECT
// STUDENT & TEAM PLAYERS CREATION

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<Windows.h>

// Define the structure for Student
struct Student 
{
    int rollno;
    char name[20];
    char college[60];
};

// Define the structure for Team
struct Team 
{
    struct Student s1;
    struct Student s2;
};

// Function prototypes
struct Student * createStudent();
struct Student * checkStudentDetails(struct Student *);
void displayStudent(struct Student *p);
struct Student ** dbStudent(int val);
void displayStudentTable(struct Student **, int, int);
struct Team * createTeam(struct Student *, struct Student *);
struct Team ** dbTeamBase(int);
void displayTeamTable(struct Team **, int, int);

int main()
{
    // ++++++++++++++++++++ DECLARATION OF VARIABLES +++++++++++++++++++++

    int opt; // Option for menu

    // Default size of Student DB
    int val = 10, i = 0, j = 0, LIMIT = 10; // DB limits and counters
    int a, b; // Variables to select team members

    // Initialize the database for students
    struct Student ** db;
    db = dbStudent(val); // Allocate memory for the pointer array

    if (db == NULL)
    {
        printf("Failed to allocate memory for the database.\n");
        return 1; // Exit the program if memory allocation fails
    }

    // Initialize the database for teams
    struct Team ** dbTeam;
    dbTeam = dbTeamBase(LIMIT);

    // +++++++++++++++++++ DRIVER CODE & EXECUTION CODE +++++++++++++++++

    while(1)
    {
        printf("\n\nProcessing.....\n\n");
        Sleep(3000);

        // Display menu
        printf("\n\n +++++ Welcome to Student & Team Management System +++++\n\n");
        printf("1. Create New Student Record.\n");
        printf("2. Display Student Table!\n");
        printf("3. Create New Team\n");
        printf("4. Display Team Table!\n");
        printf("5. Exit.\n\n");
        printf("Option : ");
        scanf("%d", &opt);

        switch(opt)
        {
            case 1:
                // Create a new student
                if(val <= i)
                {
                    printf("\nStudent Container is Full!\n");
                    printf("\n---- MAX LIMIT REACHED ----\n");
                    break;
                } 
                db[i] = createStudent();
                if(db[i] != NULL)
                {
                    displayStudent(db[i]);
                    printf("Current Containers LIMIT : %d\n", 10 - i);
                    i++;
                }
                else 
                    free(db[i]);
                break;

            case 2:
                // Display all students
                displayStudentTable(db, val, i);
                break;

            case 3:
                // Create a new team
                printf("\n\n --- CREATING TEAM MEMBERS ---\n\n");
                printf("Who You Want to Team UP ?\n\n");
                Sleep(1000);
                printf("Type PRN NO (ex, 1 & 2) : ");
                scanf("%d %d", &a, &b);

                if(a > 0 && b > 0 && a <= i && b <= i && a != b)
                {
                    dbTeam[j] = createTeam(db[a - 1], db[b - 1]);
                    j++;
                }
                else    
                    printf("\n\nPRN is NOT Valid!\n");
                break;

            case 4:
                // Display all teams
                displayTeamTable(dbTeam, LIMIT, j);
                break;

            case 5:
                // Exit the program
                exit(0);
                break;

            default:
                // Handle invalid options
                Sleep(1000);
                printf("\n\n(!._.)\n");
                printf("\n\nWhoa there!");
                Sleep(2500);
                printf("That\'s not even an option....\n");
                Sleep(2500);
                printf("Time to wake up, ");
                Sleep(2500);
                printf("coffee time maybe?\n\n");
                break;
        }
    }

    printf("\n\n\t ~~~ End of Program ~~~\n");
    return 0;
}

// Function to create a new student
struct Student * createStudent()
{
    Sleep(3000);
    printf("\n\n--- Fillup Student details! ---\n");
    struct Student * ptr;
    ptr = (struct Student *) malloc (sizeof(struct Student));

    // Check memory allocation
    if(ptr == NULL)
    {
        printf("\n\nMemory is NOT Allocated!\n");
        return NULL;
    } else 
        printf("\nMemory is Successfully Allocated !\n\n");

    // Collect student details
    printf("Roll NO : ");
    scanf("%d", &ptr->rollno);
    fflush(stdin);
    printf("Full Name : ");
    fgets(ptr->name, 20, stdin);
    ptr->name[strlen(ptr->name) - 1] = '\0';
    printf("College Name : ");
    fgets(ptr->college, 60, stdin);
    ptr->college[strlen(ptr->college) - 1] = '\0';
    printf("\n\nWait....");
    Sleep(1500);
    printf("Processing Data !");
    ptr = checkStudentDetails(ptr);
    Sleep(3000);

    if(ptr == NULL)
    {
        printf("\nSomething Went Wrong!");
        return NULL;
    }
    printf("\n\nStudent Successfully Created !\n");
    return ptr;
}

// Function to validate student details
struct Student * checkStudentDetails(struct Student * ptr)
{
    if(ptr->rollno / 1000 != 0)
    {
        if(ptr->rollno < 0) ptr->rollno = -ptr->rollno;
        if(strlen(ptr->name) >= 4 && strlen(ptr->college) >= 4)
            return ptr;
        return NULL;
    }
    else
        return NULL;
}

// Function to display a student
void displayStudent(struct Student * ptr)
{
    Sleep(3000);
    printf("\n\n --- Collected Response --- \n");

    if(ptr != NULL)
    {
        printf("Roll No : %d\n", ptr->rollno);
        printf("Name : %-10s\n", ptr->name);
        printf("College : %-10s\n", ptr->college);
        printf("\n\n");
    }
    else
        printf("\nPLEASE, CONTACT TO NASA! \n");
}

// Function to initialize the student database
struct Student ** dbStudent(int val)
{
    struct Student ** db;
    db = (struct Student **) malloc(sizeof(struct Student) * val);
    return db;
}

// Function to display the student table
void displayStudentTable(struct Student ** db, int val, int current)
{
    printf("\n\n\t\t +++++++++ DISPLAYING STUDENTS RECORDS +++++++++++\n\n");
    printf("|%-10s|%-10s|%-20s|%-40s|\n", "PRN ID", "ROLL NO", "STUDENT NAME", "COLLEGE NAME");
    printf("|___________________________________________________________________________________|\n");

    for(int i = 0; i < val; i++)
    {
        if(i < current)
            printf("|%-10d|%-10d|%-20s|%-40s|\n", i + 1, db[i]->rollno, db[i]->name, db[i]->college);
        else    
            printf("|%-10s|%-10s|%-20s|%-40s|\n", "N/A", "N/A", "N/A", "N/A");
    }
    printf("|___________________________________________________________________________________|\n");
}

// Function to create a new team
struct Team * createTeam(struct Student * db1, struct Student * db2)
{
    struct Team * ptr;
    ptr = (struct Team *) malloc(sizeof(struct Team));

    // Copying First Student Data
    ptr->s1.rollno = db1->rollno;
    strcpy(ptr->s1.name, db1->name);
    strcpy(ptr->s1.college, db1->college);

    // Copying Second Student Data
    ptr->s2.rollno = db2->rollno;
    strcpy(ptr->s2.name, db2->name);
    strcpy(ptr->s2.college, db2->college);

    return ptr;
}

// Function to initialize the team database
struct Team ** dbTeamBase(int limit)
{
    struct Team ** ptr;
    ptr = (struct Team **) malloc(sizeof(struct Team) * limit);
    if(ptr == NULL)
        printf("\nTeam Data Base is not Created!");
    else
        printf("\nTeam Data Successfully Created!");
    return ptr;
}

// Function to display the team table
void displayTeamTable(struct Team ** dbTeam, int LIMIT, int j)
{
    printf("\n\n\t\t +++++++++++++ DISPLAYING TEAMS & MEMBERS +++++++++++++++\n\n");
    printf("|%-10s|%-43s|%-43s|\n", "Team Name", "Team Members", "Colleges");
    printf("|__________________________________________________________________________________________|\n");

    for(int i = 0; i < LIMIT; i++)
    {
        if(i < j)
        {
            printf("|%-10d|%-20s & %-20s|%-20s & %-20s|\n", i + 1, dbTeam[i]->s1.name, dbTeam[i]->s2.name, dbTeam[i]->s1.college, dbTeam[i]->s2.college);
        }
        else
        {
            printf("|%-10s|%-20s & %-20s|%-20s & %-20s|\n", "N/A", "N/A", "N/A", "N/A", "N/A");
        }
    }
    printf("|__________________________________________________________________________________________|\n");
}
