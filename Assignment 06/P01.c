// WAP to check given number is three digit or not.

#include<stdio.h>

int main() {

    int x;

    printf("Enter Number : ");
    scanf("%d",&x);

    if(x>99 && x<1000) {
        printf("Number is Three Digit.");
    } else {
        printf("Number is Not Three Digit.");
    }

    printf("\n");
    return 0;
}


/*

Enter Number : 123

Number is Three Digit.

*/


