// In question no 5 define a method to dynamically create an array of pointers of type Team. Array size is received in the arguments. Return the address of array.

#include<stdio.h>
#include<string.h>
#include<windows.h>

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

// struct Student * createStudent(struct Student * , struct Student *);
struct Student ** dbStudent(int);
// struct Team * createTeam();
// struct Team ** dbTeam(int);
void displayStudent(struct Student *);
void displayTeam(struct Team *);


int main()
{

    printf("\n\n\t Welcome to Program! \n");
    struct Student * ptr;
    struct Student ** db;
    int size;



    printf("Enter Size : ");
    scanf("%d",&size);
    db = dbStudent(size);

    db[0] = createStudent();
    displayStudent(db[0]);

    // ptr = createStudent();



    printf("\n\nBack to main()");

    printf("\n\n ~~~ End of Program ~~~\n");
    return 0;
}

struct Student * createStudent()
{
    printf("\n\n--- Fillup Student details! ---\n");
    struct Student * ptr;
    ptr = (struct Student *) malloc (sizeof(struct Student));
    
    // Check conditon
    if(ptr == NULL)
    {
        printf("\n\nMemory is NOT Allocated!\n");
        return NULL;
    } else 
        printf("\nMemory is sucessfully Allocated !\n\n");
    printf("Roll NO : ");
    scanf("%d",&ptr->rollno);
    fflush(stdin);
    printf("Full Name : ");
    fgets(ptr->name, 20, stdin);
    ptr->name[strlen(ptr->name) - 1] = '\0';
    printf("College Name : ");
    fgets(ptr->college, 60, stdin);
    ptr->college[strlen(ptr->college) -1] = '\0';
    printf("\n\nWait....");
    Sleep(1500);
    printf("Processing Data !");
    Sleep(3000);
    printf("\n\nStudent Sucessfully Created !");
    return ptr;
}

struct Student ** dbStudent(int val)
{
    struct Student ** db;
    db = (struct Student **) malloc(sizeof(struct Student) * val);
    return db;
}

void displayStudent(struct Student *p)
{
    Sleep(3000);
    printf("\n\n --- Your Response --- \n");
    printf("Roll No : %-4d\n",p->rollno);
    printf("Student Name : %-20s\n",p->name);
    printf("College Name : %-10s\n",p->college);
}

void displayTeam(struct Team *p)
{
    Sleep(3000);
    printf("\n\n --- Team Members --- \n");
    printf("Team Name : %-10s & %-10s\n",p->s1.name,p->s2.name);
    printf("\n ---- Team Members Roll Numbers ---\n");
    printf("%-10s : %-10d & %-10s : %-10d\n",p->s1.name,p->s1.rollno,p->s2.name,p->s2.rollno);
    printf("College Names : %-20s & %-20s",p->s1.college,p->s2.college);
}

// struct Team * createTeam(struct Student * s1, struct Student * s2)
// {
//     struct Team *p;
//     p = (struct Team *) malloc(sizeof(struct Team));
//     if(p == NULL)
//     {
//         printf("Sorry !, Memory Allocation is not created!.\n");
//         exit(0);
//     }
//     printf("\n\nMemory Allocation is creation successfully!\n\n");
//     p->s1 = s1;
//     p->s2 = s2;
//     return p;
// }

/*

    OUTPUT - 

    - SALESFORCE.COM / FORCE


*/
