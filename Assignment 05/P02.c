// WAP to check wheather the given number is even or odd.

#include<stdio.h>

int main() {
    
    int num;
    
    printf("Enter Number : ");
    scanf("%d",&num);
    
    if(num%2 == 0) {
        printf("Its Even!");
    } else {
        printf("Its Odd!");
    }
 
    
    printf("\n");
    return 0;
}


/*

Enter Number : 25

Its Odd!

*/