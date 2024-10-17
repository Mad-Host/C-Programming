// WAP to take input of 5 Employee with the id, name & salary. so, sort the Employee on the basis of Salary.
// WAP to sort the Employee according to Names.

#include<stdio.h>
#include<string.h>
#include<ctype.h>

struct Employee
{
    int id;
    char name[20];
    float salary;
};


void input(struct Employee []);
void sort_names(struct Employee []);
void display(struct Employee []);

int main()
{

    struct Employee x[5];



    printf("\n\n === ENTER 5 EMPLOYEES DATA ===\n\n");
    input(x); 
    sort_names(x);
    display(x);


    printf("\n\n ------------ End of Program --------");
    printf("\n");
    return 0;
}

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

void sort_names(struct Employee x[])
{
    for(int i=0; i<5; i++)
    {
        

        for(int j=i+1; j<5; j++)
        {
            if(i == 5-1)
            break;

            if(x[i].name < x[j].name)
        {
            struct Employee temp = x[i];
            x[i] = x[j];
            x[j] = temp;
        }
        }
    }
}

void display(struct Employee x[])
{
    printf("\n\n");
    for(int i=0; i<5; i++)
    {
    printf("User id : %d\n",x[i].id);
    printf("User Name : %s\n",x[i].name);
    printf("User Salary : %f\n",x[i].salary);
    printf("\n");
    }
}
