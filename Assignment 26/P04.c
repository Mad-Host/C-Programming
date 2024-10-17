// WAP to take input of Nth students in chemistry, physices and mathatmatics and create one function named with marks having elements roll no, name, chem_marks, maths_marks, phy_ marks and disply the persentage of each students.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Marks
{
    int rollno;
    char name[20];
    int chem_marks, phy_marks, math_marks;
};

void input(struct Marks[], int);
void sort(struct Marks[], int);


int main()
{
    int val;


    printf("\n\n === ENTER DETAILS OF %d STUDENTS ===\n\n");
    printf("\nENTER NO. OF SUTDENTS : ");
    scanf("%d",&val);


    struct Marks x[val];

    input(x, val);

    sort(x, val);

    printf("\n");
    return 0;
}


void input(struct Marks x[], int size)
{
    printf("\n\n ENTER THE DATA \n\n");
    for(int i = 0; i < size; i++) 
    {
        printf("S%d Roll NO: ", i + 1);
        scanf("%d", &x[i].rollno);

        // Clear input buffer before reading name
        getchar();  // This removes the newline character left by scanf

        printf("Name of Student: ");
        fgets(x[i].name, 20, stdin);
        x[i].name[strlen(x[i].name) - 1] = '\0';  // Remove newline character

        printf("Enter Chemistry Marks: ");
        scanf("%d", &x[i].chem_marks);

        printf("Enter Physics Marks: ");
        scanf("%d", &x[i].phy_marks);

        printf("Enter Maths Marks: ");
        scanf("%d", &x[i].math_marks);
        printf("\n\n");
    }
}



void sort(struct Marks x[], int size)
{
    printf("\n\n === RESULT OF EACH STUDENT ===\n\n");
    for(int i = 0; i < size; i++) 
    {
        // Correct percentage calculation by casting to float
        float result = ((x[i].chem_marks + x[i].math_marks + x[i].phy_marks) / 300.0) * 100.0;

        printf("Student Name: %s\n", x[i].name);
        printf("PERCENTAGE: %.2f%%\n", result);  // Escape percentage symbol using %%
        printf("\n");
}
}


/*

OUTPUT : 

ENTER NO. OF SUTDENTS : 3


 ENTER THE DATA 

S1 Roll NO: 201
Name of Student: Mad Host
Enter Chemistry Marks: 89
Enter Physics Marks: 75
Enter Maths Marks: 96


S2 Roll NO: 202
Name of Student: Syed Shab
Enter Chemistry Marks: 75
Enter Physics Marks: 85
Enter Maths Marks: 95


S3 Roll NO: 203
Name of Student: Ashraf
Enter Chemistry Marks: 85
Enter Physics Marks: 75
Enter Maths Marks: 71




 === RESULT OF EACH STUDENT ===

Student Name: Mad Host
PERCENTAGE: 86.67%

Student Name: Syed Shab
PERCENTAGE: 85.00%

Student Name: Ashraf
PERCENTAGE: 77.00%

*/

