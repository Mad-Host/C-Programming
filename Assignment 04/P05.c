// WAP to take input from the user and also input a digit append a digit into the number and print the resulting number.

#include<stdio.h>

int main() {
    
    int val,digit;
    printf("Enter your Number and Digit : ");
    scanf("%d %d",&val,&digit);
    
    val = val*10 + digit;
    
    printf("Val : %d",val);
    
    printf("\n");
    return 0;
}


/*

Enter your Number and Digit : 234 9

Val : 2349

*/



