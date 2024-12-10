// WAP to ask user to take input a number of data values he would like to enter and then create an array dynamically to accodamte the data values. Now take the input from user and print the average of that values.


#include<stdio.h>
#include<stdlib.h>


void input(int *, int *);
void display(int *, int *);
void sum(int *, int *);

int main()
{

    int * p = (int *) malloc(4);

    printf("\n\n === ENTER DATA ===\n\n");
    printf("Enter N Number of Values : ");
    scanf("%d",p);

    int *q = (int *)calloc(*p, sizeof(int));

    input(q,p);
    display(q,p);
    sum(q,p);

    free(p);
    free(q);


    printf("\n");
    return 0;
}

void input(int *q, int *p)
{
    for(int i=0; i<*p; i++)
    {
        printf("Enter Arr[%d] : ",i+1);
        scanf("%d",q+i);
    }
}

void display(int *q, int *p)
{
    printf("Your Response : ");
    for(int i=0; i<*p; i++)
        printf("%d ",*(q+i));
    
}

void sum(int *q, int *p)
{
    int sum = 0;
    for(int i=0; i<*p; i++)
        sum = sum + *(q+i);

    float avg = sum/(*p)*1.0;

    printf("\nThe Total Average of Numbers is : %0.2f",avg);
    printf("\n\n");
}


/*

OUTPUT : 

 === ENTER DATA ===

Enter N Number of Values : 4
Enter Arr[1] : 12
Enter Arr[2] : 13
Enter Arr[3] : 14
Enter Arr[4] : 20
Your Response : 12 13 14 20 
The Total Average of Numbers is : 14.00


*/