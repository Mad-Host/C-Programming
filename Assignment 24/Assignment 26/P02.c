// WAP to find the heighest salary employee from a given array of 10 Employee.


#include<stdio.h>
#include<string.h>





struct Employee {
    int id;
    char name[20];
    float salary;
};


void input(struct Employee []);
void max_salary(struct Employee []);

int main()
{
    struct Employee x[5];



    printf("\n\n === ENTER 5 EMPLOYEES DATA ===\n\n");
    input(x);
    max_salary(x);

    printf("\n\n ------------ End of Program --------");
    printf("\n");
    return 0;

};

void input(struct Employee x[])
{
    for(int i=0; i<5; i++)
    {
        printf("\n === Enter User %d data ===\n",i+1);
        printf("User %d id : ",i+1);
        scanf("%d",&x[i].id);
        printf("User %d Name : ",i+1);
        fflush(stdin);
        fgets(x[i].name, 20, stdin);
        x[i].name[strlen(x[i].name) -1] = '\0';
        printf("User %d Salary : ",i+1);
        scanf("%f",&x[i].salary);
    }
}

void max_salary(struct Employee x[])
{
    printf("\n\n***The Higest Salary of Employee ***\n\n");

    float temp = 0;
    int index;

    for(int i=0; i<5; i++)
    {
        if(temp < x[i].salary)
        {
            temp = x[i].salary;
            index = i;
        }
    }

    printf("User id : %d\n",x[index].id);
    printf("User Name : %s\n",x[index].name);
    printf("User Salary : %f\n",x[index].salary);
    }


/*

OUTPUT :



 === ENTER 5 EMPLOYEES DATA ===


 === Enter User 1 data ===
User 1 id : 2001 
User 1 Name : Mad Host
User 1 Salary : 15000.5

 === Enter User 2 data ===
User 2 id : 2002
User 2 Name : Joe John
User 2 Salary : 14500.6

 === Enter User 3 data ===
User 3 id : 2003
User 3 Name : John Mic
User 3 Salary : 45834.00

 === Enter User 4 data ===
User 4 id : 2004
User 4 Name : Ally Steal
User 4 Salary : 15489.655

 === Enter User 5 data ===
User 5 id : 2005
User 5 Name : Aziz
User 5 Salary : 147852.2366


***The Higest Salary of Employee ***    

User id : 2005
User Name : Aziz
User Salary : 147852.234375


 ------------ End of Program --------


*/

