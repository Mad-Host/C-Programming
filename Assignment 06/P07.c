// WAP to check given input is positive, negative or zero.

#include<stdio.h>

int main() {
    
    int input;
    
    printf("Enter Your Number : ");
    scanf("%d",&input);
    
    if(input%3 == 0 || input%7 == 0) {
        printf("%d is Divisible by both 3 or 7.",input);
    }
    else {
        printf("Number is not divisible.");
    }
    
    
    printf("\n");
    return 0;
}


/*

Enter Your Number : 30

30 is Divisible by both 3 or 7.

*/