// C Recursive program to calculate the factorial of N numbers.

#include <stdio.h>

int fact(int);              // function declaration.
int main() {

    int num;
    
    printf("Enter Number : ");
    scanf("%d",&num);
    
    printf("The factorial of %d is : %d",num,fact(num));
    // function calling.

    printf("\n");
    return 0;
}

int fact(int n)
{
    if(n==0)
        return 1;
    return n * fact(n-1);
    
}

/*

Enter Number : 0
The factorial of 0 is : 1

*/