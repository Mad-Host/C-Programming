// Assignment 16 All Questions and Answers.

#include<stdio.h>
#include<stdlib.h>

// All functions Declartions.

void numbers(int);
void reverse_numbers(int);
void odd_numbers(int);
void odd_reverse_numbers(int);
void even_numbers(int);
void even_reverse_numbers(int);
void square_numbers(int);
void number_to_binary(int);
void number_to_octal(int);
void number_reverse(int);

int main()
{
    int choice,num;

    while(1)
    {
        printf("\n\n--- Assignment 16 Que & Ans ---\n");
        printf("Q1. Print first N Numbers.\n");
        printf("Q2. Print first N Numbers in reverse order\n");
        printf("Q3. Print first N Odd Numbers\n");
        printf("Q4. Print first N Odd Numbers in reverse order\n");
        printf("Q5. Print first N Even Numbers\n");
        printf("Q6. Print first N Even Numberse in reverse order\n");
        printf("Q7. To Square of first N Numbers\n");
        printf("Q8. Binary of given Decimal Number\n");
        printf("Q9. Octal of given Decimal Number\n");
        printf("Q10. Take a number & Reverse the Number\n");
        printf("11. To Exit\n\n");

        printf("Enter Your Choice Number : ");
        scanf("%d",&choice);



    switch(choice)
    {
        case 1: 
            printf("Enter Nth Number : ");
            scanf("%d",&num);
            numbers(num);
            break;

        case 2:
            printf("Enter Nth Number : ");
            scanf("%d",&num);
            reverse_numbers(num);
            break;

        case 3:
            printf("Enter Nth Number : ");
            scanf("%d",&num);
            odd_numbers(num);
            break;

        case 4:
            printf("Enter Your Number : ");
            scanf("%d",&num);
            odd_reverse_numbers(num);
            break;

        case 5: 
            printf("Enter Your Number : ");
            scanf("%d",&num);
            even_numbers(num);
            break;

        case 6:
            printf("Enter Your Number : ");
            scanf("%d",&num);
            even_reverse_numbers(num);
            break;

        case 7:
            printf("Enter Your Number : ");
            scanf("%d",&num);
            square_numbers(num);
            break;

        case 8:
            printf("Enter Your Number : ");
            scanf("%d",&num);
            number_to_binary(num);
            break;
        
        case 9:
            printf("Enter Your Number : ");
            scanf("%d",&num);
            number_to_octal(num);
            break;
        
        case 10:
            printf("Enter Your Number : ");
            scanf("%d",&num);
            number_reverse(num);
            break;

        case 11:
            exit(0);

        default: 
            printf("Invalid Choice!!!");

    }

    }





    
        

    printf("\n");
    return 0;
}


void numbers(int num)
{
    
    if(num>1)
        numbers(num-1);
    printf("%d ",num);

}

void reverse_numbers(int num)
{
    printf("%d ",num);
    if(num>1)
        reverse_numbers(num-1);
}

void odd_numbers(int num)
{
    if(num>1)
        odd_numbers(num-1);
    printf("%d ",2*num-1);
}

void odd_reverse_numbers(int num)
{
    printf("%d ",2*num-1);
    if(num>1)
        odd_reverse_numbers(num-1);
}

void even_numbers(int num)
{
    if(num>1)
        even_numbers(num-1);
    printf("%d ",num*2);
}

void even_reverse_numbers(int num)
{
    printf("%d ",num*2);
    if(num>1)
        even_reverse_numbers(num-1);
}

void square_numbers(int num)
{
    if(num>0)
        square_numbers(num-1);
    printf("%d ",num*num);
}

void number_to_binary(int num)
{
    if(num != 0)
        number_to_binary(num/2);
    printf("%d",num%2);
}

void number_to_octal(int num)
{
    if(num != 0)
        number_to_octal(num/8);
    printf("%d",num%8);
}

void number_reverse(int num)
{   
    if(num != 0)
        printf("%d",num%10);
    if(num != 0)
        number_reverse(num/10);
    
}

