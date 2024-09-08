// C Program to display grade obtained by student in a test.

#include<stdio.h>
#include<stdlib.h>


int main()
{
    
    int num,val;
    float r;
    
    printf("\n--- MENU DRIVEN ---\n\n");
    printf("1. Factorial of a Number\n");
    printf("2. Check Even or Odd\n");
    printf("3. Area of Circle\n");
    printf("4. Sum of first N natural number\n");
    printf("5. Exit\n\n");
    printf("Enter The Choice : ");
    scanf("%d",&num);
    
    switch(num)
    {
        case 1: 
            printf("\nEnter the Factorial Number : ");
            scanf("%d",&val);
            
            int fact = 1;
            for(int i=val; i>0; i--)
            {
                fact = fact * i;
            }
            printf("The factorial of number is : %d",fact);
            break;
            
        case 2:
            printf("\nEnter Number :");
            scanf("%d",&val);
        
            if(val>0)
            {
            if(val%2 == 0)
                printf("%d is Even",val);
            else 
                printf("%d is Odd",val);
            }
            else {
                printf("Number is Negative.");
            }
            break;
            
        case 3:
            printf("\nEnter Radius of Circle : ");
            scanf("%f",&r);
            
            printf("\nThe Area of Circle : %0.2f", 3.14*(r*r));
            
            break;
        
        case 4:
            printf("\nEnter First Natural Number :");
            scanf("%d",&val);

            int sum = 0;
            for(int i=1; i<=val; i++)
            {
                sum = sum + i;
            }
            printf("The sum of first Natural Number : %d",sum);
            break;
        
        case 5:
            exit(0);
            
        default:
            printf("Invalid Choice!");
    }
    
    printf("\n");
    return 0;
}


/*

--- MENU DRIVEN ---

1. Factorial of a Number
2. Check Even or Odd
3. Area of Circle
4. Sum of first N natural number
5. Exit

Enter The Choice : 1

Enter the Factorial Number : 6

The factorial of number is : 720

*/

