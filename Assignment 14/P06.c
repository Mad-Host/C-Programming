// C program to print factorial of number (TSRS).

#include<stdio.h>

int fact(int);
int main() 
{
    int num;
    
    printf("Print Factorial of Number\n");
    printf("Enter Number : ");
    scanf("%d",&num);
    
    if(num>0)
        printf("Factorial of %d is : %d",num,fact(num));
    else 
        printf("%d is Negative Number");
    
    printf("\n");
    return 0;
}


int fact(int n)
{
    int sum = 1;
    for(int i=1; i<=n; i++)
    {
        sum = sum * i;
    }
    return sum;
}


/*

Print Factorial of Number
Enter Number : 6
Factorial of 6 is : 720

*/