// WAP to print given number without last digit.

#include<stdio.h>

int main() {
    
    int num,digit;
    printf("Enter Number : ");
    scanf("%d",&num);
    
    digit = num/10;
    printf("Your Number is %d Unit digit is : %d",num,digit);
    

    printf("\n");
    return 0;
}


/*

Enter Number : 4128
Your Number is 4128 Unit digit is : 412

*/


