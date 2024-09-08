// WAP of Menu Driven program.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int choice,a,b,c;
    
    printf("\n--- MENU DRIVEN ---\n\n");
    printf("1. Calculate LCM of two numbers\n");
    printf("2. Calculate sum of digits of numbers\n");
    printf("3. Volume of a cuboid\n");
    printf("4. Check wheather a given number is Prime or Not\n");
    printf("5. Exit\n\n");

    printf("Enter The Choice : ");
    scanf("%d",&choice);
    
    switch(choice)
    {
        
        case 1:
            int a,b;
            printf("Enter Two Numbers : ");
            scanf("%d %d",&a,&b);
            for(int L=a>b?a:b; L<=a*b; L++)
    {
        if(L%a==0 && L%b==0)
        {
            printf("LCM is : %d",L);
            break;
        }
    }
            break;
        
        case 2:
            printf("Enter Two Number : ");
            scanf("%d %d",&a,&b);
            printf("Sum of %d and %d : %d",a,b,a+b);
            break;
            
        case 3:
            printf("Enter Length, Width and Height : ");
            scanf("%d %d %d",&a,&b,&c);
            printf("Sum of %d X %d X %d : %d",a,b,c,a*b*c);
            break;
        
        case 4:
            printf("Enter the Number : ");
            scanf("%d",&a);
            
            for(int i=2; i<a; i++)
            {
                if(a%i == 0){
                    printf("Yes, %d is NOT a Prime.",a);
                    break;
                }
                else if(i == a-1)
                    printf("Yes, %d is Prime.",a);
                    
            }
        
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

1. Calculate LCM of two numbers
2. Calculate sum of digits of numbers
3. Volume of a cuboid
4. Check wheather a given number is Prime or Not
5. Exit

Enter The Choice : 4
Enter the Number : 21
Yes, 21 is NOT a Prime.

*/