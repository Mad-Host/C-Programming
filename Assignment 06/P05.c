// WAP to check given input is positive, negative or zero.

#include<stdio.h>

int main() {
    
    int input;
    
    printf("Enter Your Character : ");
    scanf("%d",&input);
    
    if(input > 0) {
        printf("%d is positive.",input);
    }
    else if(input < 0) {
        printf("%d is Negative",input);
    } 
    else {
        printf("Input is Zero.");
    }
    
    
    printf("\n");
    return 0;
}


/*

Enter Your Character : 0

Input is Zero.

*/