// WAP to take input of three digit number and print the sum of digits these number.

#include<stdio.h>

int main() {
    
    int num,d1,d2;
    
    printf("Enter Your Three digit Number : ");
    scanf("%d",&num);
    printf("Your Number is : %d \n",num);
    
    d1 = num%10;    // 2.
    num = num/10;   // 54
    d2 = num%10;    // 4.
    num = num/10;   // 5.
    
    printf("The sum of digit is : %d", d1+d2+num);
    
    printf("\n");
    return 0;
}


/*

Enter Your Three digit Number : 542
Your Number is : 542 
The sum of digit is : 11


*/



