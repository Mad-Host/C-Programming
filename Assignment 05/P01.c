// WAP to check wheather the given number is divisible by 5 or not.

#include<stdio.h>

int main() {
    
    int num;
    
    printf("Enter Number : ");
    scanf("%d",&num);
    
    if(num%5 == 0) {
        printf("Yes! Number is divisible by 5.");
    } else {
        printf("Nope!!!");
    }
    
    printf("\n");
    return 0;
}


/*

Enter Number : 75

Yes! Number is divisible by 5.

*/