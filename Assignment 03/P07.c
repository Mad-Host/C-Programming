// WAP to swap two int number.

#include<stdio.h>

int main() {
    
    int a,b,change;
    
    printf("Enter Two int numbers (num1 num2) : ");
    scanf("%d %d",&a,&b);
    
    printf("Your Enter number is %d and %d \n",a,b);
    
    change = a;
    a = b;
    b = change;
    
    printf("Now, swap to %d and %d.",a,b);
    

    printf("\n");
    return 0;
}


/*

Enter Two int numbers (num1 num2) : 10 20
Your Enter number is 10 and 20 
Now, swap to 20 and 10.


*/


