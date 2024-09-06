// MENU Driven program using switch cases.

#include<stdio.h>
#include<stdlib.h>

int main() {
    
    int a,b,n;
 
while(1) {
    
    printf("----- Menu Driven Program --------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Division\n");
    printf("4. Modulus\n");
    printf("5. Exit\n");
    
    printf("Enter Your Choice: ");
    scanf("%d",&n);
    
    
    switch(n) 
    {
        case 1:
            printf("\nEnter Two Numbers : ");
            scanf("%d %d",&a,&b);
            printf("Addition is : %d + %d = %d\n",a,b,a+b);
            break;
        
        case 2:
            printf("\nEnter Two Numbers : ");
            scanf("%d %d",&a,&b);
            printf("Substraction is : %d - %d = %d\n",a,b,a-b);
            break;
            
        case 3:
            printf("\nEnter Two Numbers : ");
            scanf("%d %d",&a,&b);
            printf("Division is : %d / %d = %d\n",a,b,a/b);
            break;
            
        case 4:
            printf("\nEnter Two Numbers : ");
            scanf("%d %d",&a,&b);
            printf("Modulus is : %d\n",a%b);
            break;
            
        case 5:
            exit(0);
        
        default:
            printf("Invalid Choice!");
    }
    
}
    
    printf("\n");
    return 0;
}

/*

----- Menu Driven Program --------
1. Addition
2. Subtraction
3. Division
4. Modulus
5. Exit
Enter Your Choice: 4

Enter Two Numbers : 12 5
Modulus is : 2


----- Menu Driven Program --------
1. Addition
2. Subtraction
3. Division
4. Modulus
5. Exit

Enter Your Choice: 5

*/



