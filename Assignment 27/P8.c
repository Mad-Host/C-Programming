// Define an student


// Pre-Define Library.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>


// user-define structures.

struct Student 
{
    int rollno;
    char name[20];
    char college[60];
};

struct Team 
{
    struct Student s1;
    struct Student s2;
};

// functions declarations.

struct Student * newStudent();
struct Student * checkStudent(struct Student *);
void displayStudents(struct Student *);

int main()
{

    int response, limit = 0;
    struct Student ** db[6] = {0};      // Pointer Array holiding student value, DataBase (db).
    struct Student * ptr;


    

    while (1)
    {

        printf("\n\t\t *** STUDENT & TEAM *** \n\n");
        printf(" 1. Add New Student \n");
        printf(" 2. Create New Team \n");
        printf(" 3. Display Student Database \n");
        printf(" 4. Display Team Records \n");
        printf(" 5. Exit.\n\n");
        printf("\nWhat do you want (o_-)?\n $_ ");
        scanf("%d",&response);

        switch (response)
        {
        case 1:
            ptr = newStudent();
            if (ptr == NULL)
                printf(" Student is Not Added, Something went wrong!\nTry Again....");
            else
            {
                printf("Sucessfully Student Added!");
            }
            break;

        case 2:
            displayStudents(ptr);
            break;

        case 3:
            break;
        
        case 4:
            break;
        
        case 5:
            exit(0);
            break;

        default:
            Sleep(900);
            printf("\n\nLooks like you\'re trying to go off-road!\n");
            Sleep(2000);
            printf("But our system can\'t handle that kind of adventure.\n");
            Sleep(2000);
            printf("Stick to the options for a smoother ride!");
            printf("\n\n(>_<)");
        }
    }
    




    printf("\n\n\n\t ___End of Program!___\t\n");
    return 0;
}

// Creating New student.
struct Student * newStudent()
{
    Sleep(500);
    struct Student * ptr;
    ptr = (struct Student *) malloc(sizeof(struct Student));

    if(ptr == NULL)
    {
        printf("\n\n Memory is NOT Allocated! (-_-!);\n");
        exit(0);
    }

    printf("\nSuccessfully Connected!\n");
    printf("\nNewly, Student Roll No : ");
    scanf("%d",&ptr->rollno);
    printf("\nStudent Name [20]: ");
    fflush(stdin);
    fgets(ptr->name, 20, stdin);
    ptr->name[strlen(ptr->name) - 1] = '\0';
    printf("\nStudent College [60]: ");
    fgets(ptr->college, 60, stdin);
    ptr->college[strlen(ptr->college) - 1] = '\0';
    printf("\n\nValidating Student Data ....");
    Sleep(5000);
    ptr = checkStudent(ptr);
    return ptr;
}

// Validating Student.

struct Student * checkStudent(struct Student * ptr)
{
    if(ptr->rollno < 0) ptr->rollno = - ptr->rollno;
    if(ptr->rollno/1000 != 0 & ptr->rollno > 0) return ptr;
    else
    {
    free(ptr);
    return NULL;
    }
}

// Displaying Students records.

void displayStudents(struct Student * ptr)
{
    printf("\n\n --- Recorded Students DATA ---\n\n");
    printf("\nRoll No\tStudent Name\tStudent College\n");
    printf("%d \t\t%s \t\t%s\n",ptr->rollno,ptr->name,ptr->college);
    
}


