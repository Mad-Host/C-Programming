// C program to take factorial of given number.


#include<stdio.h>

int main() {
    
    int num,fac = 1;
    
    printf("Enter your Number : ");
    scanf("%d",&num);
    
    for(int i=num; i>=1; i--)
    {   
        fac = fac * i;
    }
    
    printf("Factorial of %d is : %d", num, fac);
    
    printf("\n");
    return 0;
}

/*

Enter your Number : 8
Factorial of 8 is : 40320

*/
