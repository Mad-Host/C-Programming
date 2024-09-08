// Menu Driven Program to ADD, Sub, Div and Multiplication of numbers.


#include<stdio.h>
#include<stdlib.h>

int main() {
    
    int a,b,num;
    
    while(1){
        
        printf("--- MENU DRIVEN ---\n");
        printf("1. Addition\n");
        printf("2. Substraction\n");
        printf("3. Division\n");
        printf("4. Multiplication\n");
        printf("5. Exit\n");
        printf("\n Enter the Choice : ");
        scanf("%d",&num);
        
        
        switch(num) {
            
            case 1: 
                printf("\nEnter Two Numbers : ");
                scanf("%d %d",&a,&b);
                printf("Add is : %d\n\n",a+b);
                break;
                
            case 2:
                printf("\nEnter Two Numbers : ");
                scanf("%d %d",&a,&b);
                printf("Sub is : %d\n\n",a-b);
                break;
                
            case 3:
                printf("\nEnter Two Numbers : ");
                scanf("%d %d",&a,&b);
                printf("Division is : %d\n\n",a/b);
                break;
            
            case 4:
                printf("\nEnter Two Numbers : ");
                scanf("%d %d",&a,&b);
                printf("Multi is : %d\n\n",a*b);
                break;
                
            case 5:
                exit(0);
            
            default:
                printf("Invalid Choice!\n\n");
                
        }
        
    }
    
    
    printf("\n");
    return 0;
}






