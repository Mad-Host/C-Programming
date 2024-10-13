// Define a Structure with variable id, salary & name.
// WAP to take input from user.


#include<stdio.h>
#include<string.h>


struct Employee 
{
    int id;
    char name[26];
    float salary;
};

void display(struct Employee);

int main()
{
    struct Employee E1;

    printf("\n\n ==== ENTER EMPLOYEE DETAILS ====\n\n");
    printf("Employee ID : ");
    scanf("%d",&E1.id);
    printf("Your Name : ");
    fflush(stdin);
    fgets(E1.name, 26, stdin);
    E1.name[strlen(E1.name) -1] = '\0';
    printf("Your Salary : ");
    scanf("%f",&E1.salary);

    display(E1);


    printf("\n");
    return 0;
}

void display(struct Employee E1)
{
    printf("\n\n --- Your Response ---\n\n");
    printf("Employee E1 ID : %d\n",E1.id);
    printf("Employee E1 Name : %s\n",E1.name);
    printf("Employee E1 Salary : %f\n\n",E1.salary);
}

/*

OUTPUT : 


 ==== ENTER EMPLOYEE DETAILS ====

Employee ID : 2021000293
Your Name : Mad Host
Your Salary : 150000.55


 --- Your Response ---

Employee E1 ID : 2021000293
Employee E1 Name : Mad Host
Employee E1 Salary : 150000.546875


*/
