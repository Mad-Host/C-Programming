// Q5) Define a structure Student name, rollno and college name as a members. Define another structure Team with Two Student member variable.


#include<stdio.h>
#include<stdlib.h>


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

int main()
{
    

    printf("\n\n");
    return 0;
}





