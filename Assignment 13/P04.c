// Menu Driven Program to ADD, Sub, Div and Multiplication of numbers.


#include<stdio.h>
#include<stdlib.h>

int main() {
    
    int a,b,c,num,sum;
    
    while(1){
        
        printf("--- MENU DRIVEN ---\n");
        printf("1. Isosceles Triangle or NOT \n");
        printf("2. Right angle Triangle or NOT\n");
        printf("3. Equilateral Triangle or NOT\n");
        printf("4. Exit\n");
        printf("\nEnter the Choice : ");
        scanf("%d",&num);
        
        
        switch(num) {
            
            case 1: 
                printf("\nEnter Three sides of a triangle : ");
                scanf("%d %d %d",&a,&b,&c);
                if(a+b>c && b+c>a && a+c>b){
                    if(a == b || b == c || a == c)
                        printf("Yes, Triangle is an isosceles Triangle.\n\n");
                    else
                    printf("Triangle is NOT an isosceles Triangle\n\n");
                }
                
                
                break;
                
            case 2:
                printf("\nEnter length of Triangle : ");
                scanf("%d %d %d",&a,&b,&c);
                
                if(a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b)
                    printf("Triangle is Right Angle Triangle\n\n");
                else 
                    printf("Triangle is Not a Right Angle Triangle\n\n");
                
                break;
                
            case 3:
                printf("\nEnter length of Triangle : ");
                scanf("%d %d %d",&a,&b,&c);
                if(a == b && b == c)
                    printf("Yes, Triangle is an Equilateral Triangle.\n\n");
                else
                    printf("Triangle is NOT a Equilateral Triangle.\n\n");
                
                break;
                
            case 4:
                exit(0);
            
            default:
                printf("Invalid Choice!\n\n");
                
        }
        
    }
    
    
    printf("\n");
    return 0;
}


/*

--- MENU DRIVEN ---
1. Isosceles Triangle or NOT 
2. Right angle Triangle or NOT
3. Equilateral Triangle or NOT
4. Exit

Enter the Choice : 2

Enter length of Triangle : 5 4 3
Triangle is Right Angle Triangle

*/



