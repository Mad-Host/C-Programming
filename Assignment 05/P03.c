// WAP to check wheather the given number is even or odd.

#include<stdio.h>

int main() {
    
    int num;
    
    printf("Enter Number : ");
    scanf("%d",&num);
    
    if(num > 100 && num <= 999) {
        printf("Your Number is Three digit.");
    } else {
        printf("No your number is low.");
    }
 
    
    printf("\n");
    return 0;
}

/*

Enter Number : 123

Your Number is Three digit.

*/

