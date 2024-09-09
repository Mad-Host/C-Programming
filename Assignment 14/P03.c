// C program to check weather the given number is even or odd.
// if its even return 1 otherwise return 0.

#include<stdio.h>

int check(int);
int main() 
{
    int num;
    
    printf("1 for Even and 0 for Odd\n");
    printf("Enter Your Number : ");
    scanf("%d",&num);
    
    if(num>0)
        printf("%d is %d",num,check(num));
    else 
        printf("%d, Number is Negative.",num);
    
    printf("\n");
    return 0;
}

int check(int n)
{
    return n%2? 0:1;
}


/*

1 for Even and 0 for Odd
Enter Your Number : 13
13 is 0


*/